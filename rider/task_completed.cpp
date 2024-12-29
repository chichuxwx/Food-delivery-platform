
#include"../head.h"
task_completed::task_completed(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::task_completed)
{
    ui->setupUi(this);
}

task_completed::~task_completed()
{
    delete ui;
}



//查看订单评价；
void task_completed::on_pushButton_5_clicked()
{
    this->hide();
    order_review* orderreview= new order_review;
    orderreview->show();
}


void task_completed::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main* ridermain=new Rider_main;
    ridermain->show();
}


void task_completed::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform*riderinform=new rider_inform;
    riderinform->show();
}


void task_completed::on_pushButton_3_clicked()
{

}

