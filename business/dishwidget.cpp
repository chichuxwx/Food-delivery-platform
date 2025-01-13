#include "dishwidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPixmap>
#include <QMouseEvent>
#include <QDebug>
#include <QPushButton>
#include "../database/database.h"
#include <QDoubleValidator>

// 工具函数：将 QByteArray 转换为 QPixmap
QPixmap DishWidget::byteArrayToPixmap(const QByteArray &byteArray) {
    QPixmap pixmap;
    if (!pixmap.loadFromData(byteArray)) {
        qDebug() << "无法从字节数组加载图片";
    }
    return pixmap;
}

// 构造函数
DishWidget::DishWidget(const QVariantMap &dishInfo, QWidget *parent)
    : QFrame(parent), m_dishInfo(dishInfo)
{
    setFrameShape(QFrame::Box);
    setLineWidth(1);
    account = m_dishInfo["seller_id"].toString();
    setStyleSheet("background-color: white;");
    setCursor(Qt::PointingHandCursor); // 鼠标悬停时显示手型光标

    QHBoxLayout *dishLayout = new QHBoxLayout(this);

    // 左侧显示菜品图片
    imageLabel = new QLabel(this);
    QPixmap pixmap = byteArrayToPixmap(dishInfo["image"].toByteArray());
    if (!pixmap.isNull()) {
        imageLabel->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        imageLabel->setText("无图片");
    }
    dishLayout->addWidget(imageLabel);

    // 右侧显示菜品信息
    QWidget *infoWidget = new QWidget(this);
    QVBoxLayout *infoLayout = new QVBoxLayout(infoWidget);

    // 菜品名称
    QHBoxLayout *nameLayout = new QHBoxLayout();
    QLabel *nameLabel = new QLabel("菜品名称:", infoWidget);
    dishNameLineEdit = new QLineEdit(infoWidget);
    dishNameLineEdit->setText(dishInfo["name"].toString());
    nameLayout->addWidget(nameLabel);
    nameLayout->addWidget(dishNameLineEdit);
    infoLayout->addLayout(nameLayout);

    // 价格
    QHBoxLayout *priceLayout = new QHBoxLayout();
    QLabel *priceLabel = new QLabel("价格:", infoWidget);
    priceLineEdit = new QLineEdit(infoWidget);
    priceLineEdit->setText(QString::number(dishInfo["price"].toDouble()));
    // 设置输入验证器，确保输入为有效的双精度数
    QDoubleValidator *validator = new QDoubleValidator(0, 1000000, 2, priceLineEdit);
    priceLineEdit->setValidator(validator);
    priceLayout->addWidget(priceLabel);
    priceLayout->addWidget(priceLineEdit);
    infoLayout->addLayout(priceLayout);

    // 菜品描述
    QHBoxLayout *descriptionLayout = new QHBoxLayout();
    QLabel *descriptionLabel = new QLabel("菜品描述:", infoWidget);
    descriptionLineEdit = new QLineEdit(infoWidget);
    descriptionLineEdit->setText(dishInfo["description"].toString());
    descriptionLayout->addWidget(descriptionLabel);
    descriptionLayout->addWidget(descriptionLineEdit);
    infoLayout->addLayout(descriptionLayout);

    // 销量
    QHBoxLayout *salesLayout = new QHBoxLayout();
    QLabel *salesLabel = new QLabel("销量:", infoWidget);
    sellNumberLineEdit = new QLineEdit(infoWidget);
    sellNumberLineEdit->setText(QString::number(dishInfo["sales_number"].toInt()));
    sellNumberLineEdit->setReadOnly(true); // 销量不需要用户编辑
    salesLayout->addWidget(salesLabel);
    salesLayout->addWidget(sellNumberLineEdit);
    infoLayout->addLayout(salesLayout);

    // 确认修改按钮
    admitButton = new QPushButton("确认修改", infoWidget);
    connect(admitButton, &QPushButton::clicked, this, &DishWidget::onButtonClicked);

    // 按钮布局，将按钮放在右侧
    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addStretch(); // 添加弹性空间，将按钮推到右侧
    buttonLayout->addWidget(admitButton);
    infoLayout->addLayout(buttonLayout);

    dishLayout->addWidget(infoWidget);
    dishLayout->addStretch();

    setLayout(dishLayout);
}

// 获取菜品信息
QVariantMap DishWidget::getDishInfo() const
{
    return m_dishInfo;
}

// 槽函数：确认修改按钮点击事件
void DishWidget::onButtonClicked(){
    // 获取用户输入的数据
    QString new_name = dishNameLineEdit->text().trimmed();
    QString new_price_str = priceLineEdit->text().trimmed();
    QString new_des = descriptionLineEdit->text().trimmed();

    // 打印调试信息
    qDebug() << "获取到的菜品名称:" << new_name;
    qDebug() << "获取到的价格字符串:" << new_price_str;
    qDebug() << "获取到的菜品描述:" << new_des;

    // 验证输入
    if(new_name.isEmpty()) {
        qWarning() << "菜品名称不能为空！";
        return;
    }

    bool priceOk;
    double new_price = new_price_str.toDouble(&priceOk);
    if(!priceOk || new_price < 0) {
        qWarning() << "请输入有效的价格！";
        return;
    }

    if(new_des.isEmpty()) {
        qWarning() << "菜品描述不能为空！";
        return;
    }

    // 更新 m_dishInfo
    m_dishInfo["name"] = new_name;
    m_dishInfo["price"] = new_price;
    m_dishInfo["description"] = new_des;

    // 打印转换后的价格
    qDebug() << "转换后的价格:" << new_price;

    // 调用数据库更新函数
    Database db;
    bool success = db.update_dish(account, new_name, new_price, 0,m_dishInfo["name"].toString());
    if(success){
        qDebug() << "菜品信息更新成功！";
    } else {
        qWarning() << "菜品信息更新失败！";
    }
}
