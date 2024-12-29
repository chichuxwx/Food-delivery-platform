#include "admini_info.h"
#include "ui_admini_info.h"

#include "main.h"

admini_info::admini_info(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_info)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_info::~admini_info()
{
    delete ui;
}
