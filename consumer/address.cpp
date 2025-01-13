#include "address.h"
#include "ui_address.h"
#include "../head.h"

address::address(QString account,QString add,QWidget *parent)
    : account(account),add(add),QWidget(parent)
    , ui(new Ui::address)
{
    ui->setupUi(this);
    ui->textBrowser->setText(Cus.get_customer_add(account));
}

address::~address()
{
    delete ui;
}

void address::on_pushButton_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information(account);
    QJsonObject storeCommand;
    storeCommand["command"] = "change";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    ConInfo->show();
    this->close();
}


void address::on_pushButton_2_clicked()
{
    add=Cus.get_customer_add(account);//修改
    Map *map=new Map(account);
    map->show();

}


void address::on_pushButton_3_clicked()
{

}


void address::on_pushButton_4_clicked()
{

}

