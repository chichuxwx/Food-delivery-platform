/********************************************************************************
** Form generated from reading UI file 'orderstatus.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSTATUS_H
#define UI_ORDERSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderStatus
{
public:
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_11;
    QPushButton *pushButton_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_13;

    void setupUi(QWidget *OrderStatus)
    {
        if (OrderStatus->objectName().isEmpty())
            OrderStatus->setObjectName("OrderStatus");
        OrderStatus->resize(600, 800);
        OrderStatus->setMinimumSize(QSize(600, 800));
        OrderStatus->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(OrderStatus);
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
"\n"
""));
        scrollArea = new QScrollArea(OrderStatus);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 50, 600, 500));
        scrollArea->setMinimumSize(QSize(600, 500));
        scrollArea->setMaximumSize(QSize(600, 500));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 598, 498));
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(170, 300, 100, 50));
        label_12->setMinimumSize(QSize(100, 50));
        label_12->setMaximumSize(QSize(100, 50));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(440, 340, 80, 50));
        label_7->setMinimumSize(QSize(80, 50));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(60, 250, 100, 50));
        label_10->setMinimumSize(QSize(100, 50));
        label_10->setMaximumSize(QSize(100, 50));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 150, 80, 50));
        label_5->setMinimumSize(QSize(80, 50));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 100, 50));
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setMaximumSize(QSize(100, 50));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(440, 190, 100, 50));
        label_6->setMinimumSize(QSize(100, 50));
        label_6->setMaximumSize(QSize(100, 50));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(440, 380, 100, 50));
        label_9->setMinimumSize(QSize(100, 50));
        label_9->setMaximumSize(QSize(100, 50));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 300, 100, 50));
        label_8->setMinimumSize(QSize(100, 50));
        label_8->setMaximumSize(QSize(100, 50));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 100, 50));
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(100, 50));
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(330, 200, 100, 30));
        pushButton_5->setMinimumSize(QSize(100, 30));
        pushButton_5->setMaximumSize(QSize(100, 30));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 110, 100, 50));
        label_4->setMinimumSize(QSize(100, 50));
        label_4->setMaximumSize(QSize(100, 50));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 110, 100, 50));
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(280, 300, 100, 50));
        label_11->setMinimumSize(QSize(100, 50));
        label_11->setMaximumSize(QSize(100, 50));
        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(330, 390, 100, 30));
        pushButton_6->setMinimumSize(QSize(100, 30));
        pushButton_6->setMaximumSize(QSize(100, 30));
        scrollArea->setWidget(scrollAreaWidgetContents);
        layoutWidget = new QWidget(OrderStatus);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #081439; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\346\267\261\350\223\235\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(99, 132, 233, 0.8); \n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350"
                        "\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 20px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #081439; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\346\267\261\350\223\235\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(99, 132, 233, 0.8); \n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350"
                        "\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_4);

        label_13 = new QLabel(OrderStatus);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 0, 600, 800));
        label_13->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label_13->raise();
        layoutWidget->raise();
        scrollArea->raise();
        pushButton->raise();

        retranslateUi(OrderStatus);

        QMetaObject::connectSlotsByName(OrderStatus);
    } // setupUi

    void retranslateUi(QWidget *OrderStatus)
    {
        OrderStatus->setWindowTitle(QCoreApplication::translate("OrderStatus", "XX\345\244\226\345\215\226", nullptr));
        pushButton->setText(QCoreApplication::translate("OrderStatus", "\351\200\200\345\207\272", nullptr));
        label_12->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\350\217\234\345\223\201\345\233\276\347\211\207</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\346\200\273\344\273\267\357\274\232</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\345\225\206\345\256\266\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\346\200\273\344\273\267\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\345\225\206\345\256\266\345\233\276\347\211\207</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\345\225\206\345\256\266\345\233\276\347\211\207</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\345\225\206\345\256\266\345\220\215\347\247\260</span></p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("OrderStatus", "\350\257\204\344\273\267", nullptr));
        label_4->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\350\217\234\345\223\201\345\233\276\347\211\207</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\350\217\234\345\223\201\345\233\276\347\211\207</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("OrderStatus", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\350\217\234\345\223\201\345\233\276\347\211\207</span></p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("OrderStatus", "\350\257\204\344\273\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OrderStatus", "\347\202\271\351\244\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("OrderStatus", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("OrderStatus", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_13->setText(QCoreApplication::translate("OrderStatus", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderStatus: public Ui_OrderStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSTATUS_H
