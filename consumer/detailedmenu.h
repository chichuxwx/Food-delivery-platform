#ifndef DETAILEDMENU_H
#define DETAILEDMENU_H

#include <QWidget>
#include"../customer.h"
#include "../Seller.h"

namespace Ui {
class DetailedMenu;
}

class DetailedMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DetailedMenu(QString account,QString shop_name,QString dish_name,QWidget *parent = nullptr);
    ~DetailedMenu();

private slots:
    void on_pushButton_2_clicked();

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void changebuttonstatues();

    void on_pushButton_clicked();

private:
    Ui::DetailedMenu *ui;
    customer Cus;//修改
    QString account;//修改
    QString shop_name;//修改
    QString dish_name;//修改
    Database database;//修改
    seller sl;
};

#endif // DETAILEDMENU_H
