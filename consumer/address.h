#ifndef ADDRESS_H
#define ADDRESS_H

#include <QWidget>

namespace Ui {
class address;
}

class address : public QWidget
{
    Q_OBJECT

public:
    explicit address(QWidget *parent = nullptr);
    ~address();

private slots:
    void on_pushButton_clicked();

private:
    Ui::address *ui;
};

#endif // ADDRESS_H
