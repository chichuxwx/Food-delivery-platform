#ifndef DISH_WIDGET_H
#define DISH_WIDGET_H

#include <QWidget>
#include <QVariantMap>

class QLabel;
class QSpinBox;
class QPushButton;

class dish_widget : public QWidget
{
    Q_OBJECT

public:
    explicit dish_widget(QString account,QString shop_name,QString dish_name,const QVariantMap &dishInfo, QWidget *parent = nullptr);
    ~dish_widget();
    void todetails();

    QVariantMap getDishInfo() const;

signals:
    void addToCart(const QVariantMap &dishInfo, int quantity);

private slots:
    void handleAddToCart();

private:
    QVariantMap m_dishInfo;

    QLabel *imageLabel;
    QLabel *nameLabel;
    QLabel *ratingLabel;
    QLabel *descriptionLabel;
    QLabel *priceLabel;
    QLabel *statusLabel;
    QSpinBox *quantitySpinBox;
    QPushButton *addToCartButton;
    QString account,shop_name,dish_name;
    QPixmap byteArrayToPixmap(const QByteArray &byteArray);
};

#endif // DISH_WIDGET_H
