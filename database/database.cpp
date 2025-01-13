#include "database.h"
// #include <QSqlRecord>
#include <QVariantMap>
#include <QList>
#include<QFile>
#include<QDebug>
// Database::Database(const QString &hostName, const QString &databaseName, const QString &userName, const QString &password)
//     : m_hostName(hostName), m_databaseName(databaseName), m_userName(userName), m_password(password), m_db(nullptr)
// {
//     // 初始化数据库连接
//     connectToDatabase();
// }
Database::Database()
{
    //初始化数据库连接
    qDebug() << "ok";
    connectToDatabase();
}
Database::~Database()
{
    // 关闭数据库连接
    if (m_db && m_db->isOpen()) {
        m_db->close();
    }
}

bool Database::connectToDatabase()
{
    m_db=nullptr;
    if (!m_db) {
        m_db = new QSqlDatabase(QSqlDatabase::addDatabase("QODBC"));
    }

    m_db->setHostName(m_hostName);
    m_db->setDatabaseName(m_databaseName);
    m_db->setUserName(m_userName);
    m_db->setPassword(m_password);
    m_db->setPort(3307);

    if (!m_db->open()) {
        qDebug() << "Error: Unable to connect to database.";
        qDebug() << m_db->lastError().text();
        return false;
    }

    qDebug() << "Connected to database.";
    return true;
}

bool Database::executeQuery(const QString queryStr)
{
    QSqlQuery query(*m_db);

    if (!query.exec(queryStr)) {
        qDebug() << "Error: Failed to execute query.";
        qDebug() << query.lastError().text();
        return false;
    }

    return true;
}

QVariant Database::executeScalarQuery(const QString queryStr)
{
    QSqlQuery query(*m_db);
    QVariant map;

    if (!query.exec(queryStr)) {
        qDebug() << "Error: Failed to execute scalar query.";
        qDebug() << query.lastError().text();
        return QVariant();
    }

    if (query.next()) {
        ;
        return query.value(0); // 假设查询只返回一个值
    }

    return QVariant();
}

// QSqlRecord Database::executeSingleRecordQuery(const QString &queryStr)
// {
//     QSqlQuery query(*m_db);

//     if (!query.exec(queryStr)) {
//         qDebug() << "Error: Failed to execute single record query.";
//         qDebug() << query.lastError().text();
//         return QSqlRecord();
//     }

//     if (query.next()) {
//         return query.record(); // 假设查询只返回一行
//     }

//     return QSqlRecord();
// }

// QSqlResultSet Database::executeResultSetQuery(const QString &queryStr)
// {
//     QSqlQuery query(*m_db);
//     QSqlResultSet resultSet;

//     if (!query.exec(queryStr)) {
//         qDebug() << "Error: Failed to execute result set query.";
//         qDebug() << query.lastError().text();
//         return resultSet; // 返回一个空的结果集
//     }

//     while (query.next()) {
//         QSqlRecord record = query.record();
//         resultSet.append(record); // 假设有一个方法来添加记录到结果集
//     }

//     return resultSet; // 返回一个包含所有行的结果集
// }

void Database::addRider(const QString account, const QString password)
{
    int id=get_id_user("rider");
    QSqlQuery query(*m_db);
    // 准备插入的SQL语句
    query.prepare("INSERT INTO rider (id,account, password) "
                  "VALUES (:id,:account, :password)");

    // 绑定传入的账号和密码参数
    query.bindValue(":account", account);
    query.bindValue(":password", password);
    query.bindValue(":id",id);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error inserting data into rider table:" << query.lastError();
        return;
    }

    // 如果插入成功
    qDebug() << "Rider added successfully!";
    return ;
}

