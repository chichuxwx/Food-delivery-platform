/********************************************************************************
** Form generated from reading UI file 'address.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESS_H
#define UI_ADDRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_address
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser_3;

    void setupUi(QWidget *address)
    {
        if (address->objectName().isEmpty())
            address->setObjectName("address");
        address->resize(600, 800);
        address->setMinimumSize(QSize(600, 800));
        pushButton = new QPushButton(address);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        widget = new QWidget(address);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 140, 491, 211));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(70, 30));
        pushButton_2->setMaximumSize(QSize(70, 30));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName("textBrowser");
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(150, 30));
        textBrowser->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(textBrowser, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(70, 30));
        pushButton_3->setMaximumSize(QSize(70, 30));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(widget);
        textBrowser_2->setObjectName("textBrowser_2");
        sizePolicy.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy);
        textBrowser_2->setMinimumSize(QSize(150, 30));
        textBrowser_2->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(textBrowser_2, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(70, 30));
        pushButton_4->setMaximumSize(QSize(70, 30));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        textBrowser_3 = new QTextBrowser(widget);
        textBrowser_3->setObjectName("textBrowser_3");
        sizePolicy.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy);
        textBrowser_3->setMinimumSize(QSize(150, 30));
        textBrowser_3->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(textBrowser_3, 2, 1, 1, 1);


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
