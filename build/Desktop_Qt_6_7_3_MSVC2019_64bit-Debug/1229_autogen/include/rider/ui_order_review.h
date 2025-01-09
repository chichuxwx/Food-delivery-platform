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
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *order_review)
    {
        if (order_review->objectName().isEmpty())
            order_review->setObjectName("order_review");
        order_review->resize(600, 800);
        order_review->setMinimumSize(QSize(600, 800));
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
"    background-color: rgba(99, 132, 233, 0.8); /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4"
                        "682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
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
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 30, 491, 181));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 50, 221, 111));
        textBrowser_2 = new QTextBrowser(groupBox_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(260, 50, 221, 111));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 0, 111, 61));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 0, 111, 61));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(30, 230, 491, 181));
        textBrowser_3 = new QTextBrowser(groupBox_3);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(20, 50, 221, 111));
        textBrowser_4 = new QTextBrowser(groupBox_3);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(260, 50, 221, 111));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 0, 111, 61));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 0, 111, 61));

        retranslateUi(order_review);

        QMetaObject::connectSlotsByName(order_review);
    } // setupUi

    void retranslateUi(QWidget *order_review)
    {
        order_review->setWindowTitle(QCoreApplication::translate("order_review", "Form", nullptr));
        label_6->setText(QString());
        pushButton->setText(QCoreApplication::translate("order_review", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("order_review", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\257\204\344\273\267\346\237\245\347\234\213</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("order_review", "\350\256\242\345\215\225\350\257\204\344\273\267", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("order_review", "\350\256\242\345\215\2251", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("order_review", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x</p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("order_review", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("order_review", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("order_review", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\350\257\204\344\273\267</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("order_review", "\350\256\242\345\215\2251", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("order_review", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x</p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("order_review", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x'x</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("order_review", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("order_review", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\350\257\204\344\273\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_review: public Ui_order_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_REVIEW_H
