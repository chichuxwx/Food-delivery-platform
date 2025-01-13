#include "shangjia.h"
#include "ui_shangjia.h"
#include"../head.h"
#include "../rider/orderwidget.h"
shangjia::shangjia(QString account,QWidget *parent)//修改 这里list是符合条件的所有订单
    :account(account), QWidget(parent)
    , ui(new Ui::shangjia)
{
    ui->setupUi(this);
    // QList<QVariantMap> list=al.select_orders_somebody(account,0);
    // if (!list.isEmpty()) {
    //     QVariantMap firstMap = list.at(0);

    //     ui->textBrowser_2->setText(firstMap["dish_name"].toString());
    //     ui->textBrowser_3->setText(firstMap["remark"].toString());//订单表中没有地址 只有备注
    //     myorderID=firstMap["order_id"].toString();
    // }
    displayorders();
    this->setFixedSize(600, 800);

}
void shangjia::displayorders()
{
    Database db;
    QList<QVariantMap> list = al.select_orders_somebody(account, 1);
    QWidget *container = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(container);
    layout->setAlignment(Qt::AlignTop);

    for (const QVariantMap &order : list) {
        OrderWidget *orderWidget = new OrderWidget(order,container);
        layout->addWidget(orderWidget);

        // 连接 OrderWidget 的 clicked 信号到 shangjia 的 Clicked 槽函数
        connect(orderWidget, &OrderWidget::clicked, this, &shangjia::Clicked);
    }

    layout->addStretch(); // 填充剩余空间

    // 设置滚动区域
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(container);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}

void shangjia::Clicked(const QVariantMap &orderInfo)
{
    Database db;
    int id=orderInfo["order_id"].toInt();
    db.update_order_statu(orderInfo["order_id"].toInt(), 2);
    shangjia2 *j=new shangjia2(account);
    j->show();
    this->close();
}

shangjia::~shangjia()
{
    delete ui;
}

void shangjia::on_pushButton_2_clicked()
{
    shangjia2 *j=new shangjia2(account);
    j->show();
    this->close();
}


void shangjia::on_pushButton_3_clicked()
{
    shangjia3 *j=new shangjia3(account);
    j->show();
    this->close();
}


// void shangjia::on_pushButton_7_clicked()//修改 接单按钮
// {
//     al.update_order_statu(myorderID.toInt(),1) ;
//     QList<QVariantMap> list=al.select_orders_somebody(account,0);
//     if (!list.isEmpty()) {
//         QVariantMap firstMap = list.at(0);

//         ui->textBrowser_2->setText(firstMap["dish_name"].toString());
//         ui->textBrowser_3->setText(firstMap["remark"].toString());//订单表中没有地址 只有备注
//         myorderID=firstMap["order_id"].toString();
//     }
// }


void shangjia::on_pushButton_clicked()
{
    //什么都不做
}


void shangjia::on_pushButton_6_clicked()
{
    page_workbench *workbench=new page_workbench(account);
    workbench->show();
    this->close();
}


void shangjia::on_pushButton_5_clicked()
{
    inform *Inform=new inform(account);
    Inform->show();
    this->close();
}

