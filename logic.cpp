#include "logic.h"

// 验证账号
bool validateAccount(const QString &account) {
    return account.length() >= 8 && account.length() <= 13;
}

// 验证密码和确认密码
bool validatePassword(const QString &password, const QString &confirmPassword) {
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
