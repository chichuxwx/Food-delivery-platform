#include "Seller.h"
#include "database/database.h"
#include <QFile>
#include <QDebug>

// 修改菜品信息
void seller::change_dish_info(const QString &seller_id, const QString &name, const double &price, const int &sales_number) {
    // 输入校验
    if (seller_id.isEmpty() || name.isEmpty() || price < 0 || sales_number < 0) {
        qDebug() << "Error: Invalid input for changing dish info.";
        return;
    }

    // 更新菜品信息
    if (!database.update_dish(seller_id, name, price, sales_number)) {
        qDebug() << "Error: Failed to update dish info for seller ID:" << seller_id << ", dish name:" << name;
    } else {
        qDebug() << "Dish info updated successfully for seller ID:" << seller_id << ", dish name:" << name;
    }
}

// 返回所有订单
QList<QVariantMap> seller::all_seller_orders(const QString &seller_id, const int &statu) {
    // 输入校验
    if (seller_id.isEmpty() || statu < 0) {
        qDebug() << "Error: Invalid input for fetching seller orders.";
        return {};
    }

    QList<QVariantMap> orders = database.select_orders_information_seller(seller_id, statu);
    if (orders.isEmpty()) {
        qDebug() << "No orders found for seller ID:" << seller_id << " with status:" << statu;
    }
    return orders;
}

// 查询商家店铺名称
QString seller::search_seller_shop(const QString &account) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    QString shopName = database.select_seller_shop_name(account);
    if (shopName.isEmpty()) {
        qDebug() << "No shop name found for account:" << account;
    }
    return shopName;
}

// 查询商家联系电话
QString seller::search_seller_phone(const QString &account) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    QString phone = database.select_seller_phone(account);
    if (phone.isEmpty()) {
        qDebug() << "No phone found for account:" << account;
    }
    return phone;
}

// 查询商家头像
QByteArray seller::search_seller_img(const QString &account) {
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    QByteArray image = database.select_seller_img(account);
    if (image.isEmpty()) {
        qDebug() << "No image found for account:" << account;
    }
    return image;
}

// 查询商家菜品
QList<QVariantMap> seller::search_selller_dish_information(const QString &seller_id) {
    if (seller_id.isEmpty()) {
        qDebug() << "Error: Seller ID is empty.";
        return {};
    }

    QList<QVariantMap> dishes = database.select_dish_information(seller_id);
    if (dishes.isEmpty()) {
        qDebug() << "No dishes found for seller ID:" << seller_id;
    }
    return dishes;
}

// 新增菜品
void seller::add_new_dish(const QString name, const QString imagepath, const QString description,
                          const QString seller_id, const double price, const int sales_number, const int status) {
    // 输入校验
    if (name.isEmpty() || seller_id.isEmpty() || description.isEmpty() || price < 0 || sales_number < 0) {
        qDebug() << "Error: Invalid input for adding new dish.";
        return;
    }

    QFile imageFile(imagepath);
    if (!imageFile.exists()) {
        qDebug() << "Error: Image file does not exist at path:" << imagepath;
    }

    // 开始事务
    // database.beginTransaction();
    bool success = true;

    success &= database.addDish(name, imagepath, description, seller_id, price, sales_number, status);

    if (success) {
        // database.commitTransaction(); // 提交事务
        qDebug() << "New dish added successfully for seller ID:" << seller_id;
    } else {
        // database.rollbackTransaction(); // 回滚事务
        qDebug() << "Error: Failed to add new dish. Transaction rolled back.";
    }
}
