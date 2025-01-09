#ifndef DISHCHANGE_H
#define DISHCHANGE_H

#include <QWidget>
#include "../Seller.h"
namespace Ui {
class dishchange;
}

class dishchange : public QWidget
{
    Q_OBJECT

public:
    explicit dishchange(QString account,QWidget *parent = nullptr);
    ~dishchange();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_price_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::dishchange *ui;
    QString account;
    seller sl;
};

#endif // DISHCHANGE_H
