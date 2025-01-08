#include "admini_main.h"
#include "ui_admini_main.h"

#include"../head.h"

admini_main::admini_main(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_main)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_main::~admini_main()
{
    delete ui;
}

void admini_main::on_pushButton_4_clicked()
{
    admini_check *ConsumerInterface=new admini_check();
    ConsumerInterface->show();
    this->close();
}


void admini_main::on_pushButton_5_clicked()
{
    admini_info *ConsumerInterface=new admini_info();
    ConsumerInterface->show();
    this->close();
}


void admini_main::on_pushButton_clicked()
{
    QJsonObject loginCommand;
    loginCommand["command"] = "change";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);

}


void admini_main::on_pushButton_2_clicked()
{
    QJsonObject loginCommand;
    loginCommand["command"] = "read_admin";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);

}

