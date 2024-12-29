#include "con_reviews.h"
#include "ui_con_reviews.h"
#include "StarRatingWidget.h"
#include <QVBoxLayout>
#include "head.h"

Con_reviews::Con_reviews(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Con_reviews)
{
    ui->setupUi(this);

    // 创建星级控件
    starWidgetTop = new StarRatingWidget(this);
    starWidgetBottom = new StarRatingWidget(this);

    // 设置星级初始值
    starWidgetTop->setRating(5);  // 上排初始3星
    starWidgetBottom->setRating(5);  // 下排初始4星

    // 创建主布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, -300, 0, 0);  // 设置整体边距，(左, 上, 右, 下)

    // 调整上排布局
    QHBoxLayout *topLayout = new QHBoxLayout();
    topLayout->addWidget(starWidgetTop);
    topLayout->setContentsMargins(0, 0, 0, -300);  // 向上移动 10 像素

    // 调整下排布局
    QHBoxLayout *bottomLayout = new QHBoxLayout();
    bottomLayout->addWidget(starWidgetBottom);
    bottomLayout->setContentsMargins(0, 0, 0, 150);  // 向上移动 10 像素

    // 添加布局
    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(bottomLayout);

    // 应用主布局
    setLayout(mainLayout);
}

Con_reviews::~Con_reviews()
{
    delete ui;
}

void Con_reviews::on_pushButton_2_clicked()
{
    // 假设有一个 OrderStatus 窗口类
    OrderStatus *order = new OrderStatus();
    order->show();
    this->close();
}

void Con_reviews::on_pushButton_8_clicked()
{
    OrderStatus *order=new OrderStatus();
    order->show();
    this->close();
}

