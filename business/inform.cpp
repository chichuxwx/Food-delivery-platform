#include "inform.h"
#include "ui_inform.h"
#include "../head.h"
inform::inform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inform)
{
    ui->setupUi(this);
}

inform::~inform()
{
    delete ui;
}

void inform::on_pushButton_clicked()
{
    inform_change *inform_Change=new inform_change;
    inform_Change->show();
    this->close();
}


void inform::on_pushButton_2_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}


void inform::on_pushButton_order_clicked()
{
    shangjia *sjmain=new shangjia();
    sjmain->show();
    this->close();
}


void inform::on_pushButton_workbench_clicked()
{
    page_workbench *workbench=new page_workbench();
    workbench->show();
    this->close();
}

