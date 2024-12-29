#include "adminiwindow.h"
#include "ui_adminiwindow.h"

adminiwindow::adminiwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminiwindow)
{
    ui->setupUi(this);
}

adminiwindow::~adminiwindow()
{
    delete ui;
}
