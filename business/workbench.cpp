#include "workbench.h"
#include "ui_workbench.h"
#include "../head.h"

page_workbench::page_workbench(QString account,QWidget *parent)//这里按理来说应该根据数据库内容修改页面上的销量数据
    : account(account),QWidget(parent)
    , ui(new Ui::page_workbench)
{
    ui->setupUi(this);
    this->setFixedSize(600,800);
}

    page_workbench::~page_workbench()
{
    delete ui;
}

void page_workbench::on_label_data_day_linkActivated(const QString &link)
{

}


void page_workbench::on_label_data_month_linkActivated(const QString &link)
{

}


void page_workbench::on_pushButton_good_man_clicked()
{
    good_mange *good_Mange=new good_mange(account);
    good_Mange->show();
    this->close();

}


void page_workbench::on_pushButton_evalute_clicked()
{
    evalute* Evalute=new evalute(account);
    Evalute->show();
    this->close();

}


void page_workbench::on_pushButton_good_act_clicked()
{

    good_act *good_Act=new good_act(account);
    good_Act->show();
    this->close();
}


void page_workbench::on_pushButton_order_clicked()
{
    shangjia *sjmain=new shangjia(account);
    sjmain->show();
    this->close();
}


void page_workbench::on_pushButton_workbench_clicked()
{

    //还是在本界面中，不需要操作
}


void page_workbench::on_pushButton_self_inform_clicked()
{
    inform *Inform=new inform(account);
    Inform->show();
    this->close();

}

void page_workbench::on_label_6_linkActivated(const QString &link)
{
}


