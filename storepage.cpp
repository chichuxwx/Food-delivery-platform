#include "storepage.h"
#include "ui_storepage.h"
#include "head.h"


Storepage::Storepage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Storepage)
{
    ui->setupUi(this);
}

Storepage::~Storepage()
{
    delete ui;
}

void Storepage::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface();
    ConsumerInterface->show();
    this->close();
}


void Storepage::on_pushButton_8_clicked()
{
    Shoppingcart *shopcart=new Shoppingcart();
    shopcart->show();
    this->close();
}

