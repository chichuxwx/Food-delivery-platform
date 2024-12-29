#ifndef ADMINIWINDOW_H
#define ADMINIWINDOW_H

#include <QWidget>

namespace Ui {
class adminiwindow;
}

class adminiwindow : public QWidget
{
    Q_OBJECT

public:
    explicit adminiwindow(QWidget *parent = nullptr);
    ~adminiwindow();

private:
    Ui::adminiwindow *ui;
};

#endif // ADMINIWINDOW_H
