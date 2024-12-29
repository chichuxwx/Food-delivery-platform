// #include<iostream>
// using namespace std;
#include "mainwindow.h"
#include "./ui_mainwindow.h"
// #include "secondwindow.h"
#include "login.h"
#include <QMessageBox>
#include "logic.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
    ui->label_5->close();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint)
{

}

void MainWindow::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString confirmPassword = ui->lineEdit_3->text();

    if (!validateAccount(account)) {
        QMessageBox::warning(this, "错误", "账号必须是 9~12 位字符！");
        return;
    } else if (!validatePassword(password, confirmPassword)) {
        QMessageBox::warning(this, "错误", "密码无效！密码必须包含字母和数字，大于 7 位且与确认密码一致！");
        return;
    } else {
        QMessageBox::information(this, "成功", "注册成功！");
        login *Login=new login();
        Login->show();
        Login->setdetails(account,password);
        this->close();

    }
}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    changebuttonstatues();
    QString account = ui->lineEdit->text();
    if(!validateAccount(account)){
        ui->label_5->show();
        ui->lineEdit_2->setEnabled(false);
        ui->lineEdit_3->setEnabled(false);
    }else{
        ui->label_5->close();
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_3->setEnabled(true);
    }

}


void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{
    changebuttonstatues();
}


void MainWindow::on_lineEdit_3_textEdited(const QString &arg1)
{
    changebuttonstatues();
}

void MainWindow::changebuttonstatues(){
    bool isReady = !ui->lineEdit->text().isEmpty() &&
        !ui->lineEdit_2->text().isEmpty() &&
        !ui->lineEdit_3->text().isEmpty();
        ui->pushButton->setEnabled(isReady);
}
