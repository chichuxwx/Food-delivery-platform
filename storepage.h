#ifndef STOREPAGE_H
#define STOREPAGE_H

#include <QWidget>

namespace Ui {
class Storepage;
}

class Storepage : public QWidget
{
    Q_OBJECT

public:
    explicit Storepage(QWidget *parent = nullptr);
    ~Storepage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Storepage *ui;
};

#endif // STOREPAGE_H
