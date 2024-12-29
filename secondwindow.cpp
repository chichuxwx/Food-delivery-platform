#include "secondwindow.h"
#include "ui_secondwindow.h"

secondwindow::secondwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::secondwindow)
{
    ui->setupUi(this);
}

secondwindow::~secondwindow()
{
    delete ui;
}
void secondwindow::setRegisterstatues(bool isSuccess){
    if (isSuccess) {
        ui->label->setText("注册成功！");
    } else {
        ui->label->setText("注册失败！");
    }
}
