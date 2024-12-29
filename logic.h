#ifndef LOGIC_H
#define LOGIC_H

#include <QString>

// 声明检查函数
bool validateAccount(const QString &account);
bool validatePassword(const QString &password, const QString &confirmPassword);

#endif // LOGIC_H
