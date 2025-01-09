#ifndef CHANGE_INFORM_H
#define CHANGE_INFORM_H

#include <QWidget>
#include "../head.h"
namespace Ui {
class change_inform;
}

class change_inform : public QWidget
{
    Q_OBJECT

public:
    explicit change_inform(QString account,QWidget *parent = nullptr);
    ~change_inform();

private slots:
    void on_pushButton_clicked();

private://修改
    Ui::change_inform *ui;
    customer Cus;
    QString account;
};

#endif // CHANGE_INFORM_H
