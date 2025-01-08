/********************************************************************************
** Form generated from reading UI file 'shangjia.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHANGJIA_H
#define UI_SHANGJIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shangjia
{
public:
    QPushButton *pushButton_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QLabel *label;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;

    void setupUi(QWidget *shangjia)
    {
        if (shangjia->objectName().isEmpty())
            shangjia->setObjectName("shangjia");
        shangjia->resize(600, 800);
        pushButton_7 = new QPushButton(shangjia);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(100, 400, 400, 40));
        pushButton_7->setMinimumSize(QSize(400, 40));
        pushButton_7->setMaximumSize(QSize(400, 40));
        layoutWidget = new QWidget(shangjia);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        pushButton_4->setFont(font);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(175, 40));
        pushButton_6->setMaximumSize(QSize(175, 40));
        pushButton_6->setFont(font);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(175, 40));
        pushButton_5->setMaximumSize(QSize(175, 40));
        pushButton_5->setFont(font);

        horizontalLayout->addWidget(pushButton_5);

        layoutWidget1 = new QWidget(shangjia);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 601, 42));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(175, 40));
        pushButton->setMaximumSize(QSize(175, 40));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout_2->addWidget(pushButton_3);

        layoutWidget2 = new QWidget(shangjia);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(90, 170, 421, 208));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget2);
        textBrowser->setObjectName("textBrowser");

        gridLayout->addWidget(textBrowser, 0, 0, 1, 2);

        label = new QLabel(layoutWidget2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 2, 1);

        textBrowser_2 = new QTextBrowser(layoutWidget2);
        textBrowser_2->setObjectName("textBrowser_2");

        gridLayout->addWidget(textBrowser_2, 1, 1, 1, 1);

        textBrowser_3 = new QTextBrowser(layoutWidget2);
        textBrowser_3->setObjectName("textBrowser_3");

        gridLayout->addWidget(textBrowser_3, 2, 1, 1, 1);


        retranslateUi(shangjia);

        QMetaObject::connectSlotsByName(shangjia);
    } // setupUi

    void retranslateUi(QWidget *shangjia)
    {
        shangjia->setWindowTitle(QCoreApplication::translate("shangjia", "Form", nullptr));
        pushButton_7->setText(QCoreApplication::translate("shangjia", "\346\216\245\345\215\225", nullptr));
        pushButton_4->setText(QCoreApplication::translate("shangjia", "\350\256\242\345\215\225", nullptr));
        pushButton_6->setText(QCoreApplication::translate("shangjia", "\345\267\245\344\275\234\345\217\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("shangjia", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("shangjia", "\346\226\260\344\273\273\345\212\241", nullptr));
        pushButton_2->setText(QCoreApplication::translate("shangjia", "\345\276\205\351\200\201\350\276\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("shangjia", "\345\267\262\351\200\201\350\276\276", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("shangjia", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\256\242\345\215\2251</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("shangjia", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("shangjia", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\217\234\345\223\201\345\217\212\350\247\204\346\240\274</p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("shangjia", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\234\260\345\235\200\345\217\212\345\244\207\346\263\250</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shangjia: public Ui_shangjia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHANGJIA_H
