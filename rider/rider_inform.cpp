#include"../head.h"
rider_inform::rider_inform(QString account,QWidget *parent)//修改
    : QWidget(parent)
    , ui(new Ui::rider_inform)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);

    //修改
    // 获取骑手信息
    Database db;
    QVariantMap rider_map = db.select_rider_information(account);

    // 设置 QLabel

    ui->label_4->setText(rider_map["phone"].toString()); // 设置手机号码
    ui->label_8->setText(QString::number(rider_map["level"].toDouble())); // 设置等级
    ui->label_3->setText(account); // 设置骑手名称
    double level = rider_map["level"].toDouble();
    double totalScore = level * 10 + 5;
    ui->label_6->setText(QString::number(totalScore)); // 设置综合分数

}

rider_inform::~rider_inform()
{
    delete ui;
}

void rider_inform::on_pushButton_4_clicked()
{

}


void rider_inform::on_pushButton_2_clicked()
{
    this->hide();
    Rider_main*ridermain=new Rider_main(account);//修改
    ridermain->show();
}


void rider_inform::on_pushButton_3_clicked()
{
    this->hide();
    task_inform* taskinform=new task_inform(account);//修改
    taskinform->show();
}


void rider_inform::on_pushButton_6_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}

