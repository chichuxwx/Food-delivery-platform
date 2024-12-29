#ifndef SHANGJIA2_H
#define SHANGJIA2_H

#include <QWidget>

namespace Ui {
class shangjia2;
}

class shangjia2 : public QWidget
{
    Q_OBJECT

public:
    explicit shangjia2(QWidget *parent = nullptr);
    ~shangjia2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::shangjia2 *ui;
};

#endif // SHANGJIA2_H
