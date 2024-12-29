/********************************************************************************
** Form generated from reading UI file 'admini_info.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_INFO_H
#define UI_ADMINI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_info
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *admini_info)
    {
        if (admini_info->objectName().isEmpty())
            admini_info->setObjectName("admini_info");
        admini_info->resize(600, 800);
        admini_info->setMinimumSize(QSize(600, 800));
        admini_info->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(admini_info);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 210, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton_2 = new QPushButton(admini_info);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 320, 100, 30));
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setMaximumSize(QSize(100, 30));
        pushButton_3 = new QPushButton(admini_info);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 750, 56, 18));
        pushButton_4 = new QPushButton(admini_info);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 750, 51, 18));
        pushButton_4->setMinimumSize(QSize(0, 18));
        pushButton_4->setMaximumSize(QSize(100, 18));
        pushButton_5 = new QPushButton(admini_info);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(260, 750, 61, 18));

        retranslateUi(admini_info);

        QMetaObject::connectSlotsByName(admini_info);
    } // setupUi

    void retranslateUi(QWidget *admini_info)
    {
        admini_info->setWindowTitle(QCoreApplication::translate("admini_info", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_info", "\345\267\262\345\244\204\347\220\206\346\212\225\350\257\211", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admini_info", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_info", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_info", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admini_info", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_info: public Ui_admini_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_INFO_H
