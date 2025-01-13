// admin_orderwidget.cpp
#include "admini_orderwidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QMouseEvent>
#include <QDebug>

QPixmap AdminOrderWidget::byteArrayToPixmap(const QByteArray &byteArray) {
    QPixmap pixmap;
    if (!pixmap.loadFromData(byteArray)) {
        qDebug() << "无法从字节数组加载图片";
    }
    return pixmap;
}

AdminOrderWidget::AdminOrderWidget(const QVariantMap &orderInfo, QWidget *parent)
    : QFrame(parent), m_orderInfo(orderInfo)
{
    setFrameShape(QFrame::Box);
    setLineWidth(1);
    setStyleSheet("background-color: white;");
    setCursor(Qt::PointingHandCursor); // 鼠标悬停时显示手型光标

    QHBoxLayout *layout = new QHBoxLayout(this);

    // 如果需要显示图片，取消注释并使用
    /*
    imageLabel = new QLabel(this);
    QPixmap pixmap = byteArrayToPixmap(m_orderInfo["image"].toByteArray());
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        imageLabel->setText("无图片");
    }
    layout->addWidget(imageLabel);
    */

    // 右侧显示订单信息
    QWidget *infoWidget = new QWidget(this);
    QVBoxLayout *infoLayout = new QVBoxLayout(infoWidget);

    QLabel *seller = new QLabel(QString("商家: %1").arg(m_orderInfo["seller_id"].toString()), infoWidget);
    QLabel *consumer = new QLabel(QString("用户: %1").arg(m_orderInfo["customer_id"].toString()), infoWidget);
    QLabel *num = new QLabel(QString("交易金额: %1").arg(m_orderInfo["consumption_amount"].toString()), infoWidget);

    infoLayout->addWidget(seller);
    infoLayout->addWidget(consumer);
    infoLayout->addWidget(num);

    layout->addWidget(infoWidget);
    layout->addStretch();
}

AdminOrderWidget::~AdminOrderWidget()
{
    // 根据需要清理资源
}

QVariantMap AdminOrderWidget::getOrderInfo() const
{
    return m_orderInfo;
}

// 如果需要处理鼠标点击，取消注释并实现
/*
void AdminOrderWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        qDebug() << "AdminOrderWidget clicked, emitting signal.";
        emit clicked(m_orderInfo);
    }
    QFrame::mousePressEvent(event);
}
*/
