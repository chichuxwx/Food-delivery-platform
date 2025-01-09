#include "sellerwidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QMouseEvent>
#include <QDebug>

QPixmap SellerWidget::byteArrayToPixmap(const QByteArray &byteArray) {
    QPixmap pixmap;
    if (!pixmap.loadFromData(byteArray)) {
        qDebug() << "无法从字节数组加载图片";
    }
    return pixmap;
}

SellerWidget::SellerWidget(const QVariantMap &sellerInfo, QWidget *parent)
    : QFrame(parent), m_sellerInfo(sellerInfo)
{
    setFrameShape(QFrame::Box);
    setLineWidth(1);
    setStyleSheet("background-color: white;");
    setCursor(Qt::PointingHandCursor); // 鼠标悬停时显示手型光标

    QHBoxLayout *sellerLayout = new QHBoxLayout(this);

    // 左侧显示商家图片
    imageLabel = new QLabel(this);
    QPixmap pixmap = byteArrayToPixmap(sellerInfo["image"].toByteArray());
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        imageLabel->setText("无图片");
    }
    sellerLayout->addWidget(imageLabel);

    // 右侧显示商家信息
    QWidget *infoWidget = new QWidget(this);
    QVBoxLayout *infoLayout = new QVBoxLayout(infoWidget);

    QLabel *idLabel = new QLabel(QString("ID: %1").arg(sellerInfo["id"].toLongLong()), infoWidget);
    QLabel *accountLabel = new QLabel(QString("账号: %1").arg(sellerInfo["account"].toString()), infoWidget);
    QLabel *shopNameLabel = new QLabel(QString("店铺名称: %1").arg(sellerInfo["shop_name"].toString()), infoWidget);
    QLabel *addressLabel = new QLabel(QString("地址: %1").arg(sellerInfo["address"].toString()), infoWidget);
    QLabel *phoneLabel = new QLabel(QString("电话: %1").arg(sellerInfo["phone"].toString()), infoWidget);
    QLabel *levelLabel = new QLabel(QString("等级: %1").arg(sellerInfo["level"].toDouble()), infoWidget);

    infoLayout->addWidget(idLabel);
    infoLayout->addWidget(accountLabel);
    infoLayout->addWidget(shopNameLabel);
    infoLayout->addWidget(addressLabel);
    infoLayout->addWidget(phoneLabel);
    infoLayout->addWidget(levelLabel);

    sellerLayout->addWidget(infoWidget);
    sellerLayout->addStretch();
}

QVariantMap SellerWidget::getSellerInfo() const
{
    return m_sellerInfo;
}

void SellerWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit clicked(m_sellerInfo);
    }
    QFrame::mousePressEvent(event);
}
