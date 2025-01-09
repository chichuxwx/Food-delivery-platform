#ifndef RIDER_INFORM_H
#define RIDER_INFORM_H

#include <QWidget>

//修改
#include "../rider.h"


namespace Ui {
class rider_inform;
}

class rider_inform : public QWidget
{
    Q_OBJECT

public:
    explicit rider_inform(QString account,QWidget *parent = nullptr);//修改
    ~rider_inform();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::rider_inform *ui;

    //修改
    QString account ;
};

#endif // RIDER_INFORM_H
