#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QDebug>

class QSqlResultSet {
public:
    void append(QSqlRecord);

private:

}; // 自己实现

class Database {
public:
    Database();
    ~Database();
    bool connectToDatabase();
    bool executeQuery(const QString queryStr);
    QVariant executeScalarQuery(const QString queryStr);
    QSqlRecord executeSingleRecordQuery(const QString queryStr);
    QSqlResultSet executeResultSetQuery(const QString queryStr);
    // 总表
    int select_general_table(const QString account, const QString password);
    bool add_general_table(const QString account, const QString password, const int identifier);
    int select_general_table2(const QString account);
    QList<QVariantMap>select_orders_information_rider(int statu);

    // 消费者
    void add_customer(const QString account, const QString password);
    QVariantMap select_customer_information(const QString account);
    QString select_customer_address(const QString account);
    bool update_customer_img(const QString account, const QString imagepath);
    bool update_customer_address(const QString account, const QString address);
    bool update_customer_phone(const QString account, const QString phone);

    // 商家
    void update_order_statu(const int order_id,const int statu,QString account) ;
    QString get_account_byshop(const QString shop_name); // 修改
    void add_seller(const QString account, const QString password);
    QList<QVariantMap> select_seller_information(void);
    QString select_seller_shop_name(const QString account);
    QString select_seller_phone(const QString account);
    QByteArray select_seller_img(const QString account);
    bool update_seller_shop_name(const QString account, const QString shop_name);
    bool update_seller_phone(const QString account, const QString phone);
    bool update_seller_img(const QString account, const QString imagepath);

    // 骑手数据操作
    void addRider(const QString account, const QString password);
    bool update_rider_phone(const QString account, const QString phone_number);
    bool update_rider_level(const QString account, const double level);
    bool update_rider_image(const QString account, const QString filepath);
    QVariantMap select_rider_information(const QString account);

    // 管理员数据操作
    void addAdmin(const QString account, const QString password);

    // 订单表操作
    void addOrders(const QString seller_id, const QString customer_id, const QString dish_name,
                   const double dish_consumption_amount, const int status, const QString remark,
                   const int dish_amount,int order_id);
    QList<QVariantMap> select_orders_information_seller(const QString seller_id, const int statu);
    QList<QVariantMap> select_orders_information_customer(const QString customer, const int statu);
    QList<QVariantMap> select_orders_information_rider(const QString rider, const int statu);
    QList<QVariantMap> select_orders_information_all(void);
    void update_order_statu(const int order_id, const int statu);

    // 菜品表
    bool addDish(const QString name, const QString imagepath, const QString description,
                 const QString seller_id, const double price, const int sales_number, const int status);
    QList<QVariantMap> select_dish_information(const QString seller_id);
    bool update_dish(const QString seller_id, const QString name, const double price, const int sales_number,const QString old_name);
    bool update_dish(const QString seller_id, const QString name, const double price, const int sales_number);

    // 购物车表
    QList<QVariantMap> select_cart_information(const QString customer_id);
    bool add_cart(const QString seller_id, const QString customer_id,
                  const QString dish_name, const double price, const int quantity, const QString note);
    bool delete_cart(const QString customer_id);
    //返回id
    int get_id_user(QString tablename);
    int get_id_order();
private:
    QString m_hostName = "127.0.0.1";
    QString m_databaseName = "test1";
    QString m_userName = "root";
    QString m_password = "Owen_27144";
    QSqlDatabase *m_db;
};

#endif // DATABASE_H
