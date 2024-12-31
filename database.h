#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QDebug>
class QSqlResultSet{

public:
void append(QSqlRecord );

private:

};//自己实现
class Database {
public:
    Database(const QString &hostName, const QString &databaseName, const QString &userName, const QString &password);
    ~Database();
    bool connectToDatabase();
    bool executeQuery(const QString &queryStr);
    QVariant executeScalarQuery(const QString &queryStr);
    QSqlRecord executeSingleRecordQuery(const QString &queryStr);
    QSqlResultSet executeResultSetQuery(const QString &queryStr);
    //总表
    int select_general_table(const QString &account,const QString &password);
    bool add_general_table(const QString &account,const QString &password,const int &identifier);

    //消费者
    void add_customer(const QString &account,const QString &password);
    QVariantMap select_customer_information(const QString &account);
    QString select_customer_address(const QString &account);
    void update_customer_img(const QString &account,const QString &imagepath);
    void update_customer_address(const QString &account,const QString &address);
    //商家
    void add_seller(const QString &account,const QString &password);
    QList<QVariantMap>select_seller_information(void);
    QString select_seller_shop_name(const QString &account);
    QString select_seller_phone(const QString &account);
    QByteArray select_seller_img(const QString &account);
    void update_seller_shop_name(const QString &account,const QString &shop_name);
    void update_seller_phone(const QString &account,const QString &phone);
    void update_seller_img(const QString &account,const QString &imagepath);
    //骑手数据操作
    void addRider(const QString &account, const QString &password);
    void update_rider_phone(const QString &account,const QString &phone_number);
    void update_rider_level(const QString &account,const QString &level);
    void update_rider_image(const QString &account,const QString &filepath);
    QVariantMap select_rider_information(const QString &account);
    //管理员数据操作
    void addAdmin(const QString &account, const QString &password);
    //订单表操作
    void addOrders(const QString &seller_id,const QString &customer_id,const QString &dish_name,
                   const double &dish_consumption_amount,const int &status,const QString &remark,
                   const int &dish_amount,const int &order_id);
    QList<QVariantMap>select_orders_information_seller(const QString &seller_id,const int  &statu);
    QList<QVariantMap>select_orders_information_customer(const QString &customer,const int &statu);
    QList<QVariantMap>select_orders_information_rider(const QString &rider,const int  &statu);
    void update_order_statu(const int &order_id,const int &statu);
   //菜品表
    void addDish(const QString& name,const QString &imagepath,const QString &description,
        const QString &seller_id,const double& price,const int& sales_number,const int &status);
    QList<QVariantMap>select_dish_information(const QString &seller_id);
    void update_dish(const QString & seller_id,const QString &name,const double&price,const int &sales_number);
    //购物车表
    QList<QVariantMap> select_cart_information(const QString &customer_id);
    void add_cart(const QString &seller_id,const QString &customer_id,
                  const QString &dish_name,const double price,const int quantity,const QString &note);
    void delete_cart(const QString &customer_id);




private:
    QString m_hostName;
    QString m_databaseName;
    QString m_userName;
    QString m_password;
    QSqlDatabase *m_db;
};


#endif // DATABASE_H
