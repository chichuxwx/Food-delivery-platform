/********************************************************************************
** Form generated from reading UI file 'storepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREPAGE_H
#define UI_STOREPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Storepage
{
public:
    QLabel *label_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Storepage)
    {
        if (Storepage->objectName().isEmpty())
            Storepage->setObjectName("Storepage");
        Storepage->resize(600, 800);
        Storepage->setMinimumSize(QSize(600, 800));
        Storepage->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Storepage->setWindowIcon(icon);
        label_4 = new QLabel(Storepage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 600, 800));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        layoutWidget_2 = new QWidget(Storepage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(230, 120, 151, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(60, 30));
        label_2->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        pushButton_2 = new QPushButton(Storepage);
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
        label = new QLabel(Storepage);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 60, 200, 50));
        label->setMinimumSize(QSize(200, 50));
        label->setMaximumSize(QSize(200, 50));
        pushButton_8 = new QPushButton(Storepage);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 750, 100, 30));
        pushButton_8->setMinimumSize(QSize(100, 30));
        pushButton_8->setMaximumSize(QSize(100, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221")});
        pushButton_8->setFont(font);
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
        scrollArea = new QScrollArea(Storepage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 160, 521, 441));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 439));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Storepage);

        QMetaObject::connectSlotsByName(Storepage);
    } // setupUi

    void retranslateUi(QWidget *Storepage)
    {
        Storepage->setWindowTitle(QCoreApplication::translate("Storepage", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226", nullptr));
        label_4->setText(QString());
        label_2->setText(QCoreApplication::translate("Storepage", "\345\225\206\345\256\266\350\257\204\345\210\206", nullptr));
        label_3->setText(QCoreApplication::translate("Storepage", "//\350\277\231\351\207\214\345\272\224\350\257\245\346\234\211\350\257\204\345\210\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Storepage", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Storepage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\345\225\206\345\256\266\345\220\215\347\247\260</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Storepage", "\350\264\255\347\211\251\350\275\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Storepage: public Ui_Storepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREPAGE_H
