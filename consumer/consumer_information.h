#ifndef CONSUMER_INFORMATION_H
#define CONSUMER_INFORMATION_H

#include <QWidget>

namespace Ui {
class Consumer_Information;
}

class Consumer_Information : public QWidget
{
    Q_OBJECT

public:
    explicit Consumer_Information(QWidget *parent = nullptr);
    ~Consumer_Information();

private slots:
    void on_label_name_linkActivated(const QString &link);

    void on_label_phone_number_linkActivated(const QString &link);

    void on_label_grade_linkActivated(const QString &link);

    void on_pushButton_address_clicked();

    void on_pushButton_history_order_clicked();

    void on_pushButton_service_clicked();

    void on_pushButton_change_infom_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_order_clicked();

    void on_pushButton_Orders_clicked();

    void on_pushButton_information_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Consumer_Information *ui;
};

#endif // CONSUMER_INFORMATION_H
