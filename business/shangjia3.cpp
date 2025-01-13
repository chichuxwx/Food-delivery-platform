#include "shangjia3.h"
#include "ui_shangjia3.h"
#include "../head.h"
#include "../rider/orderwidget.h"
shangjia3::shangjia3(QString account,QWidget *parent)//修改 这里list是符合条件的所有订单
    :account(account), QWidget(parent)
    , ui(new Ui::shangjia3)
{
    ui->setupUi(this);
    // QList<QVariantMap> list=al.select_orders_somebody(account,3);
    // if (!list.isEmpty()) {
    //     QVariantMap firstMap = list.at(0);
    //     ui->textBrowser_2->setText(firstMap["dish_name"].toString());
    //     ui->textBrowser_3->setText(firstMap["remark"].toString());//订单表中没有地址 只有备注
    // }
    displayorders();
    this->setFixedSize(600, 800);
}
void shangjia3::displayorders()
{
    Database db;
    //QList<QVariantMap> sellers = db.select_seller_information();
    QList<QVariantMap> list=al.select_orders_somebody(account,4);
    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &seller : list) {
        OrderWidget *orderWidget = new OrderWidget(seller, container);
        layout->addWidget(orderWidget);
    }

    layout->addStretch(); // 填充剩余空间

    // 先设置可调整大小，然后设置内容部件
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}
shangjia3::~shangjia3()
{
    delete ui;
}

void shangjia3::on_pushButton_clicked()
{
    shangjia *j=new shangjia(account);
    j->show();
    this->close();
}


void shangjia3::on_pushButton_2_clicked()
{
    shangjia2 *j=new shangjia2(account);
    j->show();
    this->close();
}


void shangjia3::on_pushButton_3_clicked()
{
    //什么都不做
}


void shangjia3::on_pushButton_4_clicked()
{
    //什么都不做
}


void shangjia3::on_pushButton_6_clicked()
{
    page_workbench *workbench=new page_workbench(account);
    workbench->show();
    this->close();
}


void shangjia3::on_pushButton_5_clicked()
{
    inform *Inform=new inform(account);
    Inform->show();
    this->close();

}


void shangjia3::on_pushButton_10_clicked()
{
    page_workbench *workbench=new page_workbench(account);
    workbench->show();
    this->close();
}

