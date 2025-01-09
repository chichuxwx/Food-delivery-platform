#ifndef WORKBENCH_H
#define WORKBENCH_H

#include <QWidget>

namespace Ui {
class page_workbench;
}

class page_workbench : public QWidget
{
    Q_OBJECT

public:
    explicit page_workbench(QString account,QWidget *parent = nullptr);
    ~page_workbench();

private slots:
    void on_label_data_day_linkActivated(const QString &link);

    void on_label_6_linkActivated(const QString &link);

    void on_label_data_month_linkActivated(const QString &link);

    void on_pushButton_good_man_clicked();

    void on_pushButton_evalute_clicked();

    void on_pushButton_good_act_clicked();

    void on_pushButton_order_clicked();

    void on_pushButton_workbench_clicked();

    void on_pushButton_self_inform_clicked();

private:
    Ui::page_workbench *ui;
    QString account;
};

#endif // WORKBENCH_H
