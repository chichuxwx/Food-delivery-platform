/********************************************************************************
** Form generated from reading UI file 'good_mange.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_MANGE_H
#define UI_GOOD_MANGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good_mange
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_add_good;
    QPushButton *pushButton_back;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *good_mange)
    {
        if (good_mange->objectName().isEmpty())
            good_mange->setObjectName("good_mange");
        good_mange->resize(600, 800);
        good_mange->setMinimumSize(QSize(600, 800));
        good_mange->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        good_mange->setWindowIcon(icon);
        label_2 = new QLabel(good_mange);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 600, 800));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label = new QLabel(good_mange);
        label->setObjectName("label");
        label->setGeometry(QRect(225, 60, 150, 50));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(150);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(150, 50));
        label->setMaximumSize(QSize(600, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_add_good = new QPushButton(good_mange);
        pushButton_add_good->setObjectName("pushButton_add_good");
        pushButton_add_good->setGeometry(QRect(100, 180, 400, 40));
        pushButton_add_good->setMinimumSize(QSize(400, 40));
        pushButton_add_good->setMaximumSize(QSize(400, 40));
        QFont font1;
        font1.setBold(true);
        pushButton_add_good->setFont(font1);
        pushButton_add_good->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_back = new QPushButton(good_mange);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(10, 10, 60, 20));
        pushButton_back->setMinimumSize(QSize(60, 20));
        pushButton_back->setMaximumSize(QSize(60, 20));
        QFont font2;
        pushButton_back->setFont(font2);
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
"}\n"
""));
        scrollArea = new QScrollArea(good_mange);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 250, 521, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 489));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(good_mange);

        QMetaObject::connectSlotsByName(good_mange);
    } // setupUi

    void retranslateUi(QWidget *good_mange)
    {
        good_mange->setWindowTitle(QCoreApplication::translate("good_mange", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\345\225\206\345\256\266\347\253\257", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("good_mange", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\345\225\206\345\223\201\347\256\241\347\220\206</span></p></body></html>", nullptr));
        pushButton_add_good->setText(QCoreApplication::translate("good_mange", "\346\226\260\345\242\236\350\217\234\345\223\201", nullptr));
        pushButton_back->setText(QCoreApplication::translate("good_mange", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_mange: public Ui_good_mange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_MANGE_H
