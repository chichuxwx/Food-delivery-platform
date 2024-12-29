/********************************************************************************
** Form generated from reading UI file 'address.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESS_H
#define UI_ADDRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_address
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *address)
    {
        if (address->objectName().isEmpty())
            address->setObjectName("address");
        address->resize(600, 800);
        address->setMinimumSize(QSize(600, 800));
        pushButton = new QPushButton(address);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 30, 101, 51));
        pushButton_2 = new QPushButton(address);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 140, 101, 31));
        textBrowser = new QTextBrowser(address);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(180, 140, 281, 31));
        textBrowser_2 = new QTextBrowser(address);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(180, 210, 281, 31));
        pushButton_3 = new QPushButton(address);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 210, 101, 31));
        textBrowser_3 = new QTextBrowser(address);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(180, 280, 281, 31));
        pushButton_4 = new QPushButton(address);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(60, 280, 101, 31));

        retranslateUi(address);

        QMetaObject::connectSlotsByName(address);
    } // setupUi

    void retranslateUi(QWidget *address)
    {
        address->setWindowTitle(QCoreApplication::translate("address", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("address", "\351\200\200\345\207\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("address", "\351\200\211\346\213\251\345\234\260\345\235\200\344\270\200", nullptr));
        pushButton_3->setText(QCoreApplication::translate("address", "\351\200\211\346\213\251\345\234\260\345\235\200\344\270\200", nullptr));
        pushButton_4->setText(QCoreApplication::translate("address", "\351\200\211\346\213\251\345\234\260\345\235\200\344\270\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class address: public Ui_address {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESS_H
