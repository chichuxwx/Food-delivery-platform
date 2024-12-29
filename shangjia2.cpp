#include "shangjia2.h"
#include "ui_shangjia2.h"
#include "head.h"
shangjia2::shangjia2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::shangjia2)
{
    ui->setupUi(this);
}

shangjia2::~shangjia2()
{
    delete ui;
}

void shangjia2::on_pushButton_clicked()
{
    shangjia *j=new shangjia();
    j->show();
    this->close();
}


void shangjia2::on_pushButton_2_clicked()
{
    //什么都不做
}


void shangjia2::on_pushButton_3_clicked()
{
    shangjia3 *j=new shangjia3();
    j->show();
    this->close();
}


void shangjia2::on_pushButton_4_clicked()
{
    //什么都不做
}


void shangjia2::on_pushButton_6_clicked()
{
    //跳转到工作台 等待有缘人完善
}


void shangjia2::on_pushButton_5_clicked()
{
    //跳转到个人信息 等待有缘人完善
}

