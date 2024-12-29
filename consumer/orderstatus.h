#ifndef ORDERSTATUS_H
#define ORDERSTATUS_H

#include <QWidget>

namespace Ui {
class OrderStatus;
}

class OrderStatus : public QWidget
{
    Q_OBJECT

public:
    explicit OrderStatus(QWidget *parent = nullptr);
    ~OrderStatus();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::OrderStatus *ui;
};

#endif // ORDERSTATUS_H
