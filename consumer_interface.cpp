#include "consumer_interface.h"
#include "ui_consumer_interface.h"
#include "head.h"
Consumer_interface::Consumer_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consumer_interface)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

Consumer_interface::~Consumer_interface()
{
    delete ui;
}

void Consumer_interface::on_pushButton_clicked()
{
    login *log = new login();
    log->show();
    this->close();
}


void Consumer_interface::on_pushButton_6_clicked()
{
    Storepage *store=new Storepage();
    store->show();
    this->close();
}


void Consumer_interface::on_pushButton_5_clicked()
{
    Storepage *store=new Storepage();
    store->show();
    this->close();
}


void Consumer_interface::on_pushButton_3_clicked()
{
    OrderStatus *orderstatus=new OrderStatus();
    orderstatus->show();
    this->close();
}

