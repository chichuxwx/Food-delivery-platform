#include "database/database.h"
#include "all.h"
#include<iostream>
// 注册函数
all::all(){
    std::cout<<"fuck";
}
int all::sign_in(const QString &account, const QString &password, const int &who) {
    // 输入校验
    if (account.isEmpty() || password.isEmpty() || (who < 1 || who > 4)) {
        qDebug() << "Sign-in failed: Invalid input.";
        return 0; // 注册失败
    }

    int result = database.add_general_table(account, password, who);

    if (result == 0) {
        qDebug() << "Sign-in failed: Account already exists.";
    } else {
        qDebug() << "Sign-in successful.";
        if(who==1)
        {
            database.add_customer(account,password);

        }
        else if(who==2)
        {
            database.add_seller(account,password);

        }
        else if(who==3)
        {
            database.addRider(account,password);
        }
        else database.addAdmin(account,password);
    }
    return result;
}

// 返回全部订单
QList<QVariantMap> all::select_orders() {
    QList<QVariantMap> orders = database.select_orders_information_all();
    if (orders.isEmpty()) {
        qDebug() << "No orders found.";
    }
    return orders;
}

// 返回某人某种订单
QList<QVariantMap> all::select_orders_somebody(const QString &account, const int &statu) {
    // 输入校验
    if (account.isEmpty() || statu < 0) {
        qDebug() << "Invalid input for selecting orders.";
        return {};
    }

    // 获取用户标识符
    int userType = database.select_general_table2(account);
    if (userType == -1) {
        qDebug() << "Error: Account does not exist.";
        return {};
    }

    // 根据用户类型选择查询方法
    switch (userType) {
    case 1: // 消费者
        return database.select_orders_information_customer(account, statu);
    case 2: // 商家
        return database.select_orders_information_seller(account, statu);
    case 3: // 骑手
        return database.select_orders_information_rider(account, statu);
    default:
        qDebug() << "Error: Invalid user type.";
        return {};
    }
}

// 更新订单状态
void all::update_order_statu(const int &order_id, const int &statu,QString &account) {
    if (order_id < 0 || statu < 0) {
        qDebug() << "Invalid input for updating order status.";
        return;
    }
    database.update_order_statu(order_id, statu,account);
    qDebug() << "Order status updated: order_id=" << order_id << ", status=" << statu;
}

void all::update_order_statu(const int &order_id, const int &statu) {
    if (order_id < 0 || statu < 0) {
        qDebug() << "Invalid input for updating order status.";
        return;
    }

    database.update_order_statu(order_id, statu);
    qDebug() << "Order status updated: order_id=" << order_id << ", status=" << statu;
}

// 查询某商家的菜品信息
QList<QVariantMap> all::select_dish_information(const QString &seller_id) {
    if (seller_id.isEmpty()) {
        qDebug() << "Invalid seller ID for selecting dish information.";
        return {};
    }

    QList<QVariantMap> dishes = database.select_dish_information(seller_id);
    if (dishes.isEmpty()) {
        qDebug() << "No dishes found for seller:" << seller_id;
    }
    return dishes;
}
