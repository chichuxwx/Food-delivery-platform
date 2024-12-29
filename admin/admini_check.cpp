#include "admini_check.h"
#include "ui_admini_check.h"

#include"../head.h"

admini_check::admini_check(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_check)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_check::~admini_check()
{
    delete ui;
}

void admini_check::on_pushButton_3_clicked()
{
    admini_info *ConsumerInterface=new admini_info();
    ConsumerInterface->show();
    this->close();
}

void admini_check::on_pushButton_clicked()
{
    admini_main *ConsumerInterface=new admini_main();
    ConsumerInterface->show();
    this->close();
}

