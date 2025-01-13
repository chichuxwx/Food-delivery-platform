/********************************************************************************
** Form generated from reading UI file 'dishchange.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHCHANGE_H
#define UI_DISHCHANGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dishchange
{
public:
    QLabel *label_5;
    QPushButton *pushButton_back;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_dish;
    QLabel *label_3;
    QLineEdit *lineEdit_price;
    QPushButton *pushButton_2;

    void setupUi(QWidget *dishchange)
    {
        if (dishchange->objectName().isEmpty())
            dishchange->setObjectName("dishchange");
        dishchange->resize(600, 800);
        dishchange->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        dishchange->setWindowIcon(icon);
        label_5 = new QLabel(dishchange);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 600, 800));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton_back = new QPushButton(dishchange);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(10, 10, 60, 20));
        pushButton_back->setMinimumSize(QSize(60, 20));
        pushButton_back->setMaximumSize(QSize(60, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        pushButton_back->setFont(font);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\344\275\277\347\224\250 #fad37f */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 9px; /* \345\234\206\350\247\222 */\n"
"    color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\351\273\221\350\211\262 */\n"
"    font-size: 9px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:#ffffff;\n"
"    background-color: rgba(99, 132, 233, 0.8); /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
""
                        "    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}"));
        pushButton = new QPushButton(dishchange);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 110, 400, 40));
        pushButton->setMinimumSize(QSize(400, 40));
        pushButton->setMaximumSize(QSize(400, 40));
        QFont font1;
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 12px;\n"
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
        layoutWidget = new QWidget(dishchange);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 220, 560, 224));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 30));
        label_4->setMaximumSize(QSize(50, 30));
        QFont font2;
        font2.setPointSize(15);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(300, 50));
        lineEdit_3->setMaximumSize(QSize(300, 50));

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 30));
        label_2->setMaximumSize(QSize(50, 30));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));
        QFont font3;
        font3.setPointSize(20);
        label->setFont(font3);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 3, 1);

        lineEdit_dish = new QLineEdit(layoutWidget);
        lineEdit_dish->setObjectName("lineEdit_dish");
        lineEdit_dish->setMinimumSize(QSize(300, 50));
        lineEdit_dish->setMaximumSize(QSize(300, 50));

        gridLayout->addWidget(lineEdit_dish, 0, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(50, 30));
        label_3->setMaximumSize(QSize(50, 30));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        lineEdit_price = new QLineEdit(layoutWidget);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setMinimumSize(QSize(300, 50));
        lineEdit_price->setMaximumSize(QSize(300, 50));

        gridLayout->addWidget(lineEdit_price, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);


        retranslateUi(dishchange);

        QMetaObject::connectSlotsByName(dishchange);
    } // setupUi

    void retranslateUi(QWidget *dishchange)
    {
        dishchange->setWindowTitle(QCoreApplication::translate("dishchange", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\345\225\206\345\256\266\347\253\257", nullptr));
        label_5->setText(QString());
        pushButton_back->setText(QCoreApplication::translate("dishchange", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("dishchange", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        label_4->setText(QCoreApplication::translate("dishchange", "\347\212\266\346\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("dishchange", "\350\217\234\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("dishchange", "\346\267\273\345\212\240\345\233\276\347\211\207", nullptr));
        label_3->setText(QCoreApplication::translate("dishchange", "\344\273\267\346\240\274", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dishchange", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dishchange: public Ui_dishchange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHCHANGE_H
