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
    explicit task_inform(QString account,QWidget *parent = nullptr);//修改
    ~task_inform();
    void onOrderClicked(const QVariantMap &orderInfo);

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::task_inform *ui;
    QString account;//修改
};

#endif // TASK_INFORM_H
