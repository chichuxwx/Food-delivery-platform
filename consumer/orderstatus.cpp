#include "orderstatus.h"
#include "ui_orderstatus.h"
#include"../head.h"
#include"history_orderwidget.h"
OrderStatus::OrderStatus(QString account,QWidget *parent)//修改
    : account(account),QWidget(parent)
    , ui(new Ui::OrderStatus)
{
    ui->setupUi(this);
    order_dispaly();
    // ui->scrollArea->setWidgetResizable(false);//可以拖动滚动条
    // //竖滚动条和横滚动条都可以一直显示
    // ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    // ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
    // ui->scrollAreaWidgetContents->setGeometry(0, 0, 600, 700);
    // QList<QVariantMap> list=al.select_orders_somebody(account,0);
    // list+=al.select_orders_somebody(account,1);
    // list+=al.select_orders_somebody(account,2);
    // list+=al.select_orders_somebody(account,3);
    // QVariantMap l1=list[0],l2=list[1];
    // QString shop_name1=Se.search_seller_shop(l1["seller_id"].toString());
    // ui->label->setText(shop_name1);
    // ui->label_3->setText(l1["dish_name"].toString());
    // int money=l1["price"].toInt()*l1["quantity"].toInt();
    // ui->label_5->setText(QString("总价格为：%1").arg(money));
    // QString sta;
    // if(l1["status"]==0)
    // {
    //     sta+="商家未接单";
    // }
    // else if(l1["status"]==1)
    // {
    //     sta+="骑手未抢单";
    // }
    // else if(l1["status"]==2)
    // {
    //     sta+="骑手未送达";
    // }
    // else{
    //     sta+="已送达";
    // }
    // ui->label_6->setText(QString("订单状态:")+sta);
    // if(!l2.empty())
    // {
    //     QString shop_name2=Se.search_seller_shop(l2["seller_id"].toString());
    //     ui->label_10->setText(shop_name2);
    //     ui->label_12->setText(l2["dish_name"].toString());
    //     int money=l2["price"].toInt()*l2["quantity"].toInt();
    //     ui->label_7->setText(QString::number(money));
    //     if(l2["status"]==0)
    //     {
    //         sta+="商家未接单";
    //     }
    //     else if(l2["status"]==1)
    //     {
    //         sta+="骑手未抢单";
    //     }
    //     else if(l2["status"]==2)
    //     {
    //         sta+="骑手未送达";
    //     }
    //     else{
    //         sta+="已送达";
    //     }
    //     ui->label_9->setText(QString("订单状态:")+sta);

    // }
}

OrderStatus::~OrderStatus()
{
    delete ui;
}

void OrderStatus::order_dispaly()
{
    Database db;
    QList<QVariantMap> orders = db.select_orders_information_customer(account,1);
    orders+=db.select_orders_information_customer(account,2);
    orders+=db.select_orders_information_customer(account,3);
    orders+=db.select_orders_information_customer(account,4);

    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &order :orders) {
        History_order_Widget *orderWidget = new History_order_Widget(order, container);
        layout->addWidget(orderWidget);

        // 连接 SellerWidget 的 clicked 信号到 Consumer_interface 的槽函数
        connect(orderWidget, &History_order_Widget::buttonClicked, this, & OrderStatus::onSellerClicked);
    }

    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}
void OrderStatus::onSellerClicked()
{
    Con_reviews *review=new Con_reviews(account);
    // 传递商家信息并显示 StorePage
    // store->setSellerInfo(sellerInfo);
    review->show();
    this->close();
}
void OrderStatus::on_pushButton_2_clicked()
{
    Consumer_interface *ConsumerInterface=new Consumer_interface(account);
    QJsonObject storeCommand;
    storeCommand["command"] = "read_business";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    ConsumerInterface->show();
    this->close();
}


void OrderStatus::on_pushButton_clicked()
{
    login *log=new login();
    log->show();
    this->close();
}


void OrderStatus::on_pushButton_4_clicked()
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
}
