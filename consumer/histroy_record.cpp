#include "histroy_record.h"
#include "ui_histroy_record.h"
#include "../head.h"

histroy_record::histroy_record(QString account,QWidget *parent)
    : account(account),QWidget(parent)
    , ui(new Ui::histroy_record)
{
    // QList<QVariantMap> list=al.select_orders_somebody(account,0);
    // list+=al.select_orders_somebody(account,1);
    // list+=al.select_orders_somebody(account,2);
    // list+=al.select_orders_somebody(account,3);
    // QVariantMap l1=list[0],l2=list[1];
    // QString shop_name1=Se.search_seller_shop(l1["seller_id"].toString());
    // ui->label_8->setText(shop_name1);
    // ui->label_9->setText(l1["dish_name"]);
    // ui->label_13->setText(QString("2025年1月11日"));
    // int money=l1["price"].toInt()*l1["quantity"].toInt();
    // ui->label_11->setText(QString::number(money));
    // ui->label_12->setText(QString::number(money));
    // if(!l2.empty())
    // {
    //     QString shop_name2=Se.search_seller_shop(l2["seller_id"].toString());
    //     ui->label_21->setText(shop_name2);
    //     ui->label_22->setText(l2["dish_name"]);
    //     ui->label_26->setText(QString("2025年1月11日"));
    //     int money=l2["price"].toInt()*l2["quantity"].toInt();
    //     ui->label_24->setText(QString::number(money));
    //     ui->label_25->setText(QString::number(money));
    // }


    ui->setupUi(this);

}

histroy_record::~histroy_record()
{
    delete ui;
}

void histroy_record::on_pushButton_clicked()
{
    Consumer_Information *ConInfo=new Consumer_Information(account);
    ConInfo->show();
    this->close();
}

