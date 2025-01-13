#include "database/database.h"
#include "rider.h"
#include <QFile>
#include <QDebug>

// 查询骑手信息
QVariantMap rider::select_rider_information(const QString &account) {
    // 输入校验
    if (account.isEmpty()) {
        qDebug() << "Error: Account is empty.";
        return {};
    }

    // 查询数据库
    QVariantMap riderInfo = database.select_rider_information(account);
    if (riderInfo.isEmpty()) {
        qDebug() << "No rider information found for account:" << account;
    }
    return riderInfo;
}

// 更新骑手信息
void rider::update_rider_information(const QString &account, const QString &phone_number, const QString &level, const QString &filepath) {
    // 输入校验
    if (account.isEmpty() || phone_number.isEmpty() || level.isEmpty()) {
        qDebug() << "Error: Invalid input. Account, phone number, and level must not be empty.";
        return;
    }

    // 检查文件路径是否有效
    QFile imageFile(filepath);
    if (!imageFile.exists()) {
        qDebug() << "Error: File does not exist at path:" << filepath;
        return;
    }

    // 开始事务
    // database.beginTransaction();
    bool success = true;

    // 更新电话
    success &= database.update_rider_phone(account, phone_number);

    // 更新等级
    success &= database.update_rider_level(account, level.toDouble());

    // 更新图片
    success &= database.update_rider_image(account, filepath);

    if (success) {
        // database.commitTransaction(); // 提交事务
        qDebug() << "Rider information updated successfully for account:" << account;
    } else {
        // database.rollbackTransaction(); // 回滚事务
        qDebug() << "Error: Failed to update rider information. Transaction rolled back.";
    }
}
