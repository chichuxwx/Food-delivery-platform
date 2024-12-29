#ifndef EVALUTE_H
#define EVALUTE_H

#include <QWidget>

namespace Ui {
class evalute;
}

class evalute : public QWidget
{
    Q_OBJECT

public:
    explicit evalute(QWidget *parent = nullptr);
    ~evalute();

private slots:
    void on_pushButton_clicked();

private:
    Ui::evalute *ui;
};

#endif // EVALUTE_H
