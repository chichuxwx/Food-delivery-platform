#ifndef HISTORY_ORDER_DISPALY_H
#define HISTORY_ORDER_DISPALY_H

#include <QFrame>
#include <QVariantMap>

class QLabel;

class History_order_Widget : public QFrame
{
    Q_OBJECT
public:
    explicit History_order_Widget(const QVariantMap &orderInfo,
                                  QWidget *parent = nullptr);

    QVariantMap getOrderInfo() const;

signals:
    // 统一使用 QVariantMap
    void buttonClicked(const QVariantMap &orderInfo);

private slots:
    void onButtonClicked();

private:
    QVariantMap m_orderInfo; // 确保这里也是 QVariantMap
    QLabel *imageLabel;
};

#endif // HISTORY_ORDER_DISPALY_H
