#ifndef TASK_INFORM_H
#define TASK_INFORM_H

#include <QWidget>

namespace Ui {
class task_inform;
}

class task_inform : public QWidget
{
    Q_OBJECT

public:
    explicit task_inform(QWidget *parent = nullptr);
    ~task_inform();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::task_inform *ui;
};

#endif // TASK_INFORM_H
