#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QWidget>

namespace Ui {
class Shoppingcart;
}

class Shoppingcart : public QWidget
{
    Q_OBJECT

public:
    explicit Shoppingcart(QWidget *parent = nullptr);
    ~Shoppingcart();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Shoppingcart *ui;
};

#endif // SHOPPINGCART_H
