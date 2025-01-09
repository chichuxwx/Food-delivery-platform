#include "storepage.h"
#include "ui_storepage.h"
#include"../head.h"


Storepage::Storepage(QString account,QString shop_name,QWidget *parent)
    :account(account),shop_name(shop_name), QWidget(parent)
    , ui(new Ui::Storepage)
{
    ui->setupUi(this);
}

Storepage::~Storepage()
{
    delete ui;
}

void Storepage::setSellerInfo(const QVariantMap &sellerInfo)
{
    m_sellerInfo = sellerInfo;
    displaySellerInfo();
}

void Storepage::displaySellerInfo(){
    //之后
}

void Storepage::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface(account);
    ConsumerInterface->show();
    this->close();
}


void Storepage::on_pushButton_8_clicked()
{
    Shoppingcart *shopcart=new Shoppingcart(account);
    shopcart->show();
    this->close();
}


void Storepage::on_pushButton_clicked()
{
    QString dish_name=ui->label_6->text();
    DetailedMenu *detail =new DetailedMenu(account,shop_name,dish_name);
    detail->show();
    this->close();
}


void Storepage::on_pushButton_3_clicked()
{
    QString dish_name=ui->label_6->text();
    DetailedMenu *detail =new DetailedMenu(account,shop_name,dish_name);
    detail->show();
    this->close();
}
// void Storepage::on_pushButton_6_clicked()
// {
//     QString dish_name=ui->label_6->text();
//     DetailedMenu *detail =new DetailedMenu(account,shop_name,dish_name);
//     detail->show();
//     this->close();
// }
void Storepage::on_pushButton_7_clicked()
{
    QString dish_name=ui->label_6->text();
    DetailedMenu *detail =new DetailedMenu(account,shop_name,dish_name);
    detail->show();
    this->close();
}
