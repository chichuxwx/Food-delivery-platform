// admin_orderwidget.h
#ifndef ADMIN_ORDERWIDGET_H
#define ADMIN_ORDERWIDGET_H

#include <QFrame>
#include <QVariantMap>
#include <QPixmap>
#include <QMouseEvent> // 如果需要处理鼠标事件

class QLabel;

class AdminOrderWidget : public QFrame
{
    Q_OBJECT
public:
    explicit AdminOrderWidget(const QVariantMap &orderInfo, QWidget *parent = nullptr);
    ~AdminOrderWidget();

    QVariantMap getOrderInfo() const;

signals:
    void clicked(const QVariantMap &orderInfo); // 如果需要信号

protected:
           // 如果需要处理鼠标事件，取消注释
           // void mousePressEvent(QMouseEvent *event) override;

private:
    QVariantMap m_orderInfo;
    QLabel *imageLabel;
    // 工具函数：将 QByteArray 转换为 QPixmap
    QPixmap byteArrayToPixmap(const QByteArray &byteArray);
};

#endif // ADMIN_ORDERWIDGET_H
