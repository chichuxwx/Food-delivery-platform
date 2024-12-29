#ifndef CHANGE_INFORM_H
#define CHANGE_INFORM_H

#include <QWidget>

namespace Ui {
class change_inform;
}

class change_inform : public QWidget
{
    Q_OBJECT

public:
    explicit change_inform(QWidget *parent = nullptr);
    ~change_inform();

private slots:
    void on_pushButton_clicked();

private:
    Ui::change_inform *ui;
};

#endif // CHANGE_INFORM_H
