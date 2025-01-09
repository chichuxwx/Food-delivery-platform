#include "shangjia3.h"
#include "ui_shangjia3.h"
#include "../head.h"
shangjia3::shangjia3(QString account,QWidget *parent)//修改 这里list是符合条件的所有订单 按理来说应该在页面上显示一部分订单 但我不会 所以这里只显示一个
    :account(account), QWidget(parent)
    , ui(new Ui::shangjia3)
{
    ui->setupUi(this);
    QList<QVariantMap> list=al.select_orders_somebody(account,3);
    if (!list.isEmpty()) {
        QVariantMap firstMap = list.at(0);
        ui->textBrowser_2->setText(firstMap["dish_name"].toString());
        ui->textBrowser_3->setText(firstMap["remark"].toString());//订单表中没有地址 只有备注
    }
}

shangjia3::~shangjia3()
{
    delete ui;
}

void shangjia3::on_pushButton_clicked()
{
    shangjia *j=new shangjia(account);
    j->show();
    this->close();
}


void shangjia3::on_pushButton_2_clicked()
{
    shangjia2 *j=new shangjia2(account);
    j->show();
    this->close();
}


void shangjia3::on_pushButton_3_clicked()
{
    //什么都不做
}


void shangjia3::on_pushButton_4_clicked()
{
    //什么都不做
}


void shangjia3::on_pushButton_6_clicked()
{
    page_workbench *workbench=new page_workbench(account);
    workbench->show();
    this->close();
}


void shangjia3::on_pushButton_5_clicked()
{
    inform *Inform=new inform(account);
    Inform->show();
    this->close();

}

