#ifndef ALL_H
#define ALL_H
#include"database/database.h"
class all{
public:
    int log_in(const QString &account,const QString &password);
    int sign_in(const QString &account,const QString &password,const int &who);
    QList<QVariantMap> select_orders(void);
    QList<QVariantMap> select_orders_somebody(const QString &account,const int  &statu);
    void update_order_statu(const int &order_id,const int &statu);
    QList<QVariantMap> select_dish_information(const QString &seller_id);

private:
    Database database;
};

#endif // ALL_H
