#ifndef CONSUMER_INTERFACE_H
#define CONSUMER_INTERFACE_H

#include <QWidget>

namespace Ui {
class Consumer_interface;
}

class Consumer_interface : public QWidget
{
    Q_OBJECT

public:
    explicit Consumer_interface(QWidget *parent = nullptr);
    ~Consumer_interface();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Consumer_interface *ui;
};

#endif // CONSUMER_INTERFACE_H
