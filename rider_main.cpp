
#include"head.h"
#include "ui_rider_main.h"
Rider_main::Rider_main(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rider_main)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);

}

Rider_main::~Rider_main()
{
    delete ui;
}

void Rider_main::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform* riderinform=new rider_inform;
    riderinform->show();
}


void Rider_main::on_pushButton_3_clicked()
{
    this->hide();
    task_inform* taskinform=new task_inform;
    taskinform->show();
}


void Rider_main::on_pushButton_clicked()
{
    this->hide();
    task_inform *taskinform=new task_inform;
    taskinform->show();
}

