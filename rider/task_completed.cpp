#include"../head.h"
#include "ui_task_completed.h"
#include "task_completed.h"
#include "../all.h"
#include "orderwidget.h"
task_completed::task_completed(QString account,QWidget *parent)//修改
    : account(account),QWidget(parent)
    , ui(new Ui::task_completed)
{
    ui->setupUi(this);
    Database db;
    QList<QVariantMap> orders = db.select_orders_information_rider(account,4);
    QPalette pa = ui->scrollArea->palette();
    pa.setBrush(QPalette::Window, Qt::transparent);
    ui->scrollArea->setPalette(pa);

    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &order : orders) {
        OrderWidget *orderWidget = new OrderWidget(order, container);
        layout->addWidget(orderWidget);
        connect(orderWidget, &OrderWidget::clicked, this, &task_completed::onOrderClicked);
    }
    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

}

task_completed::~task_completed()
{
    delete ui;
}

void task_completed::onOrderClicked(){
    order_review* orderreview= new order_review(account);//修改
    orderreview->show();
    this->hide();
}

//查看订单评价；
void task_completed::on_pushButton_5_clicked()
{
    order_review* orderreview= new order_review(account);//修改
    orderreview->show();
    this->hide();
}


void task_completed::on_pushButton_2_clicked()
{
    Rider_main* ridermain=new Rider_main(account);//修改
    ridermain->show();
    this->hide();

}


void task_completed::on_pushButton_4_clicked()
{
    rider_inform*riderinform=new rider_inform(account);//修改
    riderinform->show();
    this->hide();

}


void task_completed::on_pushButton_3_clicked()
{

}

