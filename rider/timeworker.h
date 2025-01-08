#ifndef TIMEWORKER_H
#define TIMEWORKER_H

#include <QObject>
#include <QTimer>
#include <QDateTime>

class TimeWorker : public QObject
{
    Q_OBJECT
public:
    explicit TimeWorker(QObject *parent = nullptr);
    ~TimeWorker();

public slots:
    void start();
    void stop();

signals:
    void currentTime(const QString &time);
    void finished();

private:
    QTimer *timer;
};

#endif // TIMEWORKER_H