bool Database::update_rider_phone(const QString account,const QString phone_number)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE rider SET phone =:phone WHERE account = :account ");

    query.bindValue(":account",account);
    query.bindValue(":phone",phone_number);

    if(!query.exec()){
        qDebug()<<"Error updating data of rider:phone"<<query.lastError();
        return false;
    }

    qDebug()<<"Rider:phone change successfully!";
    return true;
}
bool Database::update_rider_level(const QString account,const double newlevel)
{
    QSqlQuery query(*m_db);
    int level;
    int new_level=0;
    query.prepare("SELECT level FROM customer WHERE account = :account");
    query.bindValue(":account",account);
    query.exec();
    level=query.value("level").toInt();
    query.prepare("UPDATE customer SET level=:level WHERE account = :account ");
    query.bindValue(":account",account);
    new_level=0.4*newlevel+level;
    query.bindValue(":level",new_level);
    if(!query.exec()){
        qDebug()<<"Error updating data of rider:level"<<query.lastError();
        return false;
    }

    qDebug()<<"Rider:level change successfully!";
    return true;
}
bool Database::update_rider_image(const QString account,const QString imagepath)
{

    QFile imagefile(imagepath);

    if (!imagefile.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open image file!";
        return false;
    }
    QByteArray imagedata = imagefile.readAll();
    imagefile.close();
    QSqlQuery query(*m_db);

    query.prepare("UPDATE rider SET image=:image WHERE account = :account ");

    query.bindValue(":account",account);
    query.bindValue(":image",imagedata);

    if(!query.exec()){
        qDebug()<<"Error updating data of rider:image"<<query.lastError();
        return false;
    }

    qDebug()<<"Rider:image change successfully!";
    return true;
}
QVariantMap Database::select_rider_information(const QString account) {
    QVariantMap riderInfo;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT phone, level, image FROM rider WHERE account = :account");
    query.bindValue(":account", account);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying rider information:" << query.lastError();
        return riderInfo;
    }

    // 检查是否有结果
    if (query.next()) {
        // 填充 QVariantMap
        riderInfo["phone"] = query.value("phone").toString();
        riderInfo["level"] = query.value("level").toDouble();
        riderInfo["image"] = query.value("image").toByteArray(); // 图片二进制数据
    } else {
        qDebug() << "No rider found with account:" << account;
    }
    return riderInfo;
}
void Database::addAdmin(const QString account, const QString password)
{
    int id=get_id_user("admin");
    QSqlQuery query(*m_db);
    // 准备插入的SQL语句
    query.prepare("INSERT INTO admin (id,account, password) "
                  "VALUES (:id,:account, :password)");

    // 绑定传入的账号和密码参数
    query.bindValue(":account", account);
    query.bindValue(":password", password);
    query.bindValue(":id",id);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error inserting data into admin table:" << query.lastError();
        return;
    }

    // 如果插入成功
    qDebug() << "Adminr added successfully!";
    return ;
}
void Database::addOrders(const QString seller_id,const QString customer_id,const QString dish_name,
                         const double dish_consumption_amount,const int status,
                         const QString remark,const int dish_amount,int order_id)
{
    // int order_id=get_id_order();
    QSqlQuery query(*m_db);
    query.prepare("INSERT INTO orders (seller_id,customer_id,dish_name,consumption_amount,status,"
                  "remark,dish_amount,order_id)"
                  "VALUES (:seller_id,:customer_id,:dish_name,:consumption_amount,:status,:remark,:amount,:order_id)");
    query.bindValue(":seller_id",seller_id);
    query.bindValue(":customer_id",customer_id);
    query.bindValue(":dish_name",dish_name);
    query.bindValue(":consumption_amount",dish_consumption_amount);
    query.bindValue(":remark",remark);
    query.bindValue(":amount",dish_amount);
    query.bindValue(":order_id",order_id);
    query.bindValue(":status", status);
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error inserting data into orders table:" << query.lastError();
        return;
    }
    // 如果插入成功
    qDebug() << "Order added successfully!";
    return ;
}

