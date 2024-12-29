#include "admini_info_done.h"
#include "ui_admini_info_done.h"

#include "main.h"

admini_info_done::admini_info_done(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_info_done)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_info_done::~admini_info_done()
{
    delete ui;
}
