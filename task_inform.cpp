#include"head.h"
task_inform::task_inform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::task_inform)
{
    ui->setupUi(this);
}

task_inform::~task_inform()
{
    delete ui;
}



void task_inform::on_pushButton_3_clicked()
{

}


void task_inform::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main*ridermain=new Rider_main;
    ridermain->show();
}


void task_inform::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform* riderinform=new rider_inform;
    riderinform->show();
}


void task_inform::on_pushButton_clicked()
{
    this->hide();
    task_completed*taskcompleted=new task_completed;
    taskcompleted->show();
}

