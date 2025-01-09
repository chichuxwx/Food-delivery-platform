#include "consumer_information.h"
#include "ui_consumer_information.h"
#include "../head.h"
Consumer_Information::Consumer_Information(QString account, QWidget *parent)
    : QWidget(parent), account(account), ui(new Ui::Consumer_Information)
{
    ui->setupUi(this);
    QVariantMap list = Cus.get_customer_infor(account);
    ui->label_name->setText(list["username"].toString());
    ui->label_phone_number->setText(list["phone_number"].toString());
    ui->label_grade->setText(list["level"].toString());
}

Consumer_Information::~Consumer_Information()
{
    delete ui;
}

void Consumer_Information::on_label_name_linkActivated(const QString &link)//名称
{

}


void Consumer_Information::on_label_phone_number_linkActivated(const QString &link)//手机号
{

}


void Consumer_Information::on_label_grade_linkActivated(const QString &link)//等级
{

}


void Consumer_Information::on_pushButton_address_clicked()//地址
{
    address *add=new address(account);
    add->show();
    this->close();
}


void Consumer_Information::on_pushButton_history_order_clicked()//历史订单
{
    histroy_record *history=new histroy_record(account);
    history->show();
    this->close();
}


void Consumer_Information::on_pushButton_service_clicked()//客服中心
{
    complaints *complaint=new complaints(account);
    complaint->show();
    this->close();
}


void Consumer_Information::on_pushButton_change_infom_clicked()//修改个人信息
{
    change_inform *chginfo=new change_inform(account);
    chginfo->show();
    this->close();
}


void Consumer_Information::on_pushButton_exit_clicked()//退出登录
{
    login *log=new login();
    log->show();
    this->close();
}


void Consumer_Information::on_pushButton_order_clicked()//下方工具栏中的点餐
{

}


void Consumer_Information::on_pushButton_Orders_clicked()//下方工具栏中的订单
{

}


void Consumer_Information::on_pushButton_information_clicked()
{

}


void Consumer_Information::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface(account);
    ConsumerInterface->show();
    this->close();
}


void Consumer_Information::on_pushButton_3_clicked()
{
    OrderStatus *order=new OrderStatus(account);
    order->show();
    this->close();
}

