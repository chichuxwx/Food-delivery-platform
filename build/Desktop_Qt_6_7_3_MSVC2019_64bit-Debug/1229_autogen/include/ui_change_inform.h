/********************************************************************************
** Form generated from reading UI file 'change_inform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_INFORM_H
#define UI_CHANGE_INFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_inform
{
public:
    QLabel *label_4;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton;

    void setupUi(QWidget *change_inform)
    {
        if (change_inform->objectName().isEmpty())
            change_inform->setObjectName("change_inform");
        change_inform->resize(600, 800);
        change_inform->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        change_inform->setWindowIcon(icon);
        label_4 = new QLabel(change_inform);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 600, 800));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        groupBox = new QGroupBox(change_inform);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 130, 501, 321));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 50, 151, 191));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 60, 91, 41));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(290, 70, 191, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 120, 91, 41));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(290, 130, 191, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 190, 91, 41));
        textBrowser_3 = new QTextBrowser(groupBox);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(290, 200, 191, 21));
        pushButton = new QPushButton(change_inform);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
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

        retranslateUi(change_inform);

        QMetaObject::connectSlotsByName(change_inform);
    } // setupUi

    void retranslateUi(QWidget *change_inform)
    {
        change_inform->setWindowTitle(QCoreApplication::translate("change_inform", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226", nullptr));
        label_4->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("change_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("change_inform", "\347\224\250\346\210\267\345\244\264\345\203\217", nullptr));
        label->setText(QCoreApplication::translate("change_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\347\224\250\346\210\267\346\230\265\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("change_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("change_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\344\277\256\346\224\271\350\264\246\345\217\267\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("change_inform", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_inform: public Ui_change_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_INFORM_H
