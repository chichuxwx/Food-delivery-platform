/********************************************************************************
** Form generated from reading UI file 'admini_check.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_CHECK_H
#define UI_ADMINI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_check
{
public:
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *label_2;

    void setupUi(QWidget *admini_check)
    {
        if (admini_check->objectName().isEmpty())
            admini_check->setObjectName("admini_check");
        admini_check->resize(600, 800);
        admini_check->setMinimumSize(QSize(600, 800));
        label = new QLabel(admini_check);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 130, 200, 50));
        label->setMinimumSize(QSize(200, 50));
        widget = new QWidget(admini_check);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 300, 161, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 1, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 2, 1, 1, 1);

        widget1 = new QWidget(admini_check);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(175, 40));
        pushButton->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        widget2 = new QWidget(admini_check);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(220, 220, 181, 41));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget2);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);


        retranslateUi(admini_check);

        QMetaObject::connectSlotsByName(admini_check);
    } // setupUi

    void retranslateUi(QWidget *admini_check)
    {
        admini_check->setWindowTitle(QCoreApplication::translate("admini_check", "Form", nullptr));
        label->setText(QCoreApplication::translate("admini_check", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\350\264\255\347\211\251\346\227\245\345\277\227\345\210\227\350\241\250</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("admini_check", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("admini_check", "acc", nullptr));
        label_4->setText(QCoreApplication::translate("admini_check", "\345\225\206\345\256\266\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("admini_check", "XX", nullptr));
        label_5->setText(QCoreApplication::translate("admini_check", "\344\272\244\346\230\223\351\207\221\351\242\235\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("admini_check", "XX.XX", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_check", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_check", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_check", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("admini_check", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("admini_check", "\350\256\242\345\215\225\345\217\267\346\220\234\347\264\242\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_check: public Ui_admini_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_CHECK_H
