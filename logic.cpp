#include "logic.h"
#include <QDebug>
#include "database/database.h"
// 验证账号
bool validateAccount(const QString &account)
{
    return account.length() >= 9 && account.length() <= 13;
}

// 验证密码和确认密码
bool validatePassword(const QString &password, const QString &confirmPassword)
{
    bool hasLetter = false;
    bool hasDigit = false;

    for (const QChar &ch : password) {
        if (ch.isLetter()) {
            hasLetter = true;
        }
        if (ch.isDigit()) {
            hasDigit = true;
        }
        if (hasLetter && hasDigit) {
            break;
        }
    }

    return hasLetter && hasDigit && password.length() > 7 && password == confirmPassword;
}
// 登录函数
int log_in(const QString &account, const QString &password) {
    // 输入校验
    if (account.isEmpty() || password.isEmpty()) {
        qDebug() << "Login failed: Account or password is empty.";
        return -2; // 返回特殊错误码表示参数无效
    }

    // 数据库查询
    Database db;
    int result = db.select_general_table(account, password);
    if (result == -1) {
        qDebug() << "Login failed: Account does not exist.";
    } else if (result == 0) {
        qDebug() << "Login failed: Incorrect password.";
    }
    return result;
}
