#ifndef RIDER_INFORM_H
#define RIDER_INFORM_H

#include <QWidget>

namespace Ui {
class rider_inform;
}

class rider_inform : public QWidget
{
    Q_OBJECT

public:
    explicit rider_inform(QWidget *parent = nullptr);
    ~rider_inform();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::rider_inform *ui;
};

#endif // RIDER_INFORM_H
