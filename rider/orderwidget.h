#ifndef ORDERWIDGET_H
#define ORDERWIDGET_H

#include <QFrame>
#include <QVariantMap>

class QLabel;
class QMouseEvent;

class OrderWidget : public QFrame
{
    Q_OBJECT
public:
    explicit OrderWidget(const QVariantMap &orderInfo, QWidget *parent = nullptr);
    QVariantMap getOrderInfo() const;

signals:
    void clicked(const QVariantMap &orderInfo);

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    QVariantMap m_orderInfo;
    QLabel *customerIdLabel;
    QLabel *dishNameLabel;
    QLabel *consumptionAmountLabel;
    QLabel *remarkLabel;
    QLabel *dishAmountLabel;
    QLabel *sellerIdLabel;
    int order_id;
};

#endif // ORDERWIDGET_H
