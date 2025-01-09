#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include"../head.h"

Shoppingcart::Shoppingcart(QString account,QWidget *parent)//修改
    : account(account),QWidget(parent)
    , ui(new Ui::Shoppingcart)
{
    ui->setupUi(this);
    QList<QVariantMap> list=Cus.get_cart_infor(account);

}

Shoppingcart::~Shoppingcart()
{
    delete ui;
}

void Shoppingcart::on_pushButton_clicked()
{
    Storepage *store=new Storepage(account);
    store->show();
    this->close();
}


void Shoppingcart::on_pushButton_8_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface(account);
    ConsumerInterface->show();
    this->close();
}

