#include "admini_check.h"
#include "ui_admini_check.h"

#include "main.h"

admini_check::admini_check(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_check)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_check::~admini_check()
{
    delete ui;
}
