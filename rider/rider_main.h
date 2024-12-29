#ifndef RIDER_MAIN_H
#define RIDER_MAIN_H

#include <QWidget>

namespace Ui {
class Rider_main;
}

class Rider_main : public QWidget
{
    Q_OBJECT

public:
    explicit Rider_main(QWidget *parent = nullptr);
    ~Rider_main();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Rider_main *ui;
};

#endif // RIDER_MAIN_H
