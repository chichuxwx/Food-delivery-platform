#ifndef ADDRESS_H
#define ADDRESS_H
#include"../customer.h"
#include <QWidget>

namespace Ui {
class address;
}

class address : public QWidget
{
    Q_OBJECT

public:
    explicit address(QString account,QString add=nullptr,QWidget *parent = nullptr);
    ~address();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private://修改
    Ui::address *ui;
    QString add;//地址
    customer Cus;
    QString account;
};

#endif // ADDRESS_H
