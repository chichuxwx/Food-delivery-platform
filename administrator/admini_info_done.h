#ifndef ADMINI_INFO_DONE_H
#define ADMINI_INFO_DONE_H

#include <QWidget>

namespace Ui {
class admini_info_done;
}

class admini_info_done : public QWidget
{
    Q_OBJECT

public:
    explicit admini_info_done(QWidget *parent = nullptr);
    ~admini_info_done();

private:
    Ui::admini_info_done *ui;
};

#endif // ADMINI_INFO_DONE_H
