#include "dish_widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QSpinBox>
#include <QPushButton>
#include <QDebug>
#include"detailedmenu.h"
dish_widget::dish_widget(QString account,QString shop_name,QString dish_name,const QVariantMap &dishInfo, QWidget *parent)
    : account(account),shop_name(shop_name),dish_name(dish_name) ,QWidget(parent), m_dishInfo(dishInfo)
{
    // 主布局
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    // 左侧：图片
    imageLabel = new QLabel(this);
    QPixmap pixmap = byteArrayToPixmap(dishInfo["image"].toByteArray());
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        imageLabel->setText("无图片");
    }
    mainLayout->addWidget(imageLabel);

    // 中间部分：菜品信息
    QVBoxLayout *infoLayout = new QVBoxLayout();
    QLabel *nameLabel = new QLabel(QString("菜名: %1").arg(dishInfo["name"].toString()), this);
    QLabel *priceLabel = new QLabel(QString("价格: ¥%1").arg(dishInfo["price"].toDouble(), 0, 'f', 2), this);
    QLabel *ratingLabel = new QLabel(QString("评分: %1").arg(dishInfo["status"].toInt()), this);
    QLabel *descriptionLabel = new QLabel(QString("描述: %1").arg(dishInfo["description"].toString()), this);

    infoLayout->addWidget(nameLabel);
    infoLayout->addWidget(priceLabel);
    infoLayout->addWidget(ratingLabel);
    infoLayout->addWidget(descriptionLabel);
    mainLayout->addLayout(infoLayout);

    // 右侧：操作区域
    QVBoxLayout *actionLayout = new QVBoxLayout();
    quantitySpinBox = new QSpinBox(this);
    quantitySpinBox->setRange(1, 99);
    quantitySpinBox->setValue(1);

    QPushButton*addToCartButton = new QPushButton("加入购物车", this);
    connect(addToCartButton, &QPushButton::clicked, this, &dish_widget::handleAddToCart);
    QPushButton*ToDetails = new QPushButton("详情", this);
    connect(ToDetails, &QPushButton::clicked, this, &dish_widget::todetails);

    actionLayout->addWidget(quantitySpinBox);
    actionLayout->addWidget(addToCartButton);
    actionLayout->addWidget(ToDetails);
    mainLayout->addLayout(actionLayout);
}

dish_widget::~dish_widget()
{
    // 默认析构函数
}
void dish_widget::todetails()
{
    DetailedMenu*detailMenu=new DetailedMenu(account,shop_name,m_dishInfo);
    detailMenu->show();
}
QVariantMap dish_widget::getDishInfo() const
{
    return m_dishInfo;
}

void dish_widget::handleAddToCart()
{
    int quantity = quantitySpinBox->value();
    emit addToCart(m_dishInfo, quantity);
}

QPixmap dish_widget::byteArrayToPixmap(const QByteArray &byteArray)
{
    QPixmap pixmap;
    if (!pixmap.loadFromData(byteArray)) {
        qDebug() << "无法从字节数组加载图片";
    }
    return pixmap;
}
