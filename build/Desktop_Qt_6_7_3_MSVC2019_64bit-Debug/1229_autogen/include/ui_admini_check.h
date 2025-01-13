/********************************************************************************
** Form generated from reading UI file 'admini_check.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_CHECK_H
#define UI_ADMINI_CHECK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_check
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;

    void setupUi(QWidget *admini_check)
    {
        if (admini_check->objectName().isEmpty())
            admini_check->setObjectName("admini_check");
        admini_check->resize(600, 800);
        admini_check->setMinimumSize(QSize(600, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/chick.gif"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        admini_check->setWindowIcon(icon);
        label = new QLabel(admini_check);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 60, 200, 50));
        label->setMinimumSize(QSize(200, 50));
        layoutWidget = new QWidget(admini_check);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(175, 40));
        pushButton->setMaximumSize(QSize(175, 40));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid #3f4041; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\272 #3f4041 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #3f4041; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\345\216\237\346\235\245\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3f4041; \n"
"	color:#ffffff;/* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\344\270\272 #3f4041 */\n"
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

        horizontalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_3);

        label_10 = new QLabel(admini_check);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 0, 600, 12));
        label_10->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label_11 = new QLabel(admini_check);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 0, 600, 800));
        label_11->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        label_2 = new QLabel(admini_check);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 170, 179, 39));
        scrollArea = new QScrollArea(admini_check);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 240, 481, 461));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 479, 459));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        label_11->raise();
        label->raise();
        layoutWidget->raise();
        label_10->raise();
        label_2->raise();
        scrollArea->raise();

        retranslateUi(admini_check);

        QMetaObject::connectSlotsByName(admini_check);
    } // setupUi

    void retranslateUi(QWidget *admini_check)
    {
        admini_check->setWindowTitle(QCoreApplication::translate("admini_check", "\346\236\234\347\262\222\346\251\231\345\244\226\345\215\226-\347\256\241\347\220\206\347\253\257", nullptr));
        label->setText(QCoreApplication::translate("admini_check", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">\350\264\255\347\211\251\346\227\245\345\277\227\345\210\227\350\241\250</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_check", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_check", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_check", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_2->setText(QCoreApplication::translate("admini_check", "\350\256\242\345\215\225\345\217\267\346\220\234\347\264\242\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_check: public Ui_admini_check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_CHECK_H
