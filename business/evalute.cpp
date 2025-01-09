#include "evalute.h"
#include "ui_evalute.h"
#include "../head.h"
evalute::evalute(QString account,QWidget *parent)
    : account(account),QWidget(parent)
    , ui(new Ui::evalute)
{
    ui->setupUi(this);
}

evalute::~evalute()
{
    delete ui;
}

void evalute::on_pushButton_clicked()
{
    page_workbench *page_Workbench=new page_workbench(account);

    page_Workbench->show();
    this->close();
}

