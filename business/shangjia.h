#ifndef SHANGJIA_H
#define SHANGJIA_H

#include <QWidget>

namespace Ui {
class shangjia;
}

class shangjia : public QWidget
{
    Q_OBJECT

public:
    explicit shangjia(QWidget *parent = nullptr);
    ~shangjia();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::shangjia *ui;
};

#endif // SHANGJIA_H
