#ifndef SELLERWIDGET_H
#define SELLERWIDGET_H

#include <QFrame>
#include <QVariantMap>

class QLabel;

class SellerWidget : public QFrame
{
    Q_OBJECT
public:
    explicit SellerWidget(const QVariantMap &sellerInfo, QWidget *parent = nullptr);

    QVariantMap getSellerInfo() const;

signals:
    void clicked(const QVariantMap &sellerInfo);

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    QVariantMap m_sellerInfo;
    QLabel *imageLabel;

    // 工具函数：将 QByteArray 转换为 QPixmap
    QPixmap byteArrayToPixmap(const QByteArray &byteArray);
};

#endif // SELLERWIDGET_H
