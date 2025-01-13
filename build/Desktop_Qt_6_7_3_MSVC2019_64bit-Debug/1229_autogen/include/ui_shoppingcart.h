/********************************************************************************
** Form generated from reading UI file 'shoppingcart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCART_H
#define UI_SHOPPINGCART_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shoppingcart
{
public:
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QLabel *label;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Shoppingcart)
    {
        if (Shoppingcart->objectName().isEmpty())
            Shoppingcart->setObjectName("Shoppingcart");
        Shoppingcart->resize(600, 800);
        Shoppingcart->setMinimumSize(QSize(600, 800));
        Shoppingcart->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Shoppingcart->setWindowIcon(icon);
        label_4 = new QLabel(Shoppingcart);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 600, 800));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton = new QPushButton(Shoppingcart);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
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
""));
        label_3 = new QLabel(Shoppingcart);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 60, 200, 50));
        label_3->setMinimumSize(QSize(200, 50));
        pushButton_8 = new QPushButton(Shoppingcart);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(480, 750, 100, 30));
        pushButton_8->setMinimumSize(QSize(100, 30));
        pushButton_8->setMaximumSize(QSize(100, 30));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(Shoppingcart);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 740, 200, 50));
        label->setMinimumSize(QSize(200, 50));
        label_2 = new QLabel(Shoppingcart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 690, 200, 50));
        label_2->setMinimumSize(QSize(200, 50));
        scrollArea = new QScrollArea(Shoppingcart);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 110, 471, 531));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 469, 529));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Shoppingcart);

        QMetaObject::connectSlotsByName(Shoppingcart);
    } // setupUi

    void retranslateUi(QWidget *Shoppingcart)
    {
        Shoppingcart->setWindowTitle(QCoreApplication::translate("Shoppingcart", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226", nullptr));
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("Shoppingcart", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("Shoppingcart", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\350\264\255\347\211\251\350\275\246</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Shoppingcart", "\347\273\223\347\256\227", nullptr));
        label->setText(QCoreApplication::translate("Shoppingcart", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">\346\200\273\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Shoppingcart", "<html><head/><body><p><span style=\" font-size:18pt;\">\351\200\211\346\213\251\344\274\230\346\203\240\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shoppingcart: public Ui_Shoppingcart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCART_H
