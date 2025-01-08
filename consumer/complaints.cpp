#include "complaints.h"
#include "ui_complaints.h"
#include "../head.h"

complaints::complaints(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::complaints)
{
    ui->setupUi(this);
}

complaints::~complaints()
{
    delete ui;
}

void complaints::on_pushButton_2_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information();
    ConInfo->show();
    this->close();
}


void complaints::on_pushButton_8_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information();

    QJsonObject storeCommand;
    storeCommand["command"] = "store";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);

    QString comm1 = ui->textEdit->toPlainText();
    QString comm2 = ui->textEdit_2->toPlainText();
    QJsonObject credentials;
    credentials["不满意"]=comm1;
    credentials["改进"]=comm2;
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    ConInfo->show();
    this->close();
}

