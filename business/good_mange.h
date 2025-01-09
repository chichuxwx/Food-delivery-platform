#ifndef GOOD_MANGE_H
#define GOOD_MANGE_H

#include <QWidget>

namespace Ui {
class good_mange;
}

class good_mange : public QWidget
{
    Q_OBJECT

public:
    explicit good_mange(QString account,QWidget *parent = nullptr);
    ~good_mange();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_add_good_clicked();

private:
    Ui::good_mange *ui;
    QString account;
};

#endif // GOOD_MANGE_H
