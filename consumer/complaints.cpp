#include "complaints.h"
#include "ui_complaints.h"
#include "../head.h"
#include<QMessageBox>
complaints::complaints(QString account,QWidget *parent)
    : account(account),QWidget(parent)
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

    Consumer_Information *ConInfo=new Consumer_Information(account);
    ConInfo->show();
    this->close();
}


void complaints::on_pushButton_8_clicked()//修改
{
    QString text = ui->textEdit->toPlainText();
    if (text.isEmpty())
    {
        QMessageBox::warning(this, "失败", "您的信息没有填写完整");
    }
    else{
    Consumer_Information *ConInfo=new Consumer_Information(account);
    ConInfo->show();
    this->close(); }
}

