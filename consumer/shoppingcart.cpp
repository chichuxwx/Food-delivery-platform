#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include "../head.h"
#include<QMessageBox>

Shoppingcart::Shoppingcart(QString account, QWidget *parent)
    : account(account), QWidget(parent), ui(new Ui::Shoppingcart)
{
    ui->setupUi(this);
    this->setFixedSize(600, 800);

    // 获取购物车信息
    QList<QVariantMap> cartItems = Cus.get_cart_infor(account);
    cart=cartItems;
    total_price=0;
    for(auto & item:cartItems)
    {
        total_price+=item["price"].toDouble()*item["quantity"].toInt();
    }
    QString pr = QString("总价格为：%1").arg(total_price);
    ui->label->setText(pr);

    // 显示购物车条目
    displayCartItems(cartItems);
}

Shoppingcart::~Shoppingcart()
{
    delete ui;
}

void Shoppingcart::displayCartItems(const QList<QVariantMap> &cartItems)
{
    // 创建一个垂直布局，用于存放购物车条目
    QVBoxLayout *cartLayout = new QVBoxLayout();

    // 遍历购物车信息，将每个商品信息添加到布局中
    for (const QVariantMap &item : cartItems) {
        QWidget *itemWidget = new QWidget(this);
        QHBoxLayout *layout = new QHBoxLayout(itemWidget);

        // 商品名称
        QLabel *nameLabel = new QLabel(item["name"].toString(), itemWidget);
        layout->addWidget(nameLabel);

        // 商品价格
        QLabel *priceLabel = new QLabel(QString("¥%1").arg(item["price"].toDouble()), itemWidget);
        layout->addWidget(priceLabel);

        // 商品数量
        QLabel *quantityLabel = new QLabel(QString("数量: %1").arg(item["quantity"].toInt()), itemWidget);
        layout->addWidget(quantityLabel);

        cartLayout->addWidget(itemWidget);
    }

    // 添加一个拉伸项，确保布局项靠上对齐
    cartLayout->addStretch();

    // 将布局设置到一个 QWidget 中，然后将其放入 ScrollArea
    QWidget *container = new QWidget();
    container->setLayout(cartLayout);

    ui->scrollArea->setWidget(container);
    ui->scrollArea->setWidgetResizable(true);
}

void Shoppingcart::on_pushButton_clicked()
{
    // 返回商店页面
    Storepage *store = new Storepage(account);
    store->show();
    this->close();
}

void Shoppingcart::on_pushButton_8_clicked()
{
    // QList<QVariantMap> cartItems2 = Cus.get_cart_infor(account);
    Database db;
    for(auto item:cart)
    {
        QString seller_id,customer_id,dish_name,remark;
        int consumption_amount,amount;
        seller_id=item["seller_id"].toString();
        customer_id=item["customer_id"].toString();
        dish_name=item["dish_name"].toString();
        remark=item["note"].toString();
        amount=item["quantity"].toInt();
        consumption_amount=item["price"].toDouble()*amount;
        int status=1;
        int order_id=db.get_id_order()+1;
        db.addOrders(seller_id,customer_id,dish_name,consumption_amount,status,remark,amount,order_id);
    }
    db.delete_cart(account);
    QMessageBox::information(this,"成功","结算成功");
    // 返回消费者主界面
    db.update_rider_level(account,total_price);
    Consumer_interface *consumerInterface = new Consumer_interface(account);
    consumerInterface->show();
    this->close();
}
