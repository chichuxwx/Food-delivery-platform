/********************************************************************************
** Form generated from reading UI file 'evalute.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUTE_H
#define UI_EVALUTE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_evalute
{
public:
    QLabel *label_2;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QWidget *evalute)
    {
        if (evalute->objectName().isEmpty())
            evalute->setObjectName("evalute");
        evalute->resize(600, 800);
        evalute->setMinimumSize(QSize(600, 800));
        evalute->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        evalute->setWindowIcon(icon);
        label_2 = new QLabel(evalute);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 600, 800));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton = new QPushButton(evalute);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        listWidget = new QListWidget(evalute);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 230, 500, 500));
        listWidget->setMinimumSize(QSize(500, 500));
        label = new QLabel(evalute);
        label->setObjectName("label");
        label->setGeometry(QRect(225, 60, 150, 50));
        label->setMinimumSize(QSize(150, 50));
        label->setMaximumSize(QSize(150, 50));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(evalute);

        QMetaObject::connectSlotsByName(evalute);
    } // setupUi

    void retranslateUi(QWidget *evalute)
    {
        evalute->setWindowTitle(QCoreApplication::translate("evalute", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\345\225\206\345\256\266\347\253\257", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("evalute", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("evalute", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\256\242\345\215\225\350\257\204\344\273\267</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class evalute: public Ui_evalute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUTE_H
