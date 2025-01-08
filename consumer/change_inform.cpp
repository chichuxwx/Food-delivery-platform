#include "change_inform.h"
#include "ui_change_inform.h"
#include "../head.h"

change_inform::change_inform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::change_inform)
{
    ui->setupUi(this);
}

change_inform::~change_inform()
{
    delete ui;
}

void change_inform::on_pushButton_clicked()
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

