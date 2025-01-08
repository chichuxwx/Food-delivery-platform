#include "timeworker.h"

TimeWorker::TimeWorker(QObject *parent) : QObject(parent), timer(new QTimer(this))
{
    connect(timer, &QTimer::timeout, this, [this]() {
        QString timeStr = QDateTime::currentDateTime().toString("hh:mm:ss");
        emit currentTime(timeStr);
    });
}

TimeWorker::~TimeWorker()
{
    stop();
}

void TimeWorker::start()
{
    timer->start(1000); // 每秒更新时间
}

void TimeWorker::stop()
{
    if (timer->isActive()) {
        timer->stop();
    }
    emit finished();
}
