#include "history_orderwidget.h"
#include "../database/database.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QDebug>

// 如果有需要使用图片加载:
// QPixmap byteArrayToPixmap(const QByteArray &byteArray) {
//     QPixmap pixmap;
//     if (!pixmap.loadFromData(byteArray)) {
//         qDebug() << "无法从字节数组加载图片";
//     }
//     return pixmap;
// }

History_order_Widget::History_order_Widget(const QVariantMap &orderInfo,
                                           QWidget *parent)
    : QFrame(parent)
    , m_orderInfo(orderInfo)
{
    setFrameShape(QFrame::Box);
    setLineWidth(1);
    setStyleSheet("background-color: white;");
    setCursor(Qt::PointingHandCursor); // 鼠标悬停时显示手型光标

    QHBoxLayout *orderLayout = new QHBoxLayout(this);

    // 如果需要显示图片，可以自行添加:
    // imageLabel = new QLabel(this);
    // QPixmap pixmap = byteArrayToPixmap(orderInfo["imageByteArray"].toByteArray());
    // if (!pixmap.isNull()) {
    //     imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    // } else {
    //     imageLabel->setText("无图片");
    // }
    // orderLayout->addWidget(imageLabel);

    // 右侧信息区
    QWidget *infoWidget = new QWidget(this);
    QVBoxLayout *infoLayout = new QVBoxLayout(infoWidget);

    Database db;
    QString shop_name = db.select_seller_shop_name(orderInfo["seller_id"].toString());
    QString status = (orderInfo["status"].toInt() < 3) ? "未送达" : "已送达";

    QLabel *shopNameLabel = new QLabel(
        QString("店铺名称: %1").arg(shop_name), infoWidget);
    QLabel *dishNameLabel = new QLabel(
        QString("菜品名称: %1").arg(orderInfo["dish_name"].toString()), infoWidget);
    QLabel *priceLabel = new QLabel(
        QString("价格: %1").arg(orderInfo["consumptionamount"].toString()), infoWidget);
    QLabel *statusLabel = new QLabel(
        QString("订单状态: %1").arg(status), infoWidget);

    // “评价”按钮
    QPushButton *button = new QPushButton("评价", infoWidget);

    infoLayout->addWidget(shopNameLabel);
    infoLayout->addWidget(dishNameLabel);
    infoLayout->addWidget(priceLabel);
    infoLayout->addWidget(statusLabel);
    infoLayout->addWidget(button);
    orderLayout->addWidget(infoWidget, 0, Qt::AlignVCenter);
    orderLayout->addStretch();

    // 关联按钮点击到 onButtonClicked()
    connect(button, &QPushButton::clicked,
            this, &History_order_Widget::onButtonClicked);
}

QVariantMap History_order_Widget::getOrderInfo() const
{
    return m_orderInfo;
}

// 槽函数实现
void History_order_Widget::onButtonClicked()
{
    // 在这里发射自定义信号，携带订单信息
    emit buttonClicked(m_orderInfo);
}
