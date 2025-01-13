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
#include <QtGui/QIcon>
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
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_good_man;
    QPushButton *pushButton_evalute;
    QPushButton *pushButton_good_act;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_order;
    QPushButton *pushButton_workbench;
    QPushButton *pushButton_self_inform;
    QLabel *label_title;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout;
    QLabel *label_sales;
    QLabel *label_sales_day;
    QLabel *label_data_day;
    QLabel *label_sales_month;
    QLabel *label_data_month;

    void setupUi(QWidget *page_workbench)
    {
        if (page_workbench->objectName().isEmpty())
            page_workbench->setObjectName("page_workbench");
        page_workbench->resize(600, 800);
        page_workbench->setMinimumSize(QSize(600, 800));
        page_workbench->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        page_workbench->setWindowIcon(icon);
        label = new QLabel(page_workbench);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 800));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        layoutWidget = new QWidget(page_workbench);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 250, 602, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_good_man = new QPushButton(layoutWidget);
        pushButton_good_man->setObjectName("pushButton_good_man");
        pushButton_good_man->setMinimumSize(QSize(400, 40));
        pushButton_good_man->setMaximumSize(QSize(400, 40));
        QFont font;
        pushButton_good_man->setFont(font);
        pushButton_good_man->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_good_man, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_evalute = new QPushButton(layoutWidget);
        pushButton_evalute->setObjectName("pushButton_evalute");
        pushButton_evalute->setMinimumSize(QSize(400, 40));
        pushButton_evalute->setMaximumSize(QSize(400, 40));
        pushButton_evalute->setFont(font);
        pushButton_evalute->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_evalute, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_good_act = new QPushButton(layoutWidget);
        pushButton_good_act->setObjectName("pushButton_good_act");
        pushButton_good_act->setMinimumSize(QSize(400, 40));
        pushButton_good_act->setMaximumSize(QSize(400, 40));
        pushButton_good_act->setFont(font);
        pushButton_good_act->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_good_act, 0, Qt::AlignmentFlag::AlignHCenter);

        layoutWidget_2 = new QWidget(page_workbench);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_order = new QPushButton(layoutWidget_2);
        pushButton_order->setObjectName("pushButton_order");
        pushButton_order->setMinimumSize(QSize(175, 40));
        pushButton_order->setMaximumSize(QSize(175, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font1.setBold(true);
        pushButton_order->setFont(font1);
        pushButton_order->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #081439; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\346\267\261\350\223\235\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #ffffff;\n"
"    background-color: rgba(99, 132, 233, 0.8); \n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241"
                        "\206\351\242\234\350\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_order);

        pushButton_workbench = new QPushButton(layoutWidget_2);
        pushButton_workbench->setObjectName("pushButton_workbench");
        pushButton_workbench->setMinimumSize(QSize(175, 40));
        pushButton_workbench->setMaximumSize(QSize(175, 40));
        pushButton_workbench->setFont(font1);
        pushButton_workbench->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 20px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_workbench);

        pushButton_self_inform = new QPushButton(layoutWidget_2);
        pushButton_self_inform->setObjectName("pushButton_self_inform");
        pushButton_self_inform->setMinimumSize(QSize(175, 40));
        pushButton_self_inform->setMaximumSize(QSize(175, 40));
        pushButton_self_inform->setFont(font1);
        pushButton_self_inform->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #081439; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\346\267\261\350\223\235\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #ffffff;\n"
"    background-color: rgba(99, 132, 233, 0.8); \n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241"
                        "\206\351\242\234\350\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_self_inform);

        label_title = new QLabel(page_workbench);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(0, 60, 600, 50));
        label_title->setMinimumSize(QSize(600, 50));
        label_title->setMaximumSize(QSize(600, 50));
        QFont font2;
        font2.setPointSize(16);
        label_title->setFont(font2);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_3 = new QWidget(page_workbench);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(50, 120, 511, 106));
        gridLayout = new QGridLayout(layoutWidget_3);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_sales = new QLabel(layoutWidget_3);
        label_sales->setObjectName("label_sales");
        label_sales->setMinimumSize(QSize(100, 100));
        label_sales->setMaximumSize(QSize(100, 100));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        label_sales->setFont(font3);
        label_sales->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_sales, 0, 0, 2, 1);

        label_sales_day = new QLabel(layoutWidget_3);
        label_sales_day->setObjectName("label_sales_day");
        label_sales_day->setMinimumSize(QSize(100, 50));
        label_sales_day->setMaximumSize(QSize(100, 49));
        label_sales_day->setFont(font3);
        label_sales_day->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_sales_day, 0, 1, 1, 1);

        label_data_day = new QLabel(layoutWidget_3);
        label_data_day->setObjectName("label_data_day");
        label_data_day->setMinimumSize(QSize(200, 50));
        label_data_day->setMaximumSize(QSize(200, 50));
        label_data_day->setFont(font3);
        label_data_day->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_data_day, 0, 2, 1, 1);

        label_sales_month = new QLabel(layoutWidget_3);
        label_sales_month->setObjectName("label_sales_month");
        label_sales_month->setMinimumSize(QSize(100, 50));
        label_sales_month->setMaximumSize(QSize(100, 50));
        label_sales_month->setFont(font3);
        label_sales_month->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_sales_month, 1, 1, 1, 1);

        label_data_month = new QLabel(layoutWidget_3);
        label_data_month->setObjectName("label_data_month");
        label_data_month->setMinimumSize(QSize(200, 50));
        label_data_month->setMaximumSize(QSize(200, 50));
        label_data_month->setFont(font3);
        label_data_month->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_data_month, 1, 2, 1, 1);


        retranslateUi(page_workbench);

        QMetaObject::connectSlotsByName(page_workbench);
    } // setupUi

    void retranslateUi(QWidget *page_workbench)
    {
        page_workbench->setWindowTitle(QCoreApplication::translate("page_workbench", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\345\225\206\345\256\266\347\253\257", nullptr));
        label->setText(QString());
        pushButton_good_man->setText(QCoreApplication::translate("page_workbench", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        pushButton_evalute->setText(QCoreApplication::translate("page_workbench", "\350\257\204\344\273\267\347\256\241\347\220\206", nullptr));
        pushButton_good_act->setText(QCoreApplication::translate("page_workbench", "\345\225\206\345\223\201\346\264\273\345\212\250", nullptr));
        pushButton_order->setText(QCoreApplication::translate("page_workbench", "\350\256\242     \345\215\225", nullptr));
        pushButton_workbench->setText(QCoreApplication::translate("page_workbench", "\345\267\245\344\275\234\345\217\260", nullptr));
        pushButton_self_inform->setText(QCoreApplication::translate("page_workbench", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_title->setText(QCoreApplication::translate("page_workbench", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\345\272\227\351\223\272\347\256\241\347\220\206</span></p></body></html>", nullptr));
        label_sales->setText(QCoreApplication::translate("page_workbench", "\351\224\200\351\207\217", nullptr));
        label_sales_day->setText(QCoreApplication::translate("page_workbench", "\346\227\245\351\224\200", nullptr));
        label_data_day->setText(QCoreApplication::translate("page_workbench", "\346\225\260\346\215\256", nullptr));
        label_sales_month->setText(QCoreApplication::translate("page_workbench", "\346\227\245\351\224\200", nullptr));
        label_data_month->setText(QCoreApplication::translate("page_workbench", "\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_workbench: public Ui_page_workbench {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKBENCH_H
