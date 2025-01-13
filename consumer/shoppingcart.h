#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include"../all.h"
#include"../customer.h"
#include <QWidget>

namespace Ui {
class Shoppingcart;
}

class Shoppingcart : public QWidget
{
    Q_OBJECT

public:
    explicit Shoppingcart(QString account,QWidget *parent = nullptr);
    ~Shoppingcart();
    QList<QVariantMap>cart={};
    void displayCartItems(const QList<QVariantMap> &cartItems);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Shoppingcart *ui;
    QString account;//修改
    all al;
    customer Cus;
    double total_price;

};

#endif // SHOPPINGCART_H
