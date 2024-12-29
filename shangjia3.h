#ifndef SHANGJIA3_H
#define SHANGJIA3_H

#include <QWidget>

namespace Ui {
class shangjia3;
}

class shangjia3 : public QWidget
{
    Q_OBJECT

public:
    explicit shangjia3(QWidget *parent = nullptr);
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
};

#endif // SHANGJIA3_H
