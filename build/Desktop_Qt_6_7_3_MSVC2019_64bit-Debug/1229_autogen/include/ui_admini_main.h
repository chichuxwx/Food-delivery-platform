/********************************************************************************
** Form generated from reading UI file 'admini_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_MAIN_H
#define UI_ADMINI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_main
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *admini_main)
    {
        if (admini_main->objectName().isEmpty())
            admini_main->setObjectName("admini_main");
        admini_main->resize(600, 800);
        admini_main->setMinimumSize(QSize(600, 800));
        label = new QLabel(admini_main);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 130, 200, 41));
        label->setMinimumSize(QSize(200, 0));
        widget = new QWidget(admini_main);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 210, 251, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        widget1 = new QWidget(admini_main);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(175, 40));
        pushButton_5->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_5);


        retranslateUi(admini_main);

        QMetaObject::connectSlotsByName(admini_main);
    } // setupUi

    void retranslateUi(QWidget *admini_main)
    {
        admini_main->setWindowTitle(QCoreApplication::translate("admini_main", "Form", nullptr));
        label->setText(QCoreApplication::translate("admini_main", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\345\276\205\345\244\204\347\220\206\346\212\225\350\257\211</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("admini_main", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("admini_main", "acc", nullptr));
        label_4->setText(QCoreApplication::translate("admini_main", "\345\225\206\345\256\266\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("admini_main", "XX", nullptr));
        label_3->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\347\220\206\347\224\261\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("admini_main", "XX", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_main", "\346\216\245\345\217\227\346\212\225\350\257\211", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\351\251\263\345\233\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_main", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admini_main", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_main: public Ui_admini_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_MAIN_H
