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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shoppingcart
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QSpinBox *spinBox_4;
    QLabel *label_21;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QSpinBox *spinBox_2;
    QLabel *label_13;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Shoppingcart)
    {
        if (Shoppingcart->objectName().isEmpty())
            Shoppingcart->setObjectName("Shoppingcart");
        Shoppingcart->resize(600, 800);
        Shoppingcart->setMinimumSize(QSize(600, 800));
        Shoppingcart->setMaximumSize(QSize(600, 800));
        layoutWidget = new QWidget(Shoppingcart);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 260, 321, 91));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setMinimumSize(QSize(100, 20));

        gridLayout_3->addWidget(label_18, 2, 1, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName("label_20");

        gridLayout_3->addWidget(label_20, 0, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setEnabled(true);
        spinBox_4->setMinimumSize(QSize(100, 20));
        spinBox_4->setMaximumSize(QSize(100, 20));

        gridLayout_3->addWidget(spinBox_4, 1, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(100, 20));
        label_21->setMaximumSize(QSize(100, 20));

        gridLayout_3->addWidget(label_21, 3, 1, 1, 1);

        layoutWidget1 = new QWidget(Shoppingcart);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(130, 128, 321, 91));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(100, 20));

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget1);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setEnabled(true);
        spinBox_2->setMinimumSize(QSize(100, 20));
        spinBox_2->setMaximumSize(QSize(100, 20));

        gridLayout->addWidget(spinBox_2, 1, 1, 1, 1);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(100, 20));
        label_13->setMaximumSize(QSize(100, 20));

        gridLayout->addWidget(label_13, 3, 1, 1, 1);

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
        label = new QLabel(Shoppingcart);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 740, 200, 50));
        label->setMinimumSize(QSize(200, 50));
        label_2 = new QLabel(Shoppingcart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 690, 200, 50));
        label_2->setMinimumSize(QSize(200, 50));
        label_4->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_8->raise();
        label->raise();
        label_2->raise();

        retranslateUi(Shoppingcart);

        QMetaObject::connectSlotsByName(Shoppingcart);
    } // setupUi

    void retranslateUi(QWidget *Shoppingcart)
    {
        Shoppingcart->setWindowTitle(QCoreApplication::translate("Shoppingcart", "Form", nullptr));
        label_18->setText(QCoreApplication::translate("Shoppingcart", "\346\225\260\351\207\217", nullptr));
        label_19->setText(QCoreApplication::translate("Shoppingcart", "\350\217\234\345\220\215", nullptr));
        label_20->setText(QCoreApplication::translate("Shoppingcart", "\345\233\276\347\211\2071", nullptr));
        label_21->setText(QCoreApplication::translate("Shoppingcart", "\344\273\267\346\240\274", nullptr));
        label_10->setText(QCoreApplication::translate("Shoppingcart", "\346\225\260\351\207\217", nullptr));
        label_12->setText(QCoreApplication::translate("Shoppingcart", "\350\217\234\345\220\215", nullptr));
        label_11->setText(QCoreApplication::translate("Shoppingcart", "\345\233\276\347\211\2071", nullptr));
        label_13->setText(QCoreApplication::translate("Shoppingcart", "\344\273\267\346\240\274", nullptr));
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
