#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"database/database.h"
#include"QByteArray"
struct unique_seller{
    QList<QVariantMap> list;
    QString name;
    QString phone;
    QByteArray image;
};

class customer{

public:
    customer(){};
    ~customer(){};
    QList<QVariantMap> get_seller_infor();
    unique_seller get_seller_unique(const QString &seller_id);
    void add_cart(const QVariantMap &order_infor);
    void settle_cart(const QString &account);
    QList<QVariantMap>get_cart_infor(const QString &account);
    QVariantMap get_customer_infor(const QString &account);
    QString get_customer_add(const QString &account);
    void update_customer_infor(const QString &account,const QString &name,const QString &address,const QString &phone_number,const QByteArray &image);




private:
    Database database;


};

#endif // CUSTOMER_H
