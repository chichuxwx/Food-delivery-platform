#ifndef ADMINIWINDOW_H
#define ADMINIWINDOW_H

#include <QWidget>

namespace Ui {
class adminiwindow;
}

class adminiwindow : public QWidget
{
    Q_OBJECT

public:
    explicit adminiwindow(QWidget *parent = nullptr);
    ~adminiwindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::adminiwindow *ui;
};

#endif // ADMINIWINDOW_H
