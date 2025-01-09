#include "shangjia.h"
#include "ui_shangjia.h"
#include"../head.h"
shangjia::shangjia(QString account,QWidget *parent)//修改 这里list是符合条件的所有订单 按理来说应该在页面上显示一部分订单 但我不会 所以这里只显示一个
    :account(account), QWidget(parent)
    , ui(new Ui::shangjia)
{
    ui->setupUi(this);
    QList<QVariantMap> list=al.select_orders_somebody(account,0);
    if (!list.isEmpty()) {
        QVariantMap firstMap = list.at(0);

        ui->textBrowser_2->setText(firstMap["dish_name"].toString());
        ui->textBrowser_3->setText(firstMap["remark"].toString());//订单表中没有地址 只有备注
        myorderID=firstMap["order_id"].toString();
    }

}

shangjia::~shangjia()
{
    delete ui;
}

void shangjia::on_pushButton_2_clicked()
{
    shangjia2 *j=new shangjia2(account);
    j->show();
    this->close();
}


void shangjia::on_pushButton_3_clicked()
{
    shangjia3 *j=new shangjia3(account);
    j->show();
    this->close();
}


void shangjia::on_pushButton_7_clicked()//修改 接单按钮
{
    al.update_order_statu(myorderID.toInt(),1) ;
    QList<QVariantMap> list=al.select_orders_somebody(account,0);
    if (!list.isEmpty()) {
        QVariantMap firstMap = list.at(0);

        ui->textBrowser_2->setText(firstMap["dish_name"].toString());
        ui->textBrowser_3->setText(firstMap["remark"].toString());//订单表中没有地址 只有备注
        myorderID=firstMap["order_id"].toString();
    }
}


void shangjia::on_pushButton_clicked()
{
    //什么都不做
}


void shangjia::on_pushButton_6_clicked()
{
    page_workbench *workbench=new page_workbench(account);
    workbench->show();
    this->close();
}


void shangjia::on_pushButton_5_clicked()
{
    inform *Inform=new inform(account);
    Inform->show();
    this->close();
}

