#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include "head.h"

Shoppingcart::Shoppingcart(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Shoppingcart)
{
    ui->setupUi(this);
}

Shoppingcart::~Shoppingcart()
{
    delete ui;
}

void Shoppingcart::on_pushButton_clicked()
{
    Storepage *store=new Storepage();
    store->show();
    this->close();
}


void Shoppingcart::on_pushButton_8_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface();
    ConsumerInterface->show();
    this->close();
}

