#include "login.h"
#include "ui_login.h"
#include "head.h"
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    account=0;
    ui->setupUi(this);
    this->setFixedSize(600, 800);
}

login::~login()
{
    delete ui;
}

void login::setdetails(const QString &acc, const QString &password)
{
    ui->lineEdit->setText(acc);
    ui->lineEdit_2->setText(password);
    account=acc;
}

void login::on_pushButton_2_clicked()
{
    MainWindow *main = new MainWindow();
    this->close();
    main->show();
}

void login::on_pushButton_3_clicked()
{
    Consumer_interface *ConsumerInterface = new Consumer_interface("123");
    ConsumerInterface->show();
    this->close();
}

void login::on_pushButton_4_clicked()
{
    Rider_main *ridermain = new Rider_main(account);
    ridermain->show();
    this->close();
}

void login::on_pushButton_5_clicked()
{
    shangjia *sjmain = new shangjia(account);
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
    account = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QJsonObject credentials;
    credentials["账号"] = account;
    credentials["密码"] = password;
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    int usertype=log_in(account,password);
    if(usertype==1){
        Consumer_interface *ConsumerInterface = new Consumer_interface(account);
        ConsumerInterface->show();
        this->close();
    }else if(usertype==2){
        Rider_main *ridermain = new Rider_main(account);
        ridermain->show();
        this->close();
    }else if(usertype==3){
        shangjia *sjmain = new shangjia(account);
        sjmain->show();
        this->close();
    }else if(usertype==4){
        admini_main *adminMain = new admini_main();
        adminMain->show();
        this->close();
    }else{
        this->close();
    }
}


