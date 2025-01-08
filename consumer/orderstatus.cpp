#include "orderstatus.h"
#include "ui_orderstatus.h"
#include"../head.h"

OrderStatus::OrderStatus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderStatus)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(false);//可以拖动滚动条
    //竖滚动条和横滚动条都可以一直显示
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
    ui->scrollAreaWidgetContents->setGeometry(0, 0, 600, 700);
}

OrderStatus::~OrderStatus()
{
    delete ui;
}

void OrderStatus::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface();

    QJsonObject storeCommand;
    storeCommand["command"] = "read_business";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);

    ConsumerInterface->show();
    this->close();
}


void OrderStatus::on_pushButton_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}


void OrderStatus::on_pushButton_5_clicked()
{
    Con_reviews *review=new Con_reviews();
    review->show();
    this->close();
}


void OrderStatus::on_pushButton_6_clicked()
{
    Con_reviews *review=new Con_reviews();
    review->show();
    this->close();
}


void OrderStatus::on_pushButton_4_clicked()
{
    Consumer_Information *coninfo=new Consumer_Information();

    QJsonObject storeCommand;
    storeCommand["command"] = "read_consumer";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    // 发送账号查询
    QJsonObject credentials;
    //credentials["类型"] = account; //之后删
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    coninfo->show();
    this->close();
}

