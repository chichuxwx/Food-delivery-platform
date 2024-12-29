#ifndef ADMINI_CHECK_H
#define ADMINI_CHECK_H

#include <QWidget>

namespace Ui {
class admini_check;
}

class admini_check : public QWidget
{
    Q_OBJECT

public:
    explicit admini_check(QWidget *parent = nullptr);
    ~admini_check();

private:
    Ui::admini_check *ui;
};

#endif // ADMINI_CHECK_H
