#ifndef ORDERSTATUS_H
#define ORDERSTATUS_H
#include"../customer.h"
#include"../all.h"
#include"../Seller.h"
#include <QWidget>

namespace Ui {
class OrderStatus;
}

class OrderStatus : public QWidget
{
    Q_OBJECT

public:
    explicit OrderStatus(QString account,QWidget *parent = nullptr);
    ~OrderStatus();
    void order_dispaly();
    void onSellerClicked();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

signals:
    void clicked();

private:
    Ui::OrderStatus *ui;
    QString account;//修改
    customer Cus;//修改
    all al;//修改
    seller Se;//修改


};

#endif // ORDERSTATUS_H
