#ifndef COMPLAINTS_H
#define COMPLAINTS_H

#include <QWidget>

namespace Ui {
class complaints;
}

class complaints : public QWidget
{
    Q_OBJECT

public:
    explicit complaints(QString account,QWidget *parent = nullptr);
    ~complaints();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::complaints *ui;
    QString account;
};

#endif // COMPLAINTS_H
