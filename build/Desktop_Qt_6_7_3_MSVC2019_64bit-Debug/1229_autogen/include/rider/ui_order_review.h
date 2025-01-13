/********************************************************************************
** Form generated from reading UI file 'order_review.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_REVIEW_H
#define UI_ORDER_REVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order_review
{
public:
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_2;
    QLabel *label_3;

    void setupUi(QWidget *order_review)
    {
        if (order_review->objectName().isEmpty())
            order_review->setObjectName("order_review");
        order_review->resize(600, 800);
        order_review->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        order_review->setWindowIcon(icon);
        label_6 = new QLabel(order_review);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 600, 800));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton = new QPushButton(order_review);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
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
""));
        label = new QLabel(order_review);
        label->setObjectName("label");
        label->setGeometry(QRect(245, 60, 110, 50));
        label->setMinimumSize(QSize(110, 50));
        label->setMaximumSize(QSize(110, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        groupBox = new QGroupBox(order_review);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 130, 551, 591));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(60, 90, 451, 111));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 40, 111, 61));

        retranslateUi(order_review);

        QMetaObject::connectSlotsByName(order_review);
    } // setupUi

    void retranslateUi(QWidget *order_review)
    {
        order_review->setWindowTitle(QCoreApplication::translate("order_review", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\351\205\215\351\200\201\347\253\257", nullptr));
        label_6->setText(QString());
        pushButton->setText(QCoreApplication::translate("order_review", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("order_review", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\257\204\344\273\267\346\237\245\347\234\213</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("order_review", "\350\256\242\345\215\225\350\257\204\344\273\267", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("order_review", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("order_review", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\350\257\204\344\273\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_review: public Ui_order_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_REVIEW_H
