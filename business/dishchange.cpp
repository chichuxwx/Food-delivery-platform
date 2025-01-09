#include "dishchange.h"
#include "ui_dishchange.h"

#include "../head.h"
#include"QMessageBox"
dishchange::dishchange(QString account,QWidget *parent)
    :account(account), QWidget(parent)
    , ui(new Ui::dishchange)
{
    ui->setupUi(this);
    this->setFixedSize(600,800);
}

dishchange::~dishchange()
{
    delete ui;
}

void dishchange::on_lineEdit_textChanged(const QString &arg1)
{

}


void dishchange::on_lineEdit_price_textChanged(const QString &arg1)
{

}


void dishchange::on_lineEdit_3_textChanged(const QString &arg1)
{

}


void dishchange::on_pushButton_clicked()//修改 商家新增一个商品 但是没有商品描述
{
    QString name,statu;
    qint64 price;
    bool ok;
    name=ui->lineEdit_dish->text();
    price=ui->lineEdit_price->text().toLongLong(&ok,10);
    statu=ui->lineEdit_3->text();
    //新增菜品
    sl.add_new_dish(name, "", "这是一个商品",account, price, 100, statu.toInt());
    QMessageBox::information(this, "成功", "添加成功");
    ui->lineEdit_dish->clear();
    ui->lineEdit_price->clear();
    ui->lineEdit_3->clear();


}


void dishchange::on_pushButton_back_clicked()
{
    good_mange *Good_mange=new good_mange(account);
    Good_mange->show();
    this->close();
}

