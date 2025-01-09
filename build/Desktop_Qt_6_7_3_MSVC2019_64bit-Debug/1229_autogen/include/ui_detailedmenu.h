/********************************************************************************
** Form generated from reading UI file 'detailedmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILEDMENU_H
#define UI_DETAILEDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailedMenu
{
public:
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_7;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;
    QLabel *label_4;
    QLabel *label_9;

    void setupUi(QWidget *DetailedMenu)
    {
        if (DetailedMenu->objectName().isEmpty())
            DetailedMenu->setObjectName("DetailedMenu");
        DetailedMenu->resize(600, 800);
        label_3 = new QLabel(DetailedMenu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 60, 200, 50));
        label_3->setMinimumSize(QSize(200, 50));
        pushButton_2 = new QPushButton(DetailedMenu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 60, 20));
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setMaximumSize(QSize(60, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton = new QPushButton(DetailedMenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 720, 200, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(200, 40));
        pushButton->setMaximumSize(QSize(200, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget_2 = new QWidget(DetailedMenu);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 700, 291, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(100, 40));
        label_8->setMaximumSize(QSize(100, 40));
        QFont font;
        font.setPointSize(14);
        label_8->setFont(font);

        horizontalLayout->addWidget(label_8);

        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        layoutWidget = new QWidget(DetailedMenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 220, 314, 162));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(200, 40));
        label_5->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_5, 0, 0, 2, 3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(200, 40));
        label_6->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_6, 1, 1, 2, 3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 4, 1, 1);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 3, 1, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 3, 2, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(200, 40));
        label_7->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_7, 4, 1, 1, 3);

        checkBox_4 = new QCheckBox(layoutWidget);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout->addWidget(checkBox_4, 5, 1, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName("checkBox_3");

        gridLayout->addWidget(checkBox_3, 5, 2, 1, 1);

        checkBox_5 = new QCheckBox(layoutWidget);
        checkBox_5->setObjectName("checkBox_5");

        gridLayout->addWidget(checkBox_5, 5, 3, 1, 1);

        label_4 = new QLabel(DetailedMenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 160, 200, 60));
        label_4->setMinimumSize(QSize(200, 60));
        label_9 = new QLabel(DetailedMenu);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 600, 800));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label_9->raise();
        label_3->raise();
        pushButton_2->raise();
        pushButton->raise();
        layoutWidget_2->raise();
        layoutWidget->raise();
        label_4->raise();

        retranslateUi(DetailedMenu);

        QMetaObject::connectSlotsByName(DetailedMenu);
    } // setupUi

    void retranslateUi(QWidget *DetailedMenu)
    {
        DetailedMenu->setWindowTitle(QCoreApplication::translate("DetailedMenu", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\350\217\234\345\223\201\345\220\215\347\247\260</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DetailedMenu", "\351\200\200\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("DetailedMenu", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        label_8->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-weight:700;\">\346\200\273\350\256\241\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DetailedMenu", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\350\247\204\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\210\206\351\207\217</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DetailedMenu", "TextLabel", nullptr));
        checkBox->setText(QCoreApplication::translate("DetailedMenu", "\344\270\200\344\272\272\344\273\275", nullptr));
        checkBox_2->setText(QCoreApplication::translate("DetailedMenu", "\344\270\244\344\272\272\344\273\275", nullptr));
        label_7->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\217\243\345\221\263</span></p></body></html>", nullptr));
        checkBox_4->setText(QCoreApplication::translate("DetailedMenu", "\344\270\215\350\276\243", nullptr));
        checkBox_3->setText(QCoreApplication::translate("DetailedMenu", "\345\276\256\350\276\243", nullptr));
        checkBox_5->setText(QCoreApplication::translate("DetailedMenu", "\347\211\271\350\276\243", nullptr));
        label_4->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\217\234\345\223\201\346\217\217\350\277\260\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246"
                        "\342\200\246</span></p></body></html>", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DetailedMenu: public Ui_DetailedMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILEDMENU_H
