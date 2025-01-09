#include "rider_main.h"
#include "ui_rider_main.h"
#include "rider_inform.h"       // 确保这些类已定义
#include "task_inform.h"
#include "../head.h"

Rider_main::Rider_main(QString account,QWidget *parent)
    : QWidget(parent),account(account)
    , ui(new Ui::Rider_main)
    , timeThread(new QThread(this))          // 初始化线程
    , timeWorker(new TimeWorker())           // 初始化工作对象
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);

    // 将 TimeWorker 移动到线程中
    timeWorker->moveToThread(timeThread);

    // 连接信号和槽
    connect(timeThread, &QThread::started, timeWorker, &TimeWorker::start);
    connect(timeWorker, &TimeWorker::currentTime, this, &Rider_main::updateTimeLabel);
    connect(timeWorker, &TimeWorker::finished, this, &Rider_main::countThreadFinished);
    connect(timeWorker, &TimeWorker::finished, timeThread, &QThread::quit);
    connect(timeThread, &QThread::finished, timeWorker, &QObject::deleteLater);
    connect(timeThread, &QThread::finished, timeThread, &QObject::deleteLater);

    // 启动线程
    timeThread->start();
        // 获取订单信息
    QList<QVariantMap> orders = db.select_orders_information_rider(account, 1);


    // 从第一个订单中获取用户 ID
    QVariantMap firstOrder = orders[0];
    QString customerId = firstOrder["customer_id"].toString();

    // 设置用户 ID 到 label28
    ui->label_28->setText(customerId);

    QVariantMap customermap=cu.get_customer_infor(customerId);
    QString customerPhone = customermap["phone"].toString();

    // 设置联系电话到 label30
    ui->label_30->setText(customerPhone);
    ui->label_32->setText("10公里");

    //订单2
    QVariantMap secondOrder = orders[1];
    customerId = secondOrder["customer_id"].toString();

    // 设置用户 ID 到 label20
    ui->label_20->setText(customerId);

    // 获取用户信息
    customermap = cu.get_customer_infor(customerId);
    customerPhone = customermap["phone"].toString();

    // 设置联系电话到 label22
    ui->label_22->setText(customerPhone);

    // 设置公里数到 label24
    ui->label_24->setText("10公里"); // 示例公里数
}

Rider_main::~Rider_main()
{
    if (timeThread && timeThread->isRunning()) {
        timeWorker->stop();
        timeThread->quit();
        timeThread->wait();
    }
    delete ui;
}

void Rider_main::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform* riderinform = new rider_inform(account);
    riderinform->show();
}

void Rider_main::on_pushButton_3_clicked()
{
    this->hide();
    task_inform* taskinform = new task_inform(account);
    taskinform->show();
}

void Rider_main::on_pushButton_clicked()
{
    this->hide();
    task_inform* taskinform = new task_inform(account);

    QJsonObject loginCommand;
    loginCommand["command"] = "change";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);

    taskinform->show();
}

void Rider_main::updateTimeLabel(const QString &time)
{
    QString remainingTime = leftTime(time, "16:00:00"); // 计算剩余时间
    ui->timelabel->setText( remainingTime);
}

QString Rider_main::leftTime(const QString &currentTime, const QString &targetTime)
{
    QTime current = QTime::fromString(currentTime, "hh:mm:ss");
    QTime target = QTime::fromString(targetTime, "hh:mm:ss");

    // 如果当前时间晚于目标时间，假设目标时间是第二天
    if (current > target) {
        target = target.addSecs(24 * 3600); // 加一天
    }

    int secondsLeft = current.secsTo(target);
    int hours = secondsLeft / 3600;
    int minutes = (secondsLeft % 3600) / 60;
    int seconds = secondsLeft % 60;

    return QString("%1:%2:%3")
        .arg(hours, 2, 10, QChar('0'))
        .arg(minutes, 2, 10, QChar('0'))
        .arg(seconds, 2, 10, QChar('0'));
}

void Rider_main::countThreadFinished()
{
    // 线程结束后的逻辑处理
    ui->timelabel->setText("倒计时结束");
}
