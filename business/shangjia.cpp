#include "shangjia.h"
#include "ui_shangjia.h"
#include"../head.h"
shangjia::shangjia(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::shangjia)
{
    ui->setupUi(this);
}

shangjia::~shangjia()
{
    delete ui;
}

void shangjia::on_pushButton_2_clicked()
{
    shangjia2 *j=new shangjia2();
    j->show();
    this->close();
}


void shangjia::on_pushButton_3_clicked()
{
    shangjia3 *j=new shangjia3();
    j->show();
    this->close();
}


void shangjia::on_pushButton_7_clicked()
{
    QJsonObject loginCommand;
    loginCommand["command"] = "change";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);
}


void shangjia::on_pushButton_clicked()
{
    //什么都不做
}


void shangjia::on_pushButton_6_clicked()
{
    page_workbench *workbench=new page_workbench();
    workbench->show();
    this->close();
}


void shangjia::on_pushButton_5_clicked()
{
    inform *Inform=new inform;
    Inform->show();
    this->close();
}

