#include"../head.h"
order_review::order_review(QString account,QWidget *parent)//修改
    :account(account), QWidget(parent)
    , ui(new Ui::order_review)
{
    ui->setupUi(this);

    // 修改
    // 初始化订单信息
    Database db;
    QList<QVariantMap> orders = db.select_orders_information_rider(account, 3);

    QString allOrdersText;
    QString reviewText;
    QString secondOrderText;
    QString secondReviewText;

    if (!orders.isEmpty()) {
        // 初始化第一个订单
        QVariantMap order = orders[0];
        QString orderText = QString(
                                "Customer ID: %1\n"
                                "Dish Name: %2\n"
                                "Consumption Amount: %3\n"
                                "Remark: %4\n"
                                "Dish Amount: %5\n"
                                "Seller ID: %6\n"
                                "--------------------------\n"
                                ).arg(order["customer_id"].toString())
                                .arg(order["dish_name"].toString())
                                .arg(order["consumption_amount"].toDouble())
                                .arg(order["remark"].toString())
                                .arg(order["dish_amount"].toInt())
                                .arg(order["seller_id"].toString());

        allOrdersText.append(orderText);

        QString orderReview = QString(
                                  "Order Review for Customer %1:\n"
                                  "The dish '%2' was very delicious!\n"
                                  "--------------------------\n"
                                  ).arg(order["customer_id"].toString())
                                  .arg(order["dish_name"].toString());

        reviewText.append(orderReview);

        // 初始化第二个订单
        if (orders.size() > 1) {
            QVariantMap secondOrder = orders[1];
            secondOrderText = QString(
                                  "Customer ID: %1\n"
                                  "Dish Name: %2\n"
                                  "Consumption Amount: %3\n"
                                  "Remark: %4\n"
                                  "Dish Amount: %5\n"
                                  "Seller ID: %6\n"
                                  "--------------------------\n"
                                  ).arg(secondOrder["customer_id"].toString())
                                  .arg(secondOrder["dish_name"].toString())
                                  .arg(secondOrder["consumption_amount"].toDouble())
                                  .arg(secondOrder["remark"].toString())
                                  .arg(secondOrder["dish_amount"].toInt())
                                  .arg(secondOrder["seller_id"].toString());

            secondReviewText = QString(
                                   "Order Review for Customer %1:\n"
                                   "The dish '%2' was very delicious!\n"
                                   "--------------------------\n"
                                   ).arg(secondOrder["customer_id"].toString())
                                   .arg(secondOrder["dish_name"].toString());
        }
    }

}

order_review::~order_review()
{
    delete ui;
}

void order_review::on_pushButton_clicked()
{
    this->hide();
    task_completed*taskcompleted=new task_completed(account);//修改
    taskcompleted->show();
}