QList<QVariantMap>Database::select_orders_information_seller(const QString seller_id,const int  statu) {
    QList<QVariantMap> orders_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT customer_id,dish_name,consumption_amount,remark,dish_amount,rider_id,order_id "
                  "FROM orders WHERE seller_id = :seller_id AND status=:status");
    query.bindValue(":seller_id", seller_id);
    query.bindValue(":status",statu);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying order information:" << query.lastError();
        return orders_infor;
    }

    // 检查是否有结果
    while(query.next()) {
        // 填充 QVariantMap
        QVariantMap order_infor;
        order_infor["customer_id"] = query.value("customer_id").toString();
        order_infor["dish_name"] = query.value("dish_name").toString();
        order_infor["consumption_amount"] = query.value("consumption_amount").toDouble();
        order_infor["remark"] = query.value("remark").toString();
        order_infor["dish_amount"] = query.value("dish_amount").toInt();
        order_infor["rider_id"] = query.value("rider_id").toString();
        order_infor["order_id"] = query.value("order_id").toInt();
        orders_infor.append(order_infor);

    }

    return orders_infor;
}
QList<QVariantMap>Database::select_orders_information_customer(const QString customer_id,const int  statu) {
    QList<QVariantMap> orders_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT seller_id,dish_name,consumption_amount,remark,dish_amount,rider_id "
                  "FROM orders WHERE customer_id = :customer_id AND status=:status");
    query.bindValue(":customer_id", customer_id);
    query.bindValue(":status",statu);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying order information:" << query.lastError();
        return orders_infor;
    }

    // 检查是否有结果
    while(query.next()) {
        // 填充 QVariantMap
        QVariantMap order_infor;
        order_infor["seller_id"] = query.value("seller_id").toString();
        order_infor["dish_name"] = query.value("dish_name").toString();
        order_infor["consumption_amount"] = query.value("consumption_amount").toDouble();
        order_infor["remark"] = query.value("remark").toString();
        order_infor["dish_amount"] = query.value("dish_amount").toInt();
        order_infor["rider_id"] = query.value("rider_id").toString();
        order_infor["status"]=statu;
        orders_infor.append(order_infor);

    }

    return orders_infor;
}
QList<QVariantMap>Database::select_orders_information_rider(const QString rider_id,const int  statu) {
    QList<QVariantMap> orders_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT customer_id,dish_name,consumption_amount,remark,dish_amount,seller_id,order_id "
                  "FROM orders WHERE rider_id = :rider_id AND status=:status");
    query.bindValue(":rider_id", rider_id);
    query.bindValue(":status",statu);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying order information:" << query.lastError();
        return orders_infor;
    }

    // 检查是否有结果
    while(query.next()) {
        // 填充 QVariantMap
        QVariantMap order_infor;
        order_infor["customer_id"] = query.value("customer_id").toString();
        order_infor["dish_name"] = query.value("dish_name").toString();
        order_infor["consumption_amount"] = query.value("consumption_amount").toDouble();
        order_infor["remark"] = query.value("remark").toString();
        order_infor["dish_amount"] = query.value("dish_amount").toInt();
        order_infor["seller_id"] = query.value("seller_id").toString();
        order_infor["order_id"] = query.value("order_id").toInt();
        orders_infor.append(order_infor);

    }

    return orders_infor;
}
void Database::update_order_statu(const int order_id,const int statu,QString account)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE orders SET status = :status, rider_id = :account WHERE order_id = :order_id");
    query.bindValue(":order_id", order_id);
    query.bindValue(":status", statu);
    query.bindValue(":account", account);
    if(!query.exec()){
        qDebug()<<"Error updating data of rider:image"<<query.lastError();
        return ;
    }

    qDebug()<<"Rider:image change successfully!";
    return ;
}
void Database::update_order_statu(const int order_id,const int statu)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE orders SET `status`=:status WHERE `order_id`=:order_id");
    query.bindValue(":order_id",order_id);
    query.bindValue(":status",statu);
    if(!query.exec()){
        qDebug()<<"Error updating data of rider:image"<<query.lastError();
        return ;
    }

    qDebug()<<"Rider:image change successfully!";
    return ;
}

QList<QVariantMap>Database::select_orders_information_rider(int statu) {
    QList<QVariantMap> orders_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT customer_id,dish_name,consumption_amount,remark,dish_amount,order_id "
                  "FROM orders WHERE `status`=:statu");
    query.bindValue(":statu", statu);
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying order information:" << query.lastError();
        return orders_infor;
    }
    // 检查是否有结果
    while(query.next()) {
        // 填充 QVariantMap
        QVariantMap order_infor;
        order_infor["customer_id"] = query.value("customer_id").toString();
        order_infor["dish_name"] = query.value("dish_name").toString();
        order_infor["consumption_amount"] = query.value("consumption_amount").toDouble();
        order_infor["remark"] = query.value("remark").toString();
        order_infor["dish_amount"] = query.value("dish_amount").toInt();
        order_infor["order_id"] = query.value("order_id").toInt();
        orders_infor.append(order_infor);
    }
    return orders_infor;
}

