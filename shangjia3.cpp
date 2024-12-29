#include "shangjia3.h"
#include "ui_shangjia3.h"
#include "head.h"
shangjia3::shangjia3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::shangjia3)
{
    ui->setupUi(this);
}

shangjia3::~shangjia3()
{
    delete ui;
}

void shangjia3::on_pushButton_clicked()
{
    shangjia *j=new shangjia();
    j->show();
    this->close();
}


void shangjia3::on_pushButton_2_clicked()
{
    shangjia2 *j=new shangjia2();
    j->show();
    this->close();
}


void shangjia3::on_pushButton_3_clicked()
{
    //什么都不做
}


void shangjia3::on_pushButton_4_clicked()
{
    //什么都不做
}


void shangjia3::on_pushButton_6_clicked()
{
    //跳转到工作台 等待有缘人完善
}


void shangjia3::on_pushButton_5_clicked()
{
    //跳转到个人信息 等待有缘人完善
}

