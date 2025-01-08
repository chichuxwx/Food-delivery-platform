/********************************************************************************
** Form generated from reading UI file 'workbench.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKBENCH_H
#define UI_WORKBENCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_workbench
{
public:
    QLabel *label_title;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_order;
    QPushButton *pushButton_workbench;
    QPushButton *pushButton_self_inform;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_sales;
    QLabel *label_sales_day;
    QLabel *label_data_day;
    QLabel *label_sales_month;
    QLabel *label_data_month;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_good_man;
    QPushButton *pushButton_evalute;
    QPushButton *pushButton_good_act;

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
        font.setPointSize(16);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(page_workbench);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_order = new QPushButton(layoutWidget);
        pushButton_order->setObjectName("pushButton_order");
        pushButton_order->setMinimumSize(QSize(175, 40));
        pushButton_order->setMaximumSize(QSize(175, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font1.setPointSize(9);
        pushButton_order->setFont(font1);

        horizontalLayout->addWidget(pushButton_order);

        pushButton_workbench = new QPushButton(layoutWidget);
        pushButton_workbench->setObjectName("pushButton_workbench");
        pushButton_workbench->setMinimumSize(QSize(175, 40));
        pushButton_workbench->setMaximumSize(QSize(175, 40));
        pushButton_workbench->setFont(font1);

        horizontalLayout->addWidget(pushButton_workbench);

        pushButton_self_inform = new QPushButton(layoutWidget);
        pushButton_self_inform->setObjectName("pushButton_self_inform");
        pushButton_self_inform->setMinimumSize(QSize(175, 40));
        pushButton_self_inform->setMaximumSize(QSize(175, 40));
        pushButton_self_inform->setFont(font1);

        horizontalLayout->addWidget(pushButton_self_inform);

        widget = new QWidget(page_workbench);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 120, 511, 106));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_sales = new QLabel(widget);
        label_sales->setObjectName("label_sales");
        label_sales->setMinimumSize(QSize(100, 100));
        label_sales->setMaximumSize(QSize(100, 100));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        label_sales->setFont(font2);
        label_sales->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_sales, 0, 0, 2, 1);

        label_sales_day = new QLabel(widget);
        label_sales_day->setObjectName("label_sales_day");
        label_sales_day->setMinimumSize(QSize(100, 50));
        label_sales_day->setMaximumSize(QSize(100, 49));
        label_sales_day->setFont(font2);
        label_sales_day->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_sales_day, 0, 1, 1, 1);

        label_data_day = new QLabel(widget);
        label_data_day->setObjectName("label_data_day");
        label_data_day->setMinimumSize(QSize(200, 50));
        label_data_day->setMaximumSize(QSize(200, 50));
        label_data_day->setFont(font2);
        label_data_day->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_data_day, 0, 2, 1, 1);

        label_sales_month = new QLabel(widget);
        label_sales_month->setObjectName("label_sales_month");
        label_sales_month->setMinimumSize(QSize(100, 50));
        label_sales_month->setMaximumSize(QSize(100, 50));
        label_sales_month->setFont(font2);
        label_sales_month->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_sales_month, 1, 1, 1, 1);

        label_data_month = new QLabel(widget);
        label_data_month->setObjectName("label_data_month");
        label_data_month->setMinimumSize(QSize(200, 50));
        label_data_month->setMaximumSize(QSize(200, 50));
        label_data_month->setFont(font2);
        label_data_month->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_data_month, 1, 2, 1, 1);

        widget1 = new QWidget(page_workbench);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 250, 602, 231));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_good_man = new QPushButton(widget1);
        pushButton_good_man->setObjectName("pushButton_good_man");
        pushButton_good_man->setMinimumSize(QSize(600, 50));
        pushButton_good_man->setMaximumSize(QSize(600, 50));
        QFont font3;
        font3.setPointSize(12);
        pushButton_good_man->setFont(font3);

        verticalLayout->addWidget(pushButton_good_man);

        pushButton_evalute = new QPushButton(widget1);
        pushButton_evalute->setObjectName("pushButton_evalute");
        pushButton_evalute->setMinimumSize(QSize(600, 50));
        pushButton_evalute->setMaximumSize(QSize(600, 50));
        pushButton_evalute->setFont(font3);

        verticalLayout->addWidget(pushButton_evalute);

        pushButton_good_act = new QPushButton(widget1);
        pushButton_good_act->setObjectName("pushButton_good_act");
        pushButton_good_act->setMinimumSize(QSize(600, 50));
        pushButton_good_act->setMaximumSize(QSize(600, 50));
        pushButton_good_act->setFont(font3);

        verticalLayout->addWidget(pushButton_good_act);


        retranslateUi(page_workbench);

        QMetaObject::connectSlotsByName(page_workbench);
    } // setupUi

    void retranslateUi(QWidget *page_workbench)
    {
        page_workbench->setWindowTitle(QCoreApplication::translate("page_workbench", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("page_workbench", "<html><head/><body><p><span style=\" font-weight:700;\">\345\272\227\351\223\272\347\256\241\347\220\206</span></p></body></html>", nullptr));
        pushButton_order->setText(QCoreApplication::translate("page_workbench", "\350\256\242\345\215\225", nullptr));
        pushButton_workbench->setText(QCoreApplication::translate("page_workbench", "\345\267\245\344\275\234\345\217\260", nullptr));
        pushButton_self_inform->setText(QCoreApplication::translate("page_workbench", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_sales->setText(QCoreApplication::translate("page_workbench", "\351\224\200\351\207\217", nullptr));
        label_sales_day->setText(QCoreApplication::translate("page_workbench", "\346\227\245\351\224\200", nullptr));
        label_data_day->setText(QCoreApplication::translate("page_workbench", "\346\225\260\346\215\256", nullptr));
        label_sales_month->setText(QCoreApplication::translate("page_workbench", "\346\227\245\351\224\200", nullptr));
        label_data_month->setText(QCoreApplication::translate("page_workbench", "\346\225\260\346\215\256", nullptr));
        pushButton_good_man->setText(QCoreApplication::translate("page_workbench", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        pushButton_evalute->setText(QCoreApplication::translate("page_workbench", "\350\257\204\344\273\267\347\256\241\347\220\206", nullptr));
        pushButton_good_act->setText(QCoreApplication::translate("page_workbench", "\345\225\206\345\223\201\346\264\273\345\212\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_workbench: public Ui_page_workbench {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKBENCH_H
