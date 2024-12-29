#include "complaints.h"
#include "ui_complaints.h"
#include "../head.h"

complaints::complaints(QWidget *parent)
    : QWidget(parent)
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
    Consumer_Information *ConInfo=new Consumer_Information();
    ConInfo->show();
    this->close();
}


void complaints::on_pushButton_8_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information();
    ConInfo->show();
    this->close();
}

