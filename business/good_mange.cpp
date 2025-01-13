#include "good_mange.h"
#include "ui_good_mange.h"
#include "../head.h"
#include"dishwidget.h"

good_mange::good_mange(QString account,QWidget *parent)
    : account(account),QWidget(parent)
    , ui(new Ui::good_mange)
{
    ui->setupUi(this);
    displayDishes();
    this->setFixedSize(600,800);
}

good_mange::~good_mange()
{
    delete ui;
}

void good_mange::on_pushButton_back_clicked()
{
    page_workbench *page_WorkBench=new page_workbench(account);
    page_WorkBench->show();
    this->close();


}
void good_mange::displayDishes()
{
    Database db;
    QList<QVariantMap> dishes = db.select_dish_information(account);

    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &dish : dishes) {
        DishWidget *dishWidget = new DishWidget(dish, container);
        layout->addWidget(dishWidget);

        // 连接 SellerWidget 的 clicked 信号到 Consumer_interface 的槽函数
        // connect(sellerWidget, &SellerWidget::clicked, this, &Consumer_interface::onSellerClicked);
    }

    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}


void good_mange::on_pushButton_add_good_clicked()
{
    dishchange *dishChange=new dishchange(account);
    dishChange->show();
    this->close();
}
