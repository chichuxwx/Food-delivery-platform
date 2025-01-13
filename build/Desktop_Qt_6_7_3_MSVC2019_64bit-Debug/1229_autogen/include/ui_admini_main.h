/********************************************************************************
** Form generated from reading UI file 'admini_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_MAIN_H
#define UI_ADMINI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_main
{
public:
    QLabel *label_8;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *admini_main)
    {
        if (admini_main->objectName().isEmpty())
            admini_main->setObjectName("admini_main");
        admini_main->resize(600, 800);
        admini_main->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/chick.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        admini_main->setWindowIcon(icon);
        label_8 = new QLabel(admini_main);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 600, 800));
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label = new QLabel(admini_main);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 130, 200, 41));
        label->setMinimumSize(QSize(200, 0));
        layoutWidget = new QWidget(admini_main);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));
        QFont font;
        font.setBold(true);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3f4041; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #3f4041; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 20px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #353637; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #353637; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2d2e2e; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #2d2e2e; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid #3f4041; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #3f4041 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #3f4041; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\345\216\237\346\235\245\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:#ffffff;\n"
"    background-color: #3f4041; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\344\270\272 #3f4041 */\n"
"    border: 2px solid #353637; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #353637 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #353637; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\344\270\272 #353637 */\n"
"    b"
                        "order-color: #2d2e2e; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #2d2e2e */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(175, 40));
        pushButton_5->setMaximumSize(QSize(175, 40));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid #3f4041; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #3f4041 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #3f4041; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\345\216\237\346\235\245\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:#ffffff;\n"
"    background-color: #3f4041; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\344\270\272 #3f4041 */\n"
"    border: 2px solid #353637; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #353637 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #353637; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\344\270\272 #353637 */\n"
"    b"
                        "order-color: #2d2e2e; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #2d2e2e */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_5);

        layoutWidget_2 = new QWidget(admini_main);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(170, 210, 251, 151));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);


        retranslateUi(admini_main);

        QMetaObject::connectSlotsByName(admini_main);
    } // setupUi

    void retranslateUi(QWidget *admini_main)
    {
        admini_main->setWindowTitle(QCoreApplication::translate("admini_main", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\347\256\241\347\220\206\347\253\257", nullptr));
        label_8->setText(QString());
        label->setText(QCoreApplication::translate("admini_main", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\345\276\205\345\244\204\347\220\206\346\212\225\350\257\211</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_main", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admini_main", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("admini_main", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("admini_main", "acc", nullptr));
        label_4->setText(QCoreApplication::translate("admini_main", "\345\225\206\345\256\266\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("admini_main", "XX", nullptr));
        label_3->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\347\220\206\347\224\261\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("admini_main", "XX", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_main", "\346\216\245\345\217\227\346\212\225\350\257\211", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admini_main", "\346\212\225\350\257\211\351\251\263\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_main: public Ui_admini_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_MAIN_H
