#ifndef CON_REVIEWS_H
#define CON_REVIEWS_H

#include <QWidget>
#include "../StarRatingWidget.h"

namespace Ui {
class Con_reviews;
}

class Con_reviews : public QWidget
{
    Q_OBJECT

public:
    explicit Con_reviews(QWidget *parent = nullptr);
    ~Con_reviews();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Con_reviews *ui;
    StarRatingWidget *starWidgetTop;  // 上排星级控件
    StarRatingWidget *starWidgetBottom;  // 下排星级控件
};

#endif // CON_REVIEWS_H
