#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::setdetails(const QString& account,const QString& password){
    ui->lineEdit->setText(account);
    ui->lineEdit_2->setText(password);
}
