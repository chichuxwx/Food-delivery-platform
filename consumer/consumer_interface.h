#ifndef CONSUMER_INTERFACE_H
#define CONSUMER_INTERFACE_H

#include <QWidget>
#include "storepage.h"

namespace Ui {
class Consumer_interface;
}

class Consumer_interface : public QWidget
{
    Q_OBJECT

public:
    explicit Consumer_interface(QString account,QWidget *parent = nullptr);
    ~Consumer_interface();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();
    void displaySellers();
    void onSellerClicked(const QVariantMap &sellerInfo);

private:
    Ui::Consumer_interface *ui;
    Storepage *m_storePage;
    QString  account;//修改

};

#endif // CONSUMER_INTERFACE_H
