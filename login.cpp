#include "login.h"
#include "ui_login.h"
#include "head.h"


login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

login::~login()
{
    delete ui;
}

void login::setdetails(const QString& account,const QString& password){
    ui->lineEdit->setText(account);
    ui->lineEdit_2->setText(password);
}

void login::on_pushButton_2_clicked()
{
    MainWindow *main=new MainWindow();
    this->close();
    main->show();
}


void login::on_pushButton_3_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface();
    ConsumerInterface->show();
    this->close();
}

