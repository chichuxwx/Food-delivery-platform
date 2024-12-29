#ifndef ADMINI_INFO_H
#define ADMINI_INFO_H

#include <QWidget>

namespace Ui {
class admini_info;
}

class admini_info : public QWidget
{
    Q_OBJECT

public:
    explicit admini_info(QWidget *parent = nullptr);
    ~admini_info();

private:
    Ui::admini_info *ui;
};

#endif // ADMINI_INFO_H
