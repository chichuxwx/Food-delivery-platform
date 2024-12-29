#include "orderstatus.h"
#include "ui_orderstatus.h"
#include "head.h"

OrderStatus::OrderStatus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderStatus)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(false);//可以拖动滚动条
    //竖滚动条和横滚动条都可以一直显示
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
    ui->scrollAreaWidgetContents->setGeometry(0, 0, 600, 700);
}

OrderStatus::~OrderStatus()
{
    delete ui;
}

void OrderStatus::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface();
    ConsumerInterface->show();
    this->close();
}


void OrderStatus::on_pushButton_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}


void OrderStatus::on_pushButton_5_clicked()
{
    Con_reviews *review=new Con_reviews();
    review->show();
    this->close();
}


void OrderStatus::on_pushButton_6_clicked()
{
    Con_reviews *review=new Con_reviews();
    review->show();
    this->close();
}

