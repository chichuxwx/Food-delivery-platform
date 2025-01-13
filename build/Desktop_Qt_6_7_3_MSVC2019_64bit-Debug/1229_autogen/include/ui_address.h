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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_address
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton;

    void setupUi(QWidget *address)
    {
        if (address->objectName().isEmpty())
            address->setObjectName("address");
        address->resize(600, 800);
        address->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        address->setWindowIcon(icon);
        label = new QLabel(address);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 800));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        layoutWidget = new QWidget(address);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 140, 491, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(70, 30));
        pushButton_2->setMaximumSize(QSize(70, 30));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName("textBrowser");
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(150, 30));
        textBrowser->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(textBrowser, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(70, 30));
        pushButton_3->setMaximumSize(QSize(70, 30));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(layoutWidget);
        textBrowser_2->setObjectName("textBrowser_2");
        sizePolicy.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy);
        textBrowser_2->setMinimumSize(QSize(150, 30));
        textBrowser_2->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(textBrowser_2, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(70, 30));
        pushButton_4->setMaximumSize(QSize(70, 30));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        textBrowser_3 = new QTextBrowser(layoutWidget);
        textBrowser_3->setObjectName("textBrowser_3");
        sizePolicy.setHeightForWidth(textBrowser_3->sizePolicy().hasHeightForWidth());
        textBrowser_3->setSizePolicy(sizePolicy);
        textBrowser_3->setMinimumSize(QSize(150, 30));
        textBrowser_3->setMaximumSize(QSize(150, 30));

        gridLayout->addWidget(textBrowser_3, 2, 1, 1, 1);

        pushButton = new QPushButton(address);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\344\275\277\347\224\250 #fad37f */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 9px; /* \345\234\206\350\247\222 */\n"
"    color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\351\273\221\350\211\262 */\n"
"    font-size: 9px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #ffffff;\n"
"    background-color: rgba(99, 132, 233, 0.8); /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
""
                        "    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
"\n"
""));

        retranslateUi(address);

        QMetaObject::connectSlotsByName(address);
    } // setupUi

    void retranslateUi(QWidget *address)
    {
        address->setWindowTitle(QCoreApplication::translate("address", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("address", "\351\200\211\346\213\251\345\234\260\345\235\200\344\270\200", nullptr));
        pushButton_3->setText(QCoreApplication::translate("address", "\351\200\211\346\213\251\345\234\260\345\235\200\344\270\200", nullptr));
        pushButton_4->setText(QCoreApplication::translate("address", "\351\200\211\346\213\251\345\234\260\345\235\200\344\270\200", nullptr));
        pushButton->setText(QCoreApplication::translate("address", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class address: public Ui_address {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESS_H
