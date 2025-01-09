#ifndef INFORM_H
#define INFORM_H

#include <QWidget>
#include "../Seller.h"

namespace Ui {
class inform;
}

class inform : public QWidget
{
    Q_OBJECT

public:
    explicit inform(QString account,QWidget *parent = nullptr);
    ~inform();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_order_clicked();

    void on_pushButton_workbench_clicked();

private:
    Ui::inform *ui;
    QString account;
    seller sl;
};

#endif // INFORM_H
