#include"../head.h"
task_inform::task_inform(QString account, QWidget *parent)//修改
    :account(account), QWidget(parent)
    , ui(new Ui::task_inform)
{
    ui->setupUi(this);
    //修改
    Database db;
    QList<QVariantMap> orders = db.select_orders_information_rider(account, 1);
    QVariantMap order=orders[0];
    QString remark=order["remark"].toString();
    ui->label_2->setText("01");
    ui->label_4->setText("一份");
    ui->label_6->setText(remark);
}

task_inform::~task_inform()
{
    delete ui;
}



void task_inform::on_pushButton_3_clicked()
{

}


void task_inform::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main*ridermain=new Rider_main(account);//修改
    ridermain->show();
}


void task_inform::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform* riderinform=new rider_inform(account);//修改
    riderinform->show();
}


void task_inform::on_pushButton_clicked()
{
    Database db;
    this->hide();
    task_completed*taskcompleted=new task_completed(account);//修改
    QList<QVariantMap> orders = db.select_orders_information_rider(account, 1);
    QVariantMap order=orders[0];
    int order_id=order["order_id"].toInt();
    db.update_order_statu(order_id,3);
    taskcompleted->show();
}

