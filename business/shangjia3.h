#ifndef SHANGJIA3_H
#define SHANGJIA3_H

#include <QWidget>
#include "../all.h"
namespace Ui {
class shangjia3;
}

class shangjia3 : public QWidget
{
    Q_OBJECT

public:
    explicit shangjia3(QString account,QWidget *parent = nullptr);
    ~shangjia3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::shangjia3 *ui;
    QString account;
    all al;
};

#endif // SHANGJIA3_H
