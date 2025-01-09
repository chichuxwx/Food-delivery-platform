#ifndef SELLER_H
#define SELLER_H

#include"database/database.h"

class seller
{
public:
    seller(){};
    ~seller(){};

    //修改菜品信息
    void change_dish_info(const QString &seller_id, const QString &name, const double& price, const int &sales_number);

    //返回所有订单
    QList<QVariantMap> all_seller_orders(const QString &seller_id, const int &statu);

    //查询商家个人信息
    //查询商家店铺
    QString search_seller_shop(const QString &account);
    //查询商家联系电话
    QString search_seller_phone(const QString &account);
    // 查询商家的头像
    QByteArray search_seller_img(const QString &account);
    // 返回指定商家的头像数据
    QByteArray select_seller_img(const QString &account);
    //查询商家菜品
    QList<QVariantMap> search_selller_dish_information(const QString &seller_id);



    //新增菜品
    void add_new_dish(const QString& name, const QString &imagepath, const QString &description,
                      const QString &seller_id, const double& price, const int& sales_number, const int &status);

    //设定满减



private:
    Database database;
};




#endif // SELLER_H
