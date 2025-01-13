#include "orderwidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>

OrderWidget::OrderWidget(const QVariantMap &orderInfo, QWidget *parent)
    : QFrame(parent), m_orderInfo(orderInfo)
{
    setFrameShape(QFrame::Box);
    setLineWidth(1);
    // 给自己设置一个白色背景，鼠标悬停时可以设置为手型
    setStyleSheet("background-color: white;");
    setCursor(Qt::PointingHandCursor);

    // 创建布局
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    // 用一个VBoxLayout存放订单信息
    QVBoxLayout *infoLayout = new QVBoxLayout;
    QLabel *orderIdLabel = new QLabel(QString("订单ID: %1").arg(orderInfo["order_id"].toInt()), this);
    infoLayout->addWidget(orderIdLabel);
    customerIdLabel = new QLabel(QString("顾客ID: %1").arg(orderInfo["customer_id"].toString()), this);
    dishNameLabel   = new QLabel(QString("菜品名称: %1").arg(orderInfo["dish_name"].toString()), this);
    consumptionAmountLabel = new QLabel(
        QString("消费金额: %1").arg(orderInfo["consumption_amount"].toDouble()), this);
    remarkLabel = new QLabel(QString("备注: %1").arg(orderInfo["remark"].toString()), this);
    dishAmountLabel = new QLabel(QString("菜品数量: %1").arg(orderInfo["dish_amount"].toInt()), this);
    sellerIdLabel = new QLabel(QString("商家ID: %1").arg(orderInfo["seller_id"].toString()), this);

    infoLayout->addWidget(customerIdLabel);
    infoLayout->addWidget(dishNameLabel);
    infoLayout->addWidget(consumptionAmountLabel);
    infoLayout->addWidget(remarkLabel);
    infoLayout->addWidget(dishAmountLabel);
    infoLayout->addWidget(sellerIdLabel);

    mainLayout->addLayout(infoLayout);
    mainLayout->addStretch();
}

QVariantMap OrderWidget::getOrderInfo() const
{
    return m_orderInfo;
}

void OrderWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // 将整条订单信息发射出去，让外部知道点击的是哪条订单
        emit clicked(m_orderInfo);
    }
    QFrame::mousePressEvent(event);
}