QList<QVariantMap>Database::select_orders_information_all(void) {
    QList<QVariantMap> orders_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT customer_id,dish_name,consumption_amount,remark,dish_amount,rider_id,seller_id "
                  "FROM orders ");
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying order information:" << query.lastError();
        return orders_infor;
    }
    // 检查是否有结果
    while(query.next()) {
        // 填充 QVariantMap
        QVariantMap order_infor;
        order_infor["customer_id"] = query.value("customer_id").toString();
        order_infor["dish_name"] = query.value("dish_name").toString();
        order_infor["consumption_amount"] = query.value("consumption_amount").toDouble();
        order_infor["remark"] = query.value("remark").toString();
        order_infor["dish_amount"] = query.value("dish_amount").toInt();
        order_infor["rider_id"] = query.value("rider_id").toString();
        order_infor["seller_id"] = query.value("seller_id").toString();
        orders_infor.append(order_infor);
    }
    return orders_infor;
}
bool Database::addDish(const QString name,const QString imagepath,const QString description,
             const QString seller_id,const double price,const int sales_number,const int status)
{
    QFile imagefile(imagepath);
    if (!imagefile.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open image file!";
        return false;
    }
    QByteArray image = imagefile.readAll();
    imagefile.close();
    QSqlQuery query(*m_db);
    query.prepare("INSERT INTO dish (seller_id,name,image,description,status,sales_number,price)"
                  "VALUES (:seller_id,:name,:image,:description,:status,:sales_number,:price)");
    query.bindValue(":seller_id",seller_id);
    query.bindValue(":name",name);
    query.bindValue(":image",image);
    query.bindValue(":description",description);
    query.bindValue(":status",status);
    query.bindValue(":sales_number",sales_number);
    query.bindValue(":price",price);
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error inserting data into dish table:" << query.lastError();
        return false;
    }
    // 如果插入成功
    qDebug() << "dish added successfully!";
    return true ;
}
QList<QVariantMap>Database::select_dish_information(const QString seller_id)
{
    QList<QVariantMap> dishes_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT name,image,description,status,sales_number,price "
                  "FROM dish WHERE seller_id = :seller_id ");
    query.bindValue(":seller_id", seller_id);


    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying dish information:" << query.lastError();
        return dishes_infor;
    }

    // 检查是否有结果
    while(query.next()) {
        // 填充 QVariantMap
        QVariantMap dish_infor;
        dish_infor["name"] = query.value("name").toString();
        dish_infor["image"] = query.value("image").toByteArray();
        dish_infor["description"] = query.value("description").toString();
        dish_infor["status"] = query.value("status").toInt();
        dish_infor["sales_number"] = query.value("sales_number").toInt();
        dish_infor["price"] = query.value("price").toDouble();
        dish_infor["seller_id"]=seller_id;
        dishes_infor.append(dish_infor);

    }

    return dishes_infor;
}

bool Database::update_dish(const QString seller_id, const QString name, const double price,
                           const int sales_number, const QString old_name)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE dish SET price = :price, sales_number = :sales_number, name = :name "
                  "WHERE seller_id = :seller_id AND name = :old_name");

    query.bindValue(":price", price);
    query.bindValue(":sales_number", sales_number);
    query.bindValue(":name", name);
    query.bindValue(":seller_id", seller_id);
    query.bindValue(":old_name", old_name);

    if (!query.exec()) {
        qDebug() << "Error updating dish data: " << query.lastError();
        return false;
    }
    return true;
}

bool Database::update_dish(const QString  seller_id,const QString name,const double price,const int sales_number)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE dish SET price=:price,sales_number=:sales_number,name=:name WHERE seller_id=:seller_id");
    query.bindValue(":price",price);
    query.bindValue(":sales_number",sales_number);
    query.bindValue(":seller_id",seller_id);
    query.bindValue(":name",name);
    if(!query.exec()){
        qDebug()<<"Error updating data of rider:image"<<query.lastError();
        return false;
    }

    qDebug()<<"Rider:image change successfully!";
    return true;
}
bool Database::add_cart(const QString seller_id,const QString customer_id,
                        const QString dish_name,const double price,const int quantity,const QString note)
{
    QSqlQuery query(*m_db);
    // 准备插入的SQL语句
    query.prepare("INSERT INTO cart (seller_id,customer_id,dish_name,price,quantity,note) "
                  "VALUES (:seller_id,:customer_id,:dish_name,:price,:quantity,:note)");

    // 绑定传入的账号和密码参数
    query.bindValue(":seller_id", seller_id);
    query.bindValue(":customer_id", customer_id);
    query.bindValue(":dish_name", dish_name);
    query.bindValue(":price", price);
    query.bindValue(":quantity", quantity);
    query.bindValue(":note", note);

    // 执行
    if (!query.exec()) {
        qDebug() << "Error inserting data into cart table:" << query.lastError();
        return false;
    }
    // 如果插入成功
    qDebug() << "cart added successfully!";
    return true;
}

