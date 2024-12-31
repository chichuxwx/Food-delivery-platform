#include "mainwindow.h"
#include <QMessageBox>
#include "./ui_mainwindow.h"
#include "head.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
    ui->label_5->close();
    this->setFixedSize(600, 800);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_graphicsView_rubberBandChanged(const QRect &viewportRect,
                                                   const QPointF &fromScenePoint,
                                                   const QPointF &toScenePoint)
{}

void MainWindow::on_pushButton_clicked()
{
    QString account = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString confirmPassword = ui->lineEdit_3->text();
    // int userType;

    /*if (ui->checkBox->isChecked()) {
        userType = 1;
    } else if (ui->checkBox_2->isChecked()) {
        userType = 2;
    } else if (ui->checkBox_3->isChecked()) {
        userType = 3;
    } else if (ui->checkBox_4->isChecked()) {
        userType = 4;
    }*/

    if (!validateAccount(account)) {
        QMessageBox::warning(this, "错误", "账号必须是 9~12 位字符！");
        return;
    } else if (!validatePassword(password, confirmPassword)) {
        QMessageBox::warning(this,
                             "错误",
                             "密码无效！密码必须包含字母和数字，大于 7 位且与确认密码一致！");
        return;
    } else {
        QMessageBox::information(this, "成功", "注册成功！");
        login *Login = new login();
        Login->show();
        Login->setdetails(account, password);
        this->close();
    }
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    changebuttonstatues();
    QString account = ui->lineEdit->text();
    if (!validateAccount(account)) {
        ui->label_5->show();
        ui->lineEdit_2->setEnabled(false);
        ui->lineEdit_3->setEnabled(false);
    } else {
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

void MainWindow::changebuttonstatues()
{
    bool isReady = !ui->lineEdit->text().isEmpty() && !ui->lineEdit_2->text().isEmpty()
                   && !ui->lineEdit_3->text().isEmpty();
    ui->pushButton->setEnabled(isReady);
    bool checkBoxReady = ui->checkBox->isChecked() || ui->checkBox_2->isChecked()
                         || ui->checkBox_3->isChecked() || ui->checkBox_4->isChecked();

    // 当文本框和 CheckBox 都满足条件时，按钮才可点击
    ui->pushButton->setEnabled(isReady && checkBoxReady);
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        userType=1;
        ui->checkBox_2->setChecked(false);
        ui->checkBox_3->setChecked(false);
        ui->checkBox_4->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        userType=2;
        ui->checkBox->setChecked(false);
        ui->checkBox_3->setChecked(false);
        ui->checkBox_4->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        userType=3;
        ui->checkBox_2->setChecked(false);
        ui->checkBox->setChecked(false);
        ui->checkBox_4->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        userType=4;
        ui->checkBox_2->setChecked(false);
        ui->checkBox_3->setChecked(false);
        ui->checkBox->setChecked(false);
    }
    changebuttonstatues(); // 更新按钮状态
}

void MainWindow::on_pushButton_2_clicked()
{
    login *Login = new login();
    Login->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    Map *map=new Map();
    map->show();
    this->close();
}

