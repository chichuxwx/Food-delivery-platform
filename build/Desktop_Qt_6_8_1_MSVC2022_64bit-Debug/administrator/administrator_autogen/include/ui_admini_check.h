/********************************************************************************
** Form generated from reading UI file 'admini_check.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_CHECK_H
#define UI_ADMINI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_check
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *admini_check)
    {
        if (admini_check->objectName().isEmpty())
            admini_check->setObjectName("admini_check");
        admini_check->resize(300, 400);
        admini_check->setMinimumSize(QSize(300, 400));
        label = new QLabel(admini_check);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 40, 61, 21));
        label_2 = new QLabel(admini_check);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 70, 61, 16));
        textEdit = new QTextEdit(admini_check);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 70, 104, 16));
        groupBox = new QGroupBox(admini_check);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 100, 151, 101));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 31, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 40, 31, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 70, 51, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 20, 31, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 40, 31, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 70, 31, 21));
        pushButton = new QPushButton(admini_check);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 370, 56, 18));
        pushButton_3 = new QPushButton(admini_check);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 370, 56, 18));
        pushButton_4 = new QPushButton(admini_check);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 370, 56, 18));

        retranslateUi(admini_check);

        QMetaObject::connectSlotsByName(admini_check);
    } // setupUi

    void retranslateUi(QWidget *admini_check)
    {
        admini_check->setWindowTitle(QCoreApplication::translate("admini_check", "Form", nullptr));
        label->setText(QCoreApplication::translate("admini_check", "\350\264\255\347\211\251\346\227\245\345\277\227\345\210\227\350\241\250", nullptr));
        label_2->setText(QCoreApplication::translate("admini_check", "\350\256\242\345\215\225\345\217\267\346\220\234\347\264\242\357\274\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admini_check", "\350\256\242\345\215\225\346\227\245\345\277\227", nullptr));
        label_3->setText(QCoreApplication::translate("admini_check", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("admini_check", "\345\225\206\345\256\266\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("admini_check", "\344\272\244\346\230\223\351\207\221\351\242\235\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("admini_check", "acc", nullptr));
        label_7->setText(QCoreApplication::translate("admini_check", "XX", nullptr));
        label_8->setText(QCoreApplication::translate("admini_check", "XX.XX", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_check", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_check", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_check", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_check: public Ui_admini_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_CHECK_H
