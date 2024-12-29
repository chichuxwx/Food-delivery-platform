/********************************************************************************
** Form generated from reading UI file 'admini_main.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_MAIN_H
#define UI_ADMINI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_main
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

    void setupUi(QWidget *admini_main)
    {
        if (admini_main->objectName().isEmpty())
            admini_main->setObjectName("admini_main");
        admini_main->resize(300, 400);
        admini_main->setMinimumSize(QSize(300, 400));
        label = new QLabel(admini_main);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 30, 91, 41));
        groupBox = new QGroupBox(admini_main);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 80, 181, 121));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 22, 40, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 51, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 50, 40, 12));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 20, 40, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 50, 40, 12));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(100, 70, 41, 21));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 100, 56, 18));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 100, 56, 18));
        pushButton_3 = new QPushButton(admini_main);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 370, 56, 18));
        pushButton_4 = new QPushButton(admini_main);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 370, 56, 18));
        pushButton_5 = new QPushButton(admini_main);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(210, 370, 56, 18));

        retranslateUi(admini_main);

        QMetaObject::connectSlotsByName(admini_main);
    } // setupUi

    void retranslateUi(QWidget *admini_main)
    {
        admini_main->setWindowTitle(QCoreApplication::translate("admini_main", "Form", nullptr));
        label->setText(QCoreApplication::translate("admini_main", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\345\276\205\345\244\204\347\220\206\346\212\225\350\257\211</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("admini_main", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\347\220\206\347\224\261\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("admini_main", "\345\225\206\345\256\266\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("admini_main", "acc", nullptr));
        label_6->setText(QCoreApplication::translate("admini_main", "XX", nullptr));
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
