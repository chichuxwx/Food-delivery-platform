#include "consumer_interface.h"
#include "ui_consumer_interface.h"
#include"../head.h"
#include "sellerwidget.h"

Consumer_interface::Consumer_interface(QString account,QWidget *parent) :
    account(account),QWidget(parent),
    ui(new Ui::Consumer_interface)
{
    ui->setupUi(this);
    displaySellers();
    this->setFixedSize(600, 800);
}

Consumer_interface::~Consumer_interface()
{
    delete ui;
}

void Consumer_interface::on_pushButton_clicked()
{
    login *log = new login();
    log->show();
    this->close();
}

void Consumer_interface::displaySellers()
{
    Database db;
    QList<QVariantMap> sellers = db.select_seller_information();

    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &seller : sellers) {
        SellerWidget *sellerWidget = new SellerWidget(seller, container);
        layout->addWidget(sellerWidget);

        // 连接 SellerWidget 的 clicked 信号到 Consumer_interface 的槽函数
        connect(sellerWidget, &SellerWidget::clicked, this, &Consumer_interface::onSellerClicked);
    }

    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}


void Consumer_interface::onSellerClicked(const QVariantMap &sellerInfo)
{
    Storepage *store=new Storepage(account);
    // 传递商家信息并显示 StorePage
    store->setSellerInfo(sellerInfo);
    store->show();
}
// void Consumer_interface::on_pushButton_6_clicked()
// {
//     Storepage *store=new Storepage();
//     //这里逻辑待定 商家编号怎么获取
//     QJsonObject storeCommand;
//     storeCommand["command"] = "read_store";
//     QJsonDocument loginDoc(storeCommand);
//     QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
//     ServerConnectionManager::instance().sendData(Data);
//     QJsonObject credentials;
//     //credentials["商家编号"] = code; //之后删
//     QJsonDocument credentialsDoc(credentials);
//     QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
//     ServerConnectionManager::instance().sendData(credentialsData);
//     store->show();
//     this->close();
// }


// void Consumer_interface::on_pushButton_5_clicked()
// {
//     Storepage *store=new Storepage();
//     //这里逻辑待定 商家编号怎么获取
//     QJsonObject storeCommand;
//     storeCommand["command"] = "read_store";
//     QJsonDocument loginDoc(storeCommand);
//     QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
//     ServerConnectionManager::instance().sendData(Data);
//     QJsonObject credentials;
//     //credentials["商家编号"] = code; //之后删
//     QJsonDocument credentialsDoc(credentials);
//     QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
//     ServerConnectionManager::instance().sendData(credentialsData);

//     store->show();
//     this->close();
// }


void Consumer_interface::on_pushButton_3_clicked()
{
    OrderStatus *orderstatus=new OrderStatus(account);

    QJsonObject storeCommand;
    storeCommand["command"] = "read_consumer";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    // 发送账号查询
    QJsonObject credentials;
    //credentials["类型"] = account; //之后删
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    orderstatus->show();
    this->close();
}


void Consumer_interface::on_pushButton_4_clicked()
{
    Consumer_Information *coninfo=new Consumer_Information(account);

    QJsonObject storeCommand;
    storeCommand["command"] = "read_consumer";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    // 发送账号查询
    QJsonObject credentials;
    //credentials["类型"] = account; //之后删
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    coninfo->show();
    this->close();

    //
}

