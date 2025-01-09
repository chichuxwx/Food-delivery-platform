#include "database/database.h"
#include "customer.h"

// 获取商家列表
QList<QVariantMap> customer::get_seller_infor() {
    QList<QVariantMap> list = database.select_seller_information();
    if (list.isEmpty()) {
        qDebug() << "No seller information found.";
    }
    return list;
}

// 获取特定商家信息
unique_seller customer::get_seller_unique(const QString &seller_id) {
    if (seller_id.isEmpty()) {
        qDebug() << "Error: Seller ID is empty.";
        return {};
    }

    unique_seller infor;
    infor.list = database.select_dish_information(seller_id);
    infor.name = database.select_seller_shop_name(seller_id);
    infor.phone = database.select_seller_phone(seller_id);
    infor.image = database.select_seller_img(seller_id);

    if (infor.name.isEmpty() && infor.list.isEmpty()) {
        qDebug() << "Error: No seller information found for ID:" << seller_id;
    }
    return infor;
}

// 添加购物车
void customer::add_cart(const QVariantMap &order_infor) {
    // 校验输入
    if (!order_infor.contains("seller_id") || !order_infor.contains("customer_id") ||
        !order_infor.contains("dish_name") || !order_infor.contains("price") ||
        !order_infor.contains("quantity")) {
        qDebug() << "Error: Missing order information keys.";
        return;
    }

    QString seller_id = order_infor["seller_id"].toString();
    QString customer_id = order_infor["customer_id"].toString();
    QString dish_name = order_infor["dish_name"].toString();
    double price = order_infor["price"].toDouble();
    int quantity = order_infor["quantity"].toInt();
    QString note = order_infor.value("note", "").toString(); // 默认空备注

    if (seller_id.isEmpty() || customer_id.isEmpty() || dish_name.isEmpty() || price <= 0 || quantity <= 0) {
        qDebug() << "Error: Invalid order information.";
        return;
    }

    if (!database.add_cart(seller_id, customer_id, dish_name, price, quantity, note)) {
        qDebug() << "Error: Failed to add cart item.";
    } else {
        qDebug() << "Cart item added successfully.";
    }
}

// 结算购物车
void customer::settle_cart(const QString &account) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return;
    }

    if (!database.delete_cart(account)) {
        qDebug() << "Error: Failed to settle cart for account:" << account;
    } else {
        qDebug() << "Cart settled successfully for account:" << account;
    }
}

// 获取购物车信息
QList<QVariantMap> customer::get_cart_infor(const QString &account) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    QList<QVariantMap> list = database.select_cart_information(account);
    if (list.isEmpty()) {
        qDebug() << "No cart information found for account:" << account;
    }
    return list;
}

// 获取客户信息
QVariantMap customer::get_customer_infor(const QString &account) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    QVariantMap infor = database.select_customer_information(account);
    if (infor.isEmpty()) {
        qDebug() << "No customer information found for account:" << account;
    }
    return infor;
}
QString customer::get_customer_add(const QString &account)//修改
{
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    QString address = database.select_customer_address(account);
    if (address.isEmpty()) {
        qDebug() << "No customer information found for account:" << account;
    }
    return address;
}

// 更新客户信息
void customer::update_customer_infor(const QString &account, const QString &name, const QString &address,
                                     const QString &phone_number, const QByteArray &image) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return;
    }

    // database.beginTransaction(); // 开始事务

    bool success = true;
    success &= database.update_customer_address(account, address);
    success &= database.update_customer_img(account, image);
    success &= database.update_customer_phone(account, phone_number);

    if (success) {
        // database.commitTransaction(); // 提交事务
        qDebug() << "Customer information updated successfully.";
    } else {
        // database.rollbackTransaction(); // 回滚事务
        qDebug() << "Error: Failed to update customer information.";
    }
}
