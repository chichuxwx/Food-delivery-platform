#include"head.h"
rider_inform::rider_inform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::rider_inform)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);

}

rider_inform::~rider_inform()
{
    delete ui;
}

void rider_inform::on_pushButton_4_clicked()
{

}


void rider_inform::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main*ridermain=new Rider_main;
    ridermain->show();
}


void rider_inform::on_pushButton_3_clicked()
{
    this->hide();
    task_inform* taskinform=new task_inform;
    taskinform->show();
}


void rider_inform::on_pushButton_6_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}

