#include "inform_change.h"
#include "ui_inform_change.h"
#include "../head.h"

inform_change::inform_change(QString account,QWidget *parent)
    : account(account),QWidget(parent)
    , ui(new Ui::inform_change)
{
    ui->setupUi(this);
}

inform_change::~inform_change()
{
    delete ui;
}

void inform_change::on_label_2_linkActivated(const QString &link)
{

}


void inform_change::on_pushButton_2_clicked()//理论上来说这里要写商家修改个人信息 但是数据库没给这样的函数 暂时不动
{   Database db;
    QString name,phone_number;
    name=ui->textEdit->toPlainText();
    bool a=db.update_seller_shop_name(account,name);
    phone_number=ui->textEdit_2->toPlainText();
    bool b=db.update_seller_phone(account,phone_number);
    if(a&&b)
    QMessageBox::information(this,"成功","修改成功");
    //再重新更新信息

    QJsonObject loginCommand;
    loginCommand["command"] = "change";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);

}



void inform_change::on_pushButton_clicked()
{
    inform *Inform=new inform(account);
    Inform->show();
    this->close();
}

