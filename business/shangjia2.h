#ifndef SHANGJIA2_H
#define SHANGJIA2_H

#include <QWidget>
#include "../all.h"
namespace Ui {
class shangjia2;
}

class shangjia2 : public QWidget
{
    Q_OBJECT

public:
    explicit shangjia2(QString account,QWidget *parent = nullptr);
    ~shangjia2();
    void displayorders();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::shangjia2 *ui;
    QString account;
    all al;
};

#endif // SHANGJIA2_H
