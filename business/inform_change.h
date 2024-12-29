#ifndef INFORM_CHANGE_H
#define INFORM_CHANGE_H

#include <QWidget>

namespace Ui {
class inform_change;
}

class inform_change : public QWidget
{
    Q_OBJECT

public:
    explicit inform_change(QWidget *parent = nullptr);
    ~inform_change();

private slots:
    void on_label_2_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::inform_change *ui;
};

#endif // INFORM_CHANGE_H
