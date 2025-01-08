#include "detailedmenu.h"
#include "ui_detailedmenu.h"
#include"../head.h"

DetailedMenu::DetailedMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DetailedMenu)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
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

void DetailedMenu::changebuttonstatues(){
    bool checkBoxReady=(ui->checkBox->isChecked()||ui->checkBox_2->isChecked()) &&
                  (ui->checkBox_3->isChecked()||ui->checkBox_4->isChecked()||ui->checkBox_5->isChecked());
    ui->pushButton->setEnabled(checkBoxReady);
}

void DetailedMenu::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_2->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_4_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_5->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_5->setChecked(false);
        ui->checkBox_4->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_checkBox_5_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_4->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}


void DetailedMenu::on_pushButton_clicked()
{
    Storepage *store=new Storepage();

    QJsonObject storeCommand;
    storeCommand["command"] = "store";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);

    store->show();
    this->close();
}

