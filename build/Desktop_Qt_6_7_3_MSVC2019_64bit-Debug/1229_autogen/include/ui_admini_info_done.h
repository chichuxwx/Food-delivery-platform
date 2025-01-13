/********************************************************************************
** Form generated from reading UI file 'admini_info_done.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_INFO_DONE_H
#define UI_ADMINI_INFO_DONE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_info_done
{
public:
    QLabel *label_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *admini_info_done)
    {
        if (admini_info_done->objectName().isEmpty())
            admini_info_done->setObjectName("admini_info_done");
        admini_info_done->resize(600, 800);
        admini_info_done->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/chick.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        admini_info_done->setWindowIcon(icon);
        label_7 = new QLabel(admini_info_done);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 130, 200, 50));
        label_7->setMinimumSize(QSize(200, 50));
        layoutWidget = new QWidget(admini_info_done);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 210, 181, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        pushButton = new QPushButton(admini_info_done);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\344\275\277\347\224\250 #fad37f */\n"
"    border: 2px solid #3f4041; /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 9px; /* \345\234\206\350\247\222 */\n"
"    color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\351\273\221\350\211\262 */\n"
"    font-size: 9px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3f4041; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #ffffff;\n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #484949; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #484949; /"
                        "* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));
        label = new QLabel(admini_info_done);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 800));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label->raise();
        label_7->raise();
        layoutWidget->raise();
        pushButton->raise();

        retranslateUi(admini_info_done);

        QMetaObject::connectSlotsByName(admini_info_done);
    } // setupUi

    void retranslateUi(QWidget *admini_info_done)
    {
        admini_info_done->setWindowTitle(QCoreApplication::translate("admini_info_done", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\347\256\241\347\220\206\347\253\257", nullptr));
        label_7->setText(QCoreApplication::translate("admini_info_done", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\345\267\262\345\244\204\347\220\206\346\212\225\350\257\211</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("admini_info_done", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("admini_info_done", "acc", nullptr));
        label_3->setText(QCoreApplication::translate("admini_info_done", "\345\225\206\345\256\266\345\220\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("admini_info_done", "XX", nullptr));
        label_4->setText(QCoreApplication::translate("admini_info_done", "\346\212\225\350\257\211\347\220\206\347\224\261\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("admini_info_done", "XX", nullptr));
        label_5->setText(QCoreApplication::translate("admini_info_done", "\346\212\225\350\257\211/\351\251\263\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_info_done", "\351\200\200\345\207\272", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class admini_info_done: public Ui_admini_info_done {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_INFO_DONE_H
