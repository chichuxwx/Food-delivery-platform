#include "good_act.h"
#include "ui_good_act.h"
#include "../head.h"
good_act::good_act(QString account,QWidget *parent)
    : account(account),QWidget(parent)
    , ui(new Ui::good_act)
{
    ui->setupUi(this);
    this->setFixedSize(600,800);
}
good_act::~good_act()
{
    delete ui;
}


void good_act::on_pushButton_clicked()
{
    page_workbench *page_Workbench=new page_workbench(account);
    page_Workbench->show();
    this->close();
}


void good_act::on_pushButton_2_clicked()//修改 理论上来说这里应该设定满减 但数据库没有设定满减的函数 所以没写
{
    bool ok;
    qint64 value;
    qint64  value_desc;
    value =ui->lineEdit_value->text().toLongLong(&ok,10);
    value_desc=ui->lineEdit_value_desc->text().toLongLong(&ok,10);
    QMessageBox::information(this,"成功","设置成功");
    //信息更新


}

