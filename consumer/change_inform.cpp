#include "change_inform.h"
#include "ui_change_inform.h"
#include "../head.h"

change_inform::change_inform(QString account,QWidget *parent)
    : account(account),QWidget(parent)
    , ui(new Ui::change_inform)
{//修改
    ui->setupUi(this);
    QVariantMap list=Cus.get_customer_infor(account);
    ui->textBrowser->setText(list["username"].toString());
    ui->textBrowser_2->setText(list["address"].toString());
    ui->textBrowser_3->setText(list["password"].toString());
    ui->textBrowser->setTextInteractionFlags(Qt::TextEditorInteraction);
    ui->textBrowser_2->setTextInteractionFlags(Qt::TextEditorInteraction);
    ui->textBrowser_3->setTextInteractionFlags(Qt::TextEditorInteraction);
}

change_inform::~change_inform()
{
    delete ui;
}

void change_inform::on_pushButton_clicked()
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

