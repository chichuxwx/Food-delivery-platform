#include "address.h"
#include "ui_address.h"
#include "../head.h"

address::address(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::address)
{
    ui->setupUi(this);
}

address::~address()
{
    delete ui;
}

void address::on_pushButton_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information();

    QJsonObject storeCommand;
    storeCommand["command"] = "change";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);

    ConInfo->show();
    this->close();
}