QList<QVariantMap> Database::select_cart_information(const QString customer_id) {
    QList<QVariantMap> cart_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT seller_id, customer_id, dish_name, price, quantity, note  FROM cart WHERE customer_id = :customer_id");
    query.bindValue(":customer_id", customer_id);
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying cart information:" << query.lastError();
        return cart_infor;
    }
    // 检查是否有结果
    while(query.next()) {
        QVariantMap cartInfo={};
        // 填充 QVariantMap
        cartInfo["seller_id"] = query.value("seller_id").toString();
        cartInfo["customer_id"] = query.value("customer_id").toString();
        cartInfo["dish_name"] = query.value("dish_name").toString();
        cartInfo["price"] = query.value("price").toDouble();
        cartInfo["quantity"] = query.value("quantity").toInt();
        cartInfo["note"] = query.value("note").toString();
        cart_infor.append(cartInfo);
    }
    return cart_infor;
}
bool Database::delete_cart(const QString customer_id) {
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("DELETE FROM cart WHERE customer_id = :customer_id");
    query.bindValue(":customer_id", customer_id);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying cart information:" << query.lastError();
        return false ;
    }
    return true;
}

int Database::select_general_table(const QString account,const QString password)
{
    QSqlQuery query(*m_db);
    query.prepare("SELECT * FROM general_table WHERE account=:account AND password=:password ");
    query.bindValue(":account", account);
    query.bindValue(":password", password);
    if (!query.exec()) {
        qDebug() << "Error inserting data into general_table:" << query.lastError();
        return 0;
    }
    else if(query.next())//账号密码正确
    {
        return query.value("identifier").toInt();//返回标识符
    }
    else
    {
        QSqlQuery query2(*m_db);
        query2.prepare("SELECT * FROM general_table WHERE account=':account' ");
        query2.bindValue(":account", account);
        if (!query2.exec())
        {
            qDebug() << "Error inserting data into general_table:" << query2.lastError();
            return 0;
        }
        else if(query2.next())//密码错误返回0
        {
            return 0;
        }
        else return -1;//账号不存在返回-1
    }
}
bool Database::add_general_table(const QString account,const QString password,const int identifier)
{
    if(Database::select_general_table(account,password)>0)return 0;
    else
    {
        QSqlQuery query(*m_db);
        // 准备插入的SQL语句
        query.prepare("INSERT INTO general_table (account, password,identifier) "
                      "VALUES (:account, :password, :identifier)");

        // 绑定传入的账号和密码参数
        query.bindValue(":account", account);
        query.bindValue(":password", password);
        query.bindValue(":identifier", identifier);

        // 执行
        if(!query.exec()) {
            qDebug() << "Error inserting data into rider table:" << query.lastError();
            return 0;
        }
        // 如果插入成功
        qDebug() << "general_table added successfully!";
        return 1;
    }
}
int Database::select_general_table2(const QString account)//账号存在返回标识符，账号不存在返回-1
{
    QSqlQuery query2(*m_db);
    query2.prepare("SELECT * FROM general_table WHERE account=:account ");
    query2.bindValue(":account", account);
    if (!query2.exec())
    {
        qDebug() << "Error inserting data into general_table:" << query2.lastError();
        return 0;
    }
    else if(query2.next())//账号存在
    {
        return query2.value("identifier").toInt();//返回标识符
    }
    else return -1;//账号不存在返回-1
}
void Database::add_customer(const QString account,const QString password)
{
    QSqlQuery query(*m_db);
    int id=get_id_user("customer");
    // 准备插入的SQL语句
    query.prepare("INSERT INTO customer (id,account, password) "
                  "VALUES (:id,:account, :password)");

    // 绑定传入的账号和密码参数
    query.bindValue(":account", account);
    query.bindValue(":password", password);
    query.bindValue(":id",id);
    // 执行
    if (!query.exec()) {
        qDebug() << "Error inserting data into customer table:" << query.lastError();
        return;
    }
    // 如果插入成功
    qDebug() << "customer added successfully!";
    return;
}
QVariantMap Database::select_customer_information(const QString account) {
    QVariantMap customerInfo;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT id, account, password, username, address, phone, level, image ,total_spent FROM customer WHERE account = :account");
    query.bindValue(":account", account);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying customer information:" << query.lastError();
        return customerInfo;
    }
    // 检查是否有结果
    if (query.next()) {
        // 填充 QVariantMap
        customerInfo["id"] = query.value("id").toLongLong();
        customerInfo["account"] = query.value("account").toString();
        customerInfo["password"] = query.value("password").toString();
        customerInfo["username"] = query.value("username").toString();
        customerInfo["address"] = query.value("address").toString();
        customerInfo["phone"] = query.value("phone").toString();
        customerInfo["level"] = query.value("level").toInt();
        customerInfo["image"] = query.value("image").toByteArray(); // 图片二进制数据
        customerInfo["total_spent"] = query.value("total_spent").toLongLong();
    } else {
        qDebug() << "No customer found with account:" << account;
    }
    return customerInfo;
}
bool  Database::update_customer_img(const QString account,const QString imagepath)
{

    QFile imagefile(imagepath);

    if (!imagefile.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open image file!";
        return false;
    }
    QByteArray imagedata = imagefile.readAll();
    imagefile.close();
    QSqlQuery query(*m_db);

    query.prepare("UPDATE customer SET image=:image WHERE account = :account ");

    query.bindValue(":account",account);
    query.bindValue(":image",imagedata);

    if(!query.exec()){
        qDebug()<<"Error updating data of customer:image"<<query.lastError();
        return false;
    }

    qDebug()<<"customer:image change successfully!";
    return true;
}
bool Database::update_customer_address(const QString account,const QString address)
{

    QSqlQuery query(*m_db);
    query.prepare("UPDATE customer SET address=:address WHERE account = :account ");
    query.bindValue(":account",account);
    query.bindValue(":address",address);

    if(!query.exec()){
        qDebug()<<"Error updating data of customer:address"<<query.lastError();
        return false;
    }

    qDebug()<<"customer:address change successfully!";
    return true;
}
QString Database::select_customer_address(const QString account) {
    QString s;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT address FROM customer WHERE account = :account");
    query.bindValue(":account", account);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying customer information:" << query.lastError();
        return s;
    }
    // 检查是否有结果
    if (query.next()) {
        s=query.value("address").toString();
        return s;
    } else {
        qDebug() << "No customer found with account:" << account;
    }
    return s;
}
bool  Database::update_customer_phone(const QString account,const QString phone)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE customer SET phone=:phone WHERE account = :account ");
    query.bindValue(":account",account);
    query.bindValue(":phone",phone);

    if(!query.exec()){
        qDebug()<<"Error updating data of customer:phone"<<query.lastError();
        return false;
    }

    qDebug()<<"customer:phone change successfully!";
    return true;
}

