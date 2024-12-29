/********************************************************************************
** Form generated from reading UI file 'workbench.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKBENCH_H
#define UI_WORKBENCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_workbench
{
public:
    QLabel *label_title;
    QLabel *label_sales;
    QLabel *label_sales_day;
    QLabel *label_sales_month;
    QLabel *label_data_day;
    QPushButton *pushButton_good_man;
    QPushButton *pushButton_good_act;
    QPushButton *pushButton_evalute;
    QLabel *label_data_month;
    QPushButton *pushButton_order;
    QPushButton *pushButton_workbench;
    QPushButton *pushButton_self_inform;

    void setupUi(QWidget *page_workbench)
    {
        if (page_workbench->objectName().isEmpty())
            page_workbench->setObjectName("page_workbench");
        page_workbench->resize(600, 800);
        page_workbench->setMinimumSize(QSize(600, 800));
        page_workbench->setMaximumSize(QSize(600, 800));
        label_title = new QLabel(page_workbench);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(0, 20, 600, 100));
        label_title->setMinimumSize(QSize(600, 100));
        label_title->setMaximumSize(QSize(600, 100));
        QFont font;
        font.setPointSize(20);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_sales = new QLabel(page_workbench);
        label_sales->setObjectName("label_sales");
        label_sales->setGeometry(QRect(40, 120, 100, 100));
        label_sales->setMinimumSize(QSize(100, 100));
        label_sales->setMaximumSize(QSize(100, 100));
        label_sales->setFont(font);
        label_sales->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_sales_day = new QLabel(page_workbench);
        label_sales_day->setObjectName("label_sales_day");
        label_sales_day->setGeometry(QRect(140, 120, 100, 50));
        label_sales_day->setMinimumSize(QSize(100, 50));
        label_sales_day->setMaximumSize(QSize(100, 49));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        label_sales_day->setFont(font1);
        label_sales_day->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_sales_month = new QLabel(page_workbench);
        label_sales_month->setObjectName("label_sales_month");
        label_sales_month->setGeometry(QRect(140, 170, 100, 50));
        label_sales_month->setMinimumSize(QSize(100, 50));
        label_sales_month->setMaximumSize(QSize(100, 50));
        label_sales_month->setFont(font1);
        label_sales_month->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_data_day = new QLabel(page_workbench);
        label_data_day->setObjectName("label_data_day");
        label_data_day->setGeometry(QRect(240, 120, 200, 50));
        label_data_day->setMinimumSize(QSize(200, 50));
        label_data_day->setMaximumSize(QSize(200, 50));
        label_data_day->setFont(font);
        label_data_day->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_good_man = new QPushButton(page_workbench);
        pushButton_good_man->setObjectName("pushButton_good_man");
        pushButton_good_man->setGeometry(QRect(0, 230, 600, 80));
        pushButton_good_man->setMinimumSize(QSize(600, 80));
        pushButton_good_man->setMaximumSize(QSize(600, 80));
        pushButton_good_man->setFont(font);
        pushButton_good_act = new QPushButton(page_workbench);
        pushButton_good_act->setObjectName("pushButton_good_act");
        pushButton_good_act->setGeometry(QRect(0, 390, 600, 80));
        pushButton_good_act->setMinimumSize(QSize(600, 80));
        pushButton_good_act->setMaximumSize(QSize(600, 80));
        pushButton_good_act->setFont(font);
        pushButton_evalute = new QPushButton(page_workbench);
        pushButton_evalute->setObjectName("pushButton_evalute");
        pushButton_evalute->setGeometry(QRect(0, 310, 600, 80));
        pushButton_evalute->setMinimumSize(QSize(600, 80));
        pushButton_evalute->setMaximumSize(QSize(600, 81));
        pushButton_evalute->setFont(font);
        label_data_month = new QLabel(page_workbench);
        label_data_month->setObjectName("label_data_month");
        label_data_month->setGeometry(QRect(240, 170, 200, 50));
        label_data_month->setMinimumSize(QSize(200, 50));
        label_data_month->setMaximumSize(QSize(200, 50));
        label_data_month->setFont(font);
        label_data_month->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_order = new QPushButton(page_workbench);
        pushButton_order->setObjectName("pushButton_order");
        pushButton_order->setGeometry(QRect(0, 700, 200, 100));
        pushButton_order->setMinimumSize(QSize(200, 100));
        pushButton_order->setMaximumSize(QSize(200, 30));
        pushButton_order->setFont(font);
        pushButton_workbench = new QPushButton(page_workbench);
        pushButton_workbench->setObjectName("pushButton_workbench");
        pushButton_workbench->setGeometry(QRect(200, 700, 200, 100));
        pushButton_workbench->setMinimumSize(QSize(200, 100));
        pushButton_workbench->setMaximumSize(QSize(200, 100));
        pushButton_workbench->setFont(font);
        pushButton_self_inform = new QPushButton(page_workbench);
        pushButton_self_inform->setObjectName("pushButton_self_inform");
        pushButton_self_inform->setGeometry(QRect(400, 700, 200, 100));
        pushButton_self_inform->setMinimumSize(QSize(200, 100));
        pushButton_self_inform->setMaximumSize(QSize(200, 100));
        pushButton_self_inform->setFont(font);

        retranslateUi(page_workbench);

        QMetaObject::connectSlotsByName(page_workbench);
    } // setupUi

    void retranslateUi(QWidget *page_workbench)
    {
        page_workbench->setWindowTitle(QCoreApplication::translate("page_workbench", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("page_workbench", "\345\272\227\351\223\272\347\256\241\347\220\206", nullptr));
        label_sales->setText(QCoreApplication::translate("page_workbench", "\351\224\200\351\207\217", nullptr));
        label_sales_day->setText(QCoreApplication::translate("page_workbench", "\346\227\245\351\224\200", nullptr));
        label_sales_month->setText(QCoreApplication::translate("page_workbench", "\346\227\245\351\224\200", nullptr));
        label_data_day->setText(QCoreApplication::translate("page_workbench", "\346\225\260\346\215\256", nullptr));
        pushButton_good_man->setText(QCoreApplication::translate("page_workbench", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        pushButton_good_act->setText(QCoreApplication::translate("page_workbench", "\345\225\206\345\223\201\346\264\273\345\212\250", nullptr));
        pushButton_evalute->setText(QCoreApplication::translate("page_workbench", "\350\257\204\344\273\267\347\256\241\347\220\206", nullptr));
        label_data_month->setText(QCoreApplication::translate("page_workbench", "\346\225\260\346\215\256", nullptr));
        pushButton_order->setText(QCoreApplication::translate("page_workbench", "\350\256\242\345\215\225", nullptr));
        pushButton_workbench->setText(QCoreApplication::translate("page_workbench", "\345\267\245\344\275\234\345\217\260", nullptr));
        pushButton_self_inform->setText(QCoreApplication::translate("page_workbench", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_workbench: public Ui_page_workbench {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKBENCH_H
