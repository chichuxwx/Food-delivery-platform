/********************************************************************************
** Form generated from reading UI file 'good_act.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_ACT_H
#define UI_GOOD_ACT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good_act
{
public:
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_value;
    QLineEdit *lineEdit_value_desc;
    QPushButton *pushButton_2;

    void setupUi(QWidget *good_act)
    {
        if (good_act->objectName().isEmpty())
            good_act->setObjectName("good_act");
        good_act->resize(600, 800);
        good_act->setMinimumSize(QSize(600, 800));
        good_act->setMaximumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/lt_cml.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        good_act->setWindowIcon(icon);
        label_3 = new QLabel(good_act);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 600, 800));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton = new QPushButton(good_act);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        QFont font;
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
        layoutWidget = new QWidget(good_act);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 100, 411, 130));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 50));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        lineEdit_value = new QLineEdit(layoutWidget);
        lineEdit_value->setObjectName("lineEdit_value");
        lineEdit_value->setMinimumSize(QSize(200, 50));
        lineEdit_value->setMaximumSize(QSize(200, 50));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_value);

        lineEdit_value_desc = new QLineEdit(layoutWidget);
        lineEdit_value_desc->setObjectName("lineEdit_value_desc");
        lineEdit_value_desc->setMinimumSize(QSize(200, 50));
        lineEdit_value_desc->setMaximumSize(QSize(200, 50));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_value_desc);

        pushButton_2 = new QPushButton(good_act);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 350, 400, 40));
        pushButton_2->setMinimumSize(QSize(400, 40));
        pushButton_2->setMaximumSize(QSize(400, 40));
        QFont font2;
        font2.setBold(true);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(good_act);

        QMetaObject::connectSlotsByName(good_act);
    } // setupUi

    void retranslateUi(QWidget *good_act)
    {
        good_act->setWindowTitle(QCoreApplication::translate("good_act", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\345\225\206\345\256\266\347\253\257", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("good_act", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("good_act", "\346\273\241\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("good_act", "\347\253\213\345\207\217\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("good_act", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_act: public Ui_good_act {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_ACT_H
