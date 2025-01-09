#include "inform.h"
#include "ui_inform.h"
#include "../head.h"
#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QFile>
inform::inform(QString account,QWidget *parent)//修改 用数据库中数据来修改页面上的商家信息
    : account(account),QWidget(parent)
    , ui(new Ui::inform)
{
    ui->setupUi(this);
    ui->label_name->setText(sl.search_seller_shop(account) );
    ui->label_phone->setText(sl.search_seller_phone(account) );
    //QByteArray search_seller_img(const QString &account);
    QImage image;
    image.loadFromData(sl.search_seller_img(account));
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->label->setPixmap(pixmap);

}

inform::~inform()
{
    delete ui;
}

void inform::on_pushButton_clicked()
{
    inform_change *inform_Change=new inform_change(account);
    inform_Change->show();
    this->close();
}


void inform::on_pushButton_2_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}


void inform::on_pushButton_order_clicked()
{
    shangjia *sjmain=new shangjia(account);
    sjmain->show();
    this->close();
}


void inform::on_pushButton_workbench_clicked()
{
    page_workbench *workbench=new page_workbench(account);
    workbench->show();
    this->close();
}

