#include"../head.h"
#include "task_inform.h"
#include "ui_task_inform.h"
#include "orderwidget.h"
#include "../all.h"
task_inform::task_inform(QString account, QWidget *parent)//修改
    :account(account), QWidget(parent)
    , ui(new Ui::task_inform)
{
    ui->setupUi(this);
    //修改
    Database db;
    QList<QVariantMap> orders = db.select_orders_information_rider(account,3);
    QPalette pa = ui->scrollArea->palette();
    pa.setBrush(QPalette::Window, Qt::transparent);
    ui->scrollArea->setPalette(pa);

    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &order : orders) {
        OrderWidget *orderWidget = new OrderWidget(order, container);
        layout->addWidget(orderWidget);
        connect(orderWidget, &OrderWidget::clicked, this, &task_inform::onOrderClicked);
    }
        layout->addStretch(); // 填充剩余空间

        // 先设置可调整大小，然后设置内容部件
        ui->scrollArea->setWidgetResizable(true);
        ui->scrollArea->setWidget(container);
        ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

}

void task_inform:: onOrderClicked(const QVariantMap &orderInfo){
    all al;
    int orderId = orderInfo["order_id"].toInt();
    al.update_order_statu(orderId, 4);
    this->hide();
    Rider_main*ridermain=new Rider_main(account);//修改
    ridermain->show();
    QJsonObject loginCommand;
    loginCommand["command"] = "change";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);
}


task_inform::~task_inform()
{
    delete ui;
}



void task_inform::on_pushButton_3_clicked()
{

}


void task_inform::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main*ridermain=new Rider_main(account);//修改
    ridermain->show();
}


void task_inform::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform* riderinform=new rider_inform(account);//修改
    riderinform->show();
}


void task_inform::on_pushButton_clicked()
{
    task_completed *completed = new task_completed(account);
    completed->show();
    this->close();


}

