#include "admini_check.h"
#include "ui_admini_check.h"
#include "admini_orderwidget.h"
#include"../head.h"

admini_check::admini_check(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_check)
{
    ui->setupUi(this);
    display();
    this->setFixedSize(600, 800);
}
void admini_check::display()
{
    Database db;
    //QList<QVariantMap> sellers = db.select_seller_information();
    QList<QVariantMap> list=db.select_orders_information_all();
    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &seller : list) {
        AdminOrderWidget *orderWidget = new AdminOrderWidget(seller, container);
        layout->addWidget(orderWidget);
    }

    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}

admini_check::~admini_check()
{
    delete ui;
}

void admini_check::on_pushButton_3_clicked()
{
    admini_info *ConsumerInterface=new admini_info();
    ConsumerInterface->show();
    this->close();
}

void admini_check::on_pushButton_clicked()
{
    admini_main *ConsumerInterface=new admini_main();

    QJsonObject loginCommand;
    loginCommand["command"] = "read_admin";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);


    ConsumerInterface->show();
    this->close();
}

