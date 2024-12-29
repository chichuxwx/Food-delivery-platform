#include "histroy_record.h"
#include "ui_histroy_record.h"
#include "../head.h"

histroy_record::histroy_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::histroy_record)
{
    ui->setupUi(this);
}

histroy_record::~histroy_record()
{
    delete ui;
}

void histroy_record::on_pushButton_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information();
    ConInfo->show();
    this->close();
}

