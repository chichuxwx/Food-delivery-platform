#ifndef ORDER_REVIEW_H
#define ORDER_REVIEW_H

#include <QWidget>

namespace Ui {
class order_review;
}

class order_review : public QWidget
{
    Q_OBJECT

public:
    explicit order_review(QWidget *parent = nullptr);
    ~order_review();

private slots:
    void on_pushButton_clicked();

private:
    Ui::order_review *ui;
};

#endif // ORDER_REVIEW_H
