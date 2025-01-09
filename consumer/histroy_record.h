#ifndef HISTROY_RECORD_H
#define HISTROY_RECORD_H

#include <QWidget>
#include"../customer.h"
#include"../Seller.h"
#include"../all.h"


namespace Ui {
class histroy_record;
}

class histroy_record : public QWidget
{
    Q_OBJECT

public:
    explicit histroy_record(QString account,QWidget *parent = nullptr);
    ~histroy_record();

private slots:
    void on_pushButton_clicked();

private:
    Ui::histroy_record *ui;
    QString account;//修改
    customer Cus;//修改
    all al;//修改
    seller Se;//修改
};

#endif // HISTROY_RECORD_H
