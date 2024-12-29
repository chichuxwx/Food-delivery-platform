#ifndef ADMINI_MAIN_H
#define ADMINI_MAIN_H

#include <QWidget>

namespace Ui {
class admini_main;
}

class admini_main : public QWidget
{
    Q_OBJECT

public:
    explicit admini_main(QWidget *parent = nullptr);
    ~admini_main();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::admini_main *ui;
};

#endif // ADMINI_MAIN_H
