#ifndef TASK_COMPLETED_H
#define TASK_COMPLETED_H

#include <QWidget>

namespace Ui {
class task_completed;
}

class task_completed : public QWidget
{
    Q_OBJECT

public:
    explicit task_completed(QString account,QWidget *parent = nullptr);//修改
    ~task_completed();
    void onOrderClicked();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::task_completed *ui;
    QString account ;//修改
};

#endif // TASK_COMPLETED_H
