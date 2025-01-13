#include "detailedmenu.h"
#include "ui_detailedmenu.h"
#include "../head.h"
#include <QVariantMap>

DetailedMenu::DetailedMenu(QString account, QString shop_name, const QVariantMap &dishInfo, QWidget *parent)
    : account(account), shop_name(shop_name), Info(dishInfo), QWidget(parent),
    ui(new Ui::DetailedMenu)
{
    total = 0;
    price = Info["price"].toInt();
    dish_name = Info["name"].toString();
    ui->setupUi(this);
    ui->pushButton->setEnabled(false);
}

DetailedMenu::~DetailedMenu()
{
    delete ui;
}

// 添加订单
void DetailedMenu::on_pushButton_2_clicked()
{
    // 确保计算正确的总价
    total = price * num;  // 使用 num 作为数量来计算总价
    int order_id=database.get_id_order()+1;
    database.addOrders(shop_name, account, dish_name, total, 1, "", num,order_id);
    this->close();
}

// 更新按钮状态
void DetailedMenu::changebuttonstatues()
{
    bool checkBoxReady = (ui->checkBox->isChecked() || ui->checkBox_2->isChecked()) ||
                         (ui->checkBox_3->isChecked() || ui->checkBox_4->isChecked() || ui->checkBox_5->isChecked());
    ui->pushButton->setEnabled(checkBoxReady);  // 如果至少有一个选中，启用按钮
}

// 口味选项1：微辣、免辣、特辣
void DetailedMenu::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_2->setChecked(false);
    }
    changebuttonstatues();  // 更新按钮状态
}

void DetailedMenu::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox->setChecked(false);
    }
    changebuttonstatues();  // 更新按钮状态
}

void DetailedMenu::on_checkBox_4_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_5->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
    changebuttonstatues();  // 更新按钮状态
}

void DetailedMenu::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_5->setChecked(false);
        ui->checkBox_4->setChecked(false);
    }
    changebuttonstatues();  // 更新按钮状态
}

void DetailedMenu::on_checkBox_5_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->checkBox_4->setChecked(false);
        ui->checkBox_3->setChecked(false);
    }
    changebuttonstatues();  // 更新按钮状态
}

// 修改订单
void DetailedMenu::on_pushButton_clicked()
{
    QVariantMap order_infor;
    QString account_2 = database.get_account_byshop(shop_name);
    order_infor["seller_id"] = account_2;
    order_infor["customer_id"] = account;
    order_infor["dish_name"] = dish_name;

    // 获取卖家的菜品信息
    // QList<QVariantMap> list = sl.search_selller_dish_information(account_2);
    // QVariantMap map;
    // for (auto dish : list)
    // {
    //     if (dish["dish_name"] == dish_name)
    //     {
    //         map = dish;
    //     }
    // }
    // 计算价格
    order_infor["price"] = Info["price"];

    // 根据复选框更新数量
    int quantity = ui->checkBox->isChecked() ? 1 : 2;  // 根据勾选的复选框更新数量
    order_infor["quantity"] = quantity;

    // 更新总价
    double totalPrice = quantity *Info["price"].toDouble();
    QString total = QString("总计价格: ¥%1").arg(totalPrice);
    ui->label_8->setText(total);  // 更新 UI 显示

    // 选择口味
    if (ui->checkBox_4->isChecked())
        order_infor["note"] = "微辣";
    else if (ui->checkBox_3->isChecked())
        order_infor["note"] = "免辣";
    else
        order_infor["note"] = "特辣";

    // 将订单加入购物车
    Cus.add_cart(order_infor);

    // 切换到商店页面
    Storepage *store = new Storepage(account, shop_name);
    QJsonObject storeCommand;
    storeCommand["command"] = "store";
    QJsonDocument loginDoc(storeCommand);
    QByteArray Data = loginDoc.toJson(QJsonDocument::Compact) + "\n";
    ServerConnectionManager::instance().sendData(Data);
    this->close();
}

// 更新数量
void DetailedMenu::on_spinBox_textChanged(const QString &arg1)
{
    bool ok;
    int newNum = arg1.toInt(&ok);  // 将字符串转为整数
    if (ok)  // 如果转换成功
    {
        num = newNum;  // 更新数量
        changetotal();  // 更新总价
    }
}

// 计算总价
void DetailedMenu::changetotal()
{
    total = price * num;  // 使用 price 和 num 来计算总价
    QString totalPrice = QString("总计价格: ¥%1").arg(total);
    ui->label_8->setText(totalPrice);  // 更新 UI 显示
    ui->label_8->resize(400, 50);

}
