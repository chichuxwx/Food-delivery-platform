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

private:
    Ui::admini_main *ui;
};

#endif // ADMINI_MAIN_H
