#include "storepage.h"
#include "ui_storepage.h"
#include "../head.h"
#include"dish_widget.h"

Storepage::Storepage(QString account, QString shop_name, QWidget *parent)
    : account(account), shop_name(shop_name), QWidget(parent), ui(new Ui::Storepage)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
    //displaySellerInfo();
    displayDish();
}
Storepage::Storepage(QString account, QWidget *parent)
    : account(account), QWidget(parent), ui(new Ui::Storepage)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
    // displayDish();
    displayDish();
}
Storepage::Storepage(QString account,const QVariantMap &sellerInfo, QWidget *parent)
    : account(account),QWidget(parent), ui(new Ui::Storepage)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);
    shop_name = sellerInfo["shop_name"].toString();  // 从 sellerInfo 中获取 shop_name
    displayDish();
}


Storepage::~Storepage()
{
    delete ui;
}


// void Storepage::displaySellerInfo()
// {
//     // 获取商品列表
//     QList<QVariantMap> dishes = sl.search_selller_dish_information(shop_name);

//     // 创建一个垂直布局，用于存放商品条目
//     QVBoxLayout *dishLayout = new QVBoxLayout();

//     for (const QVariantMap &dish : dishes) {
//         QWidget *dishWidget = new QWidget(this);
//         QHBoxLayout *layout = new QHBoxLayout(dishWidget);

//         // 商品名称
//         QLabel *nameLabel = new QLabel(dish["name"].toString(), dishWidget);
//         layout->addWidget(nameLabel);

//         // 商品价格
//         QLabel *priceLabel = new QLabel(QString("¥%1").arg(dish["price"].toDouble()), dishWidget);
//         layout->addWidget(priceLabel);

//         // 查看详情按钮
//         QPushButton *detailButton = new QPushButton("查看详情", dishWidget);
//         layout->addWidget(detailButton);

//         // 将按钮与槽函数连接
//         connect(detailButton, &QPushButton::clicked, this, [=]() {

//         });

//         dishLayout->addWidget(dishWidget);
//     }

//     // 添加一个拉伸项，确保布局项靠上对齐
//     dishLayout->addStretch();

//     // 将布局设置到一个 QWidget 中，然后将其放入 ScrollArea
//     QWidget *container = new QWidget();
//     container->setLayout(dishLayout);

//     ui->scrollArea->setWidget(container);
//     ui->scrollArea->setWidgetResizable(true);
// }


void Storepage::displayDish()
{
    Database db;
    if(shop_name==""){
        shop_name=m_sellerInfo["account"].toString();
    }
    ui->label->setStyleSheet("QLabel { qproperty - alignment: AlignHCenter; }");
    ui->label_3->setText("5");
    QString seller_account =db.get_account_byshop(shop_name);
    QList<QVariantMap> dishs = db.select_dish_information(seller_account);

    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &dish : dishs) {
        QString dish_name=dish["dish_name"].toString();
        dish_widget *dishWidget = new dish_widget( account,shop_name, dish_name,dish);
        layout->addWidget(dishWidget);

    }

    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}


void Storepage::onClickedDishes(const QVariantMap &dish){
/*    QString dish_name = dish["name"].toString();
    DetailedMenu *detail = new DetailedMenu(account, shop_name, dish_name);
    detail->show();
    this->close()*/;
}

void Storepage::setSellerInfo(const QVariantMap &sellerInfo){
    m_sellerInfo = sellerInfo;
    shop_name=sellerInfo["account"].toString();
}

void Storepage::on_pushButton_2_clicked()
{
    // 返回消费者主界面
    Consumer_interface *ConsumerInterface = new Consumer_interface(account);
    ConsumerInterface->show();
    this->close();
}

void Storepage::on_pushButton_8_clicked()
{
    // 打开购物车页面
    Shoppingcart *shopcart = new Shoppingcart(account);
    shopcart->show();
    this->close();
}
