/********************************************************************************
** Form generated from reading UI file 'adminiwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINIWINDOW_H
#define UI_ADMINIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminiwindow
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *adminiwindow)
    {
        if (adminiwindow->objectName().isEmpty())
            adminiwindow->setObjectName("adminiwindow");
        adminiwindow->resize(600, 800);
        adminiwindow->setMinimumSize(QSize(600, 800));
        label = new QLabel(adminiwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 130, 200, 61));
        groupBox = new QGroupBox(adminiwindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(170, 260, 231, 101));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 40, 12));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 40, 12));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 40, 12));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 20, 40, 12));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 40, 40, 12));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 60, 40, 12));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 80, 56, 18));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 80, 56, 18));
        pushButton_3 = new QPushButton(adminiwindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 750, 56, 18));
        pushButton_4 = new QPushButton(adminiwindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(270, 750, 56, 18));
        pushButton_5 = new QPushButton(adminiwindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(490, 750, 56, 18));

        retranslateUi(adminiwindow);

        QMetaObject::connectSlotsByName(adminiwindow);
    } // setupUi

    void retranslateUi(QWidget *adminiwindow)
    {
        adminiwindow->setWindowTitle(QCoreApplication::translate("adminiwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("adminiwindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\345\276\205\345\244\204\347\220\206\346\212\225\350\257\211</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("adminiwindow", "\346\212\225\350\257\211x", nullptr));
        label_2->setText(QCoreApplication::translate("adminiwindow", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("adminiwindow", "\345\225\206\345\256\266\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("adminiwindow", "\346\212\225\350\257\211\347\220\206\347\224\261\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("adminiwindow", "acc", nullptr));
        label_6->setText(QCoreApplication::translate("adminiwindow", "XX", nullptr));
        label_7->setText(QCoreApplication::translate("adminiwindow", "XX", nullptr));
        pushButton->setText(QCoreApplication::translate("adminiwindow", "\346\212\225\350\257\211\345\217\227\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminiwindow", "\346\212\225\350\257\211\351\251\263\345\233\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("adminiwindow", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("adminiwindow", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
        pushButton_5->setText(QCoreApplication::translate("adminiwindow", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminiwindow: public Ui_adminiwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINIWINDOW_H
