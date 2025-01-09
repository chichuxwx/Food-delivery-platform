#ifndef RIDER_H
#define RIDER_H
#include"database/database.h"

class rider{
public:
    QVariantMap select_rider_information(const QString &account);
    void update_rider_information(const QString &account,const QString &phone_number,const QString &level,const QString &filepath);
private:
    Database database;
};

#endif // RIDER_H
