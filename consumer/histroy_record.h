#ifndef HISTROY_RECORD_H
#define HISTROY_RECORD_H

#include <QWidget>

namespace Ui {
class histroy_record;
}

class histroy_record : public QWidget
{
    Q_OBJECT

public:
    explicit histroy_record(QWidget *parent = nullptr);
    ~histroy_record();

private slots:
    void on_pushButton_clicked();

private:
    Ui::histroy_record *ui;
};

#endif // HISTROY_RECORD_H
