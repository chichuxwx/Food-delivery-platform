#ifndef RIDER_MAIN_H
#define RIDER_MAIN_H

#include <QWidget>
#include "timeworker.h"
#include <QThread>
#include "../head.h"
namespace Ui {
class Rider_main;
}

class Rider_main : public QWidget
{
    Q_OBJECT

public:
    explicit Rider_main(QString account,QWidget *parent = nullptr);
    ~Rider_main();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void updateTimeLabel(const QString &time); // 更新槽函数名称和参数
    void countThreadFinished();
    void onOrderClicked(const QVariantMap &orderInfo);
private:
    // 时间线程相关
    QThread *timeThread;
    TimeWorker *timeWorker;
    QString account ;//修改
    Database db;
    customer cu;
    // 计算时间差的函数
    QString leftTime(const QString &currentTime, const QString &targetTime = "15:00:00");

    Ui::Rider_main *ui;
};

#endif // RIDER_MAIN_H
