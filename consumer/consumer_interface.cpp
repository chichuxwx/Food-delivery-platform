#include "consumer_interface.h"
#include "ui_consumer_interface.h"
#include"../head.h"
Consumer_interface::Consumer_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consumer_interface)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

Consumer_interface::~Consumer_interface()
{
    delete ui;
}

void Consumer_interface::on_pushButton_clicked()
{
    login *log = new login();
    log->show();
    this->close();
}


void Consumer_interface::on_pushButton_6_clicked()
{
    Storepage *store=new Storepage();
    //这里逻辑待定 商家编号怎么获取
    QJsonObject storeCommand;
    storeCommand["command"] = "read_store";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    QJsonObject credentials;
    //credentials["商家编号"] = code; //之后删
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);
    store->show();
    this->close();
}


void Consumer_interface::on_pushButton_5_clicked()
{
    Storepage *store=new Storepage();
    //这里逻辑待定 商家编号怎么获取
    QJsonObject storeCommand;
    storeCommand["command"] = "read_store";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    QJsonObject credentials;
    //credentials["商家编号"] = code; //之后删
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    store->show();
    this->close();
}


void Consumer_interface::on_pushButton_3_clicked()
{
    OrderStatus *orderstatus=new OrderStatus();

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

    orderstatus->show();
    this->close();
}


void Consumer_interface::on_pushButton_4_clicked()
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

    //
}

