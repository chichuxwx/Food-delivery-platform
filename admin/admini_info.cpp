#include "admini_info.h"
#include "ui_admini_info.h"

#include"../head.h"

admini_info::admini_info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_info)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_info::~admini_info()
{
    delete ui;
}

void admini_info::on_pushButton_clicked()
{
    admini_info_done *ConsumerInterface=new admini_info_done();
    ConsumerInterface->show();
    this->close();
}

void admini_info::on_pushButton_3_clicked()
{
    admini_main *ConsumerInterface=new admini_main();
    ConsumerInterface->show();
    this->close();
}


void admini_info::on_pushButton_5_clicked()
{
    admini_check *ConsumerInterface=new admini_check();
    ConsumerInterface->show();
    this->close();
}

void admini_info::on_pushButton_2_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}

