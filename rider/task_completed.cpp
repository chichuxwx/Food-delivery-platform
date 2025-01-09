
#include"../head.h"
task_completed::task_completed(QString account,QWidget *parent)//修改
    : QWidget(parent)
    , ui(new Ui::task_completed)
{
    ui->setupUi(this);

    //修改
    Database db;
    QList<QVariantMap> orders = db.select_orders_information_rider(account, 3);
    QVariantMap order=orders[0];
    ui->label_2->setText("01");
    QString remark=order["remark"].toString();
    QString orderText = QString(
                            "Customer ID: %1\n"
                            "Dish Name: %2\n"
                            "Consumption Amount: %3\n"
                            "Remark: %4\n"
                            "Dish Amount: %5\n"
                            "Seller ID: %6\n"
                            "--------------------------\n"
                            ).arg(order["customer_id"].toString())
                            .arg(order["dish_name"].toString())
                            .arg(order["consumption_amount"].toDouble())
                            .arg(order["remark"].toString())
                            .arg(order["dish_amount"].toInt())
                            .arg(order["seller_id"].toString());

    ui->textBrowser->setText(orderText);
    ui->label_4->setText("一份");
    ui->label_6->setText(remark);
}

task_completed::~task_completed()
{
    delete ui;
}



//查看订单评价；
void task_completed::on_pushButton_5_clicked()
{
    this->hide();
    order_review* orderreview= new order_review(account);//修改
    orderreview->show();
}


void task_completed::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main* ridermain=new Rider_main(account);//修改
    ridermain->show();
}


void task_completed::on_pushButton_4_clicked()
{
    this->hide();
    rider_inform*riderinform=new rider_inform(account);//修改
    riderinform->show();
}


void task_completed::on_pushButton_3_clicked()
{

}