void Database::add_seller(const QString account,const QString password)
{
    QSqlQuery query(*m_db);
    // 准备插入的SQL语句
    query.prepare("INSERT INTO seller (account, password) "
                  "VALUES (:account, :password)");

    // 绑定传入的账号和密码参数
    query.bindValue(":account", account);
    query.bindValue(":password", password);

    // 执行
    if (!query.exec()) {
        qDebug() << "Error inserting data into seller table:" << query.lastError();
        return;
    }
    // 如果插入成功
    qDebug() << "seller added successfully!";
    return;
}
QList<QVariantMap> Database::select_seller_information(void) {
    QList<QVariantMap> seller_infor;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT id, account, password, shop_name, address, phone, level, image  FROM seller ");

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying seller information:" << query.lastError();
        return seller_infor;
    }
    // 检查是否有结果
    int q=10;
    while(query.next()&&q--) {
        QVariantMap sellerInfo;
        // 填充 QVariantMap
        sellerInfo["id"] = query.value("id").toLongLong();
        sellerInfo["account"] = query.value("account").toString();
        sellerInfo["password"] = query.value("password").toString();
        sellerInfo["shop_name"] = query.value("shop_name").toString();
        sellerInfo["address"] = query.value("address").toString();
        sellerInfo["phone"] = query.value("phone").toString();
        sellerInfo["level"] = query.value("level").toDouble();
        sellerInfo["image"] = query.value("image").toByteArray(); // 图片二进制数据
        seller_infor.append(sellerInfo);
    }
    return seller_infor;
}
QString Database::select_seller_shop_name(const QString account) {
    QString s;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT shop_name FROM seller WHERE account = :account");
    query.bindValue(":account", account);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying seller information:" << query.lastError();
        return s;
    }
    // 检查是否有结果
    if (query.next()) {
        s=query.value("shop_name").toString();
        return s;
    } else {
        qDebug() << "No seller found with account:" << account;
    }
    return s;
}
QString Database::select_seller_phone(const QString account) {
    QString s;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT phone FROM seller WHERE account = :account");
    query.bindValue(":account", account);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying seller information:" << query.lastError();
        return s;
    }
    // 检查是否有结果
    if (query.next()) {
        s=query.value("phone").toString();
        return s;
    } else {
        qDebug() << "No seller found with account:" << account;
    }
    return s;
}
QByteArray Database::select_seller_img(const QString account)
{
    QByteArray imagedata;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT image FROM seller WHERE account = :account");
    query.bindValue(":account", account);

    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying seller information:" << query.lastError();
        return imagedata;
    }
    // 检查是否有结果
    if (query.next()) {
        imagedata=query.value("image").toByteArray();;
        return imagedata;
    } else {
        qDebug() << "No seller found with account:" << account;
    }
    return imagedata;

}
QString Database::get_account_byshop(const QString shop_name)
{
    QString account;
    // 创建SQL查询
    QSqlQuery query(*m_db);

    // 准备查询语句
    query.prepare("SELECT account FROM seller WHERE shop_name = :shop_name");
    query.bindValue(":shop_name",shop_name);
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Error querying seller information:" << query.lastError();
        return account;
    }
    // 检查是否有结果
    if (query.next()) {
        account=query.value("account").toString();
        return account;
    } else {
        qDebug() << "No seller found with shop_name:" << shop_name;
    }
    return account;
}
bool Database::update_seller_shop_name(const QString account,const QString shop_name)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE seller SET shop_name=:shop_name WHERE account = :account ");
    query.bindValue(":account",account);
    query.bindValue(":shop_name",shop_name);

    if(!query.exec()){
        qDebug()<<"Error updating data of seller:shop_name"<<query.lastError();
        return false;
    }

    qDebug()<<"seller:shop_name change successfully!";
    return true;
}
bool Database::update_seller_phone(const QString account,const QString phone)
{
    QSqlQuery query(*m_db);
    query.prepare("UPDATE seller SET phone=:phone WHERE account = :account ");
    query.bindValue(":account",account);
    query.bindValue(":phone",phone);

    if(!query.exec()){
        qDebug()<<"Error updating data of seller:phone"<<query.lastError();
        return false;
    }

    qDebug()<<"seller:phone change successfully!";
    return true;
}
bool Database::update_seller_img(const QString account,const QString imagepath)
{

    QFile imagefile(imagepath);

    if (!imagefile.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open image file!";
        return false;
    }
    QByteArray imagedata = imagefile.readAll();
    imagefile.close();
    QSqlQuery query(*m_db);

    query.prepare("UPDATE seller SET image=:image WHERE account = :account ");

    query.bindValue(":account",account);
    query.bindValue(":image",imagedata);

    if(!query.exec()){
        qDebug()<<"Error updating data of seller:image"<<query.lastError();
        return false;
    }

    qDebug()<<"seller:image change successfully!";
    return true;
}
int Database::get_id_user(QString tablename)
{

    // 查询最后一条数据的id
    QSqlQuery query(*m_db);
    QString acc=QString("SELECT id FROM %1 ORDER BY id DESC LIMIT 1").arg(tablename);
    query.prepare(acc);

    if (!query.exec())
    {
        qCritical() << "Failed to execute query:" << query.lastError().text();
        return 0; // 查询执行失败，返回0
    }

    // 如果查询结果为空，返回0
    if (!query.next()) {
        return 0;
    }

    // 获取最后一条数据的id
    int lastId = query.value(0).toInt();
    return lastId;
}
int Database::get_id_order()
{
    // 查询最后一条数据的id
    QSqlQuery query(*m_db);
    QString acc=QString("SELECT order_id FROM orders ORDER BY order_id DESC LIMIT 1");
    query.prepare(acc);

    if (!query.exec())
    {
        qCritical() << "Failed to execute query:" << query.lastError().text();
        return 0; // 查询执行失败，返回0
    }

    // 如果查询结果为空，返回0
    if (!query.next()) {
        return 0;
    }

    // 获取最后一条数据的id
    int lastId = query.value(0).toInt();
    return lastId;
}
