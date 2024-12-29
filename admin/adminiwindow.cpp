#include "adminiwindow.h"
#include "ui_adminiwindow.h"

#include"../head.h"

adminiwindow::adminiwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminiwindow)
{
    ui->setupUi(this);
}

adminiwindow::~adminiwindow()
{
    delete ui;
}
void adminiwindow::on_pushButton_4_clicked()
{
    admini_check *ConsumerInterface=new admini_check();
    ConsumerInterface->show(); this->close();
}


void adminiwindow::on_pushButton_5_clicked()
{
    admini_info *ConsumerInterface=new admini_info();
    ConsumerInterface->show(); this->close();
}

