#include "con_reviews.h"
#include "ui_con_reviews.h"
#include "../StarRatingWidget.h"
#include <QVBoxLayout>
#include"../head.h"

Con_reviews::Con_reviews(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Con_reviews)
{
    ui->setupUi(this);

    // 创建星级控件
    starWidgetTop = new StarRatingWidget(this);
    starWidgetBottom = new StarRatingWidget(this);

    // 设置星级初始值
    starWidgetTop->setRating(5);
    starWidgetBottom->setRating(5);

    // 创建主布局
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(0, -300, 0, 0);  // 设置整体边距，(左, 上, 右, 下)

    // 调整上排布局
    QHBoxLayout *topLayout = new QHBoxLayout();
    topLayout->addWidget(starWidgetTop);
    topLayout->setContentsMargins(0, 0, 0, -300);

    // 调整下排布局
    QHBoxLayout *bottomLayout = new QHBoxLayout();
    bottomLayout->addWidget(starWidgetBottom);
    bottomLayout->setContentsMargins(0, 0, 0, 150);

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
    OrderStatus *order = new OrderStatus();
    order->show();
    this->close();
}

void Con_reviews::on_pushButton_8_clicked()
{
    OrderStatus *order=new OrderStatus();

    QJsonObject storeCommand;
    storeCommand["command"] = "store";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);

    int star_rider=starWidgetTop->getRating();
    int star_business=starWidgetBottom->getRating();
    QString comment = ui->textEdit->toPlainText();
    QJsonObject credentials;
    credentials["骑手评分"]=star_rider;
    credentials["商家评分"]=star_business;
    credentials["评价"] = comment;
    QJsonDocument credentialsDoc(credentials);
    QByteArray credentialsData = credentialsDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(credentialsData);

    order->show();
    this->close();
}

