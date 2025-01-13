/********************************************************************************
** Form generated from reading UI file 'complaints.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLAINTS_H
#define UI_COMPLAINTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_complaints
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QTextEdit *textEdit;
    QLabel *label_8;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *complaints)
    {
        if (complaints->objectName().isEmpty())
            complaints->setObjectName("complaints");
        complaints->resize(600, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        complaints->setWindowIcon(icon);
        label = new QLabel(complaints);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 600, 800));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton_2 = new QPushButton(complaints);
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
        pushButton_8 = new QPushButton(complaints);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(100, 680, 400, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(400, 40));
        pushButton_8->setMaximumSize(QSize(400, 40));
        QFont font;
        font.setBold(false);
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget = new QWidget(complaints);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 100, 441, 341));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(200, 60));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(200, 60));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        textEdit_2 = new QTextEdit(layoutWidget);
        textEdit_2->setObjectName("textEdit_2");

        gridLayout->addWidget(textEdit_2, 3, 0, 1, 1);


        retranslateUi(complaints);

        QMetaObject::connectSlotsByName(complaints);
    } // setupUi

    void retranslateUi(QWidget *complaints)
    {
        complaints->setWindowTitle(QCoreApplication::translate("complaints", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226", nullptr));
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("complaints", "\351\200\200\345\207\272", nullptr));
        pushButton_8->setText(QCoreApplication::translate("complaints", "\346\217\220\344\272\244", nullptr));
        label_7->setText(QCoreApplication::translate("complaints", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\344\270\215\346\273\241\346\204\217\347\232\204\345\234\260\346\226\271\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("complaints", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\224\271\350\277\233\345\273\272\350\256\256\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class complaints: public Ui_complaints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLAINTS_H
