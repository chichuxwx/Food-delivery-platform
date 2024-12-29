#include "detailedmenu.h"
#include "ui_detailedmenu.h"
#include "head.h"

DetailedMenu::DetailedMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DetailedMenu)
{
    ui->setupUi(this);
}

DetailedMenu::~DetailedMenu()
{
    delete ui;
}

void DetailedMenu::on_pushButton_2_clicked()
{
    Storepage *store=new Storepage();
    store->show();
    this->close();
}


void DetailedMenu::on_checkBox_stateChanged(int arg1)
{

}


void DetailedMenu::on_checkBox_2_stateChanged(int arg1)
{

}


void DetailedMenu::on_checkBox_4_stateChanged(int arg1)
{

}


void DetailedMenu::on_checkBox_3_stateChanged(int arg1)
{

}


void DetailedMenu::on_checkBox_5_stateChanged(int arg1)
{

}

