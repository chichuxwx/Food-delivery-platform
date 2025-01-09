#ifndef ORDER_REVIEW_H
#define ORDER_REVIEW_H

#include <QWidget>

#include "all.h"

namespace Ui {
class order_review;
}

class order_review : public QWidget
{
    Q_OBJECT

public:
    explicit order_review(QString account,QWidget *parent = nullptr);//修改
    ~order_review();

private slots:
    void on_pushButton_clicked();

private:
    Ui::order_review *ui;

    //修改
    all al;
    QString account;
};

#endif // ORDER_REVIEW_H
