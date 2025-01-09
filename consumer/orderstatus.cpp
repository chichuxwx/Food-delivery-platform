#include "orderstatus.h"
#include "ui_orderstatus.h"
#include"../head.h"

OrderStatus::OrderStatus(QString account,QWidget *parent)//修改
    : account(account),QWidget(parent)
    , ui(new Ui::OrderStatus)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(false);//可以拖动滚动条
    //竖滚动条和横滚动条都可以一直显示
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
    ui->scrollAreaWidgetContents->setGeometry(0, 0, 600, 700);
    QList<QVariantMap> list=al.select_orders_somebody(account,0);
    list+=al.select_orders_somebody(account,1);
    list+=al.select_orders_somebody(account,2);
    list+=al.select_orders_somebody(account,3);
    QVariantMap l1=list[0],l2=list[1];
    QString shop_name1=Se.search_seller_shop(l1["seller_id"].toString());
    ui->label->setText(shop_name1);
    ui->label_3->setText(l1["dish_name"].toString());
    int money=l1["price"].toInt()*l1["quantity"].toInt();
    ui->label_5->setText(QString("总价格为：%1").arg(money));
    QString sta;
    if(l1["status"]==0)
    {
        sta+="商家未接单";
    }
    else if(l1["status"]==1)
    {
        sta+="骑手未抢单";
    }
    else if(l1["status"]==2)
    {
        sta+="骑手未送达";
    }
    else{
        sta+="已送达";
    }
    ui->label_6->setText(QString("订单状态:")+sta);
    if(!l2.empty())
    {
        QString shop_name2=Se.search_seller_shop(l2["seller_id"].toString());
        ui->label_10->setText(shop_name2);
        ui->label_12->setText(l2["dish_name"].toString());
        int money=l2["price"].toInt()*l2["quantity"].toInt();
        ui->label_7->setText(QString::number(money));
        if(l2["status"]==0)
        {
            sta+="商家未接单";
        }
        else if(l2["status"]==1)
        {
            sta+="骑手未抢单";
        }
        else if(l2["status"]==2)
        {
            sta+="骑手未送达";
        }
        else{
            sta+="已送达";
        }
        ui->label_9->setText(QString("订单状态:")+sta);

    }
}

OrderStatus::~OrderStatus()
{
    delete ui;
}

void OrderStatus::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface(account);
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
    Con_reviews *review=new Con_reviews(account);
    review->show();
    this->close();
}


void OrderStatus::on_pushButton_6_clicked()
{
    Con_reviews *review=new Con_reviews(account);
    review->show();
    this->close();
}


void OrderStatus::on_pushButton_4_clicked()
{
    Consumer_Information *coninfo=new Consumer_Information(account);
    coninfo->show();
    this->close();
}

