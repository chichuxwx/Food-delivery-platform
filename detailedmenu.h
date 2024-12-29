#ifndef DETAILEDMENU_H
#define DETAILEDMENU_H

#include <QWidget>

namespace Ui {
class DetailedMenu;
}

class DetailedMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DetailedMenu(QWidget *parent = nullptr);
    ~DetailedMenu();

private slots:
    void on_pushButton_2_clicked();

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

private:
    Ui::DetailedMenu *ui;
};

#endif // DETAILEDMENU_H
