#include "admini_main.h"
#include "ui_admini_main.h"

#include "main.h"

admini_main::admini_main(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admini_main)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

admini_main::~admini_main()
{
    delete ui;
}
