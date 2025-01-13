#ifndef STOREPAGE_H
#define STOREPAGE_H

#include <QWidget>
#include <QVariantMap>
#include "../Seller.h"

namespace Ui {
class Storepage;
}

class Storepage : public QWidget
{
    Q_OBJECT

public:
    explicit Storepage(QString account,QString shop_name,QWidget *parent=nullptr);
    Storepage(QString account,QWidget *parent=nullptr);
    Storepage(QString account,const QVariantMap &sellerInfo, QWidget *parent=nullptr);
    ~Storepage();
    void setSellerInfo(const QVariantMap &sellerInfo);
    void onClickedDishes(const QVariantMap &dishInfo);
    // void displaySellerInfo();
    void displayDish();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Storepage *ui;
    QVariantMap m_sellerInfo;
    QString account;//修改
    QString shop_name;//修改
    seller sl;
};

#endif // STOREPAGE_H
