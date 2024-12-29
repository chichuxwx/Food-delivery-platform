#include "good_mange.h"
#include "ui_good_mange.h"
#include "../head.h"
good_mange::good_mange(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::good_mange)
{
    ui->setupUi(this);
    this->setFixedSize(600,800);
}

good_mange::~good_mange()
{
    delete ui;
}

void good_mange::on_pushButton_back_clicked()
{
    page_workbench *page_WorkBench=new page_workbench;
    page_WorkBench->show();
    this->close();


}


void good_mange::on_pushButton_add_good_clicked()
{
    dishchange *dishChange=new dishchange;
    dishChange->show();
    this->close();
}

