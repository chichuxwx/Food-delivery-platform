#ifndef GOOD_ACT_H
#define GOOD_ACT_H

#include <QWidget>

namespace Ui {
class good_act;
}

class good_act : public QWidget
{
    Q_OBJECT

public:
    explicit good_act(QString account,QWidget *parent = nullptr);
    ~good_act();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::good_act *ui;
    QString account;
};

#endif // GOOD_ACT_H
