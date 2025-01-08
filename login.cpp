#include "login.h"
#include "head.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

login::~login()
{
    delete ui;
}

void login::setdetails(const QString &account, const QString &password)
{
    ui->lineEdit->setText(account);
    ui->lineEdit_2->setText(password);
}

void login::on_pushButton_2_clicked()
{
    MainWindow *main = new MainWindow();
    this->close();
    main->show();
}

void login::on_pushButton_3_clicked()
{
    Consumer_interface *ConsumerInterface = new Consumer_interface();
    ConsumerInterface->show();
    this->close();
}

void login::on_pushButton_4_clicked()
{
    Rider_main *ridermain = new Rider_main();
    ridermain->show();
    this->close();
}

void login::on_pushButton_5_clicked()
{
    shangjia *sjmain = new shangjia();
    sjmain->show();
    this->close();
}

void login::on_pushButton_6_clicked()
{
    admini_main *adminMain = new admini_main();
    adminMain->show();
    this->close();


}

void login::on_pushButton_clicked()
{
    QJsonObject loginCommand;
    loginCommand["command"] = "login";
    QJsonDocument loginDoc(loginCommand);
    QByteArray loginData = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(loginData);

    // 发送账号和密码
    QString account = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QJsonObject credentials;
    credentials["账号"] = account;
    credentials["密码"] = password;
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);
}

