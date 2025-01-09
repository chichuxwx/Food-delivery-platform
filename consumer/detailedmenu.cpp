#include "detailedmenu.h"
#include "ui_detailedmenu.h"
#include"../head.h"
#include<QVariantMap>

DetailedMenu::DetailedMenu(QString account,QString shop_name,QString dish_name,QWidget *parent)
    : account(account),shop_name(shop_name),dish_name(dish_name),QWidget(parent)
    , ui(new Ui::DetailedMenu)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
}

DetailedMenu::~DetailedMenu()
{
    delete ui;
}

void DetailedMenu::on_pushButton_2_clicked()
{
    Storepage *store=new Storepage(account,shop_name);
    store->show();
    this->close();
}

void DetailedMenu::changebuttonstatues(){
    bool checkBoxReady=ui->checkBox->isChecked()||ui->checkBox_2->isChecked() &&
                  ui->checkBox_3->isChecked()||ui->checkBox_4->isChecked()||ui->checkBox_5->isChecked();
    ui->pushButton->setEnabled(checkBoxReady);
}

void DetailedMenu::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_2->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_4_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_5->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_5->setChecked(false);
        ui->checkBox_4->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_5_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_4->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_pushButton_clicked()//修改
{
    QVariantMap order_infor;
    QString account_2=database.get_account_byshop(shop_name);
    order_infor["seller_id"]=account_2;
    order_infor["customer_id"]=account;
    order_infor["dish_name"]=dish_name;
    QList<QVariantMap> list=sl.search_selller_dish_information(account_2);
    QVariantMap map;
    for(auto dish:list)
    {
        if(dish["dish_name"]==dish_name)
        {
            map=dish;
        }
    }

    order_infor["price"]=map["price"].toDouble();
    if(ui->checkBox->isChecked())
    {
        order_infor["quantity"]=1;
        QString total=QString("总计价格:%1").arg(map["price"].toInt());
        ui->label_8->setText(total);
    }

    else
        {
        order_infor["quantity"]=2;
        QString total=QString("总计价格:%1").arg(2*map["price"].toInt());
        ui->label_8->setText(total);
    }

    if(ui->checkBox_4->isChecked())
        order_infor["note"]="微辣";
    else if(ui->checkBox_3->isChecked())
        order_infor["note"]="免辣";
    else
        order_infor["note"]="特辣";
    Cus.add_cart(order_infor);



    return ;


}

