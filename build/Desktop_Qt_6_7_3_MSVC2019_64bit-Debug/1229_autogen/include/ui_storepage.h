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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Storepage
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_8;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_6;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QPushButton *pushButton_3;
    QSpinBox *spinBox_2;
    QLabel *label_12;
    QPushButton *pushButton_7;
    QLabel *label_10;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Storepage)
    {
        if (Storepage->objectName().isEmpty())
            Storepage->setObjectName("Storepage");
        Storepage->resize(600, 800);
        Storepage->setMinimumSize(QSize(600, 800));
        Storepage->setMaximumSize(QSize(600, 800));
        pushButton_2 = new QPushButton(Storepage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 60, 20));
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setMaximumSize(QSize(60, 20));
        label = new QLabel(Storepage);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 30, 200, 60));
        label->setMinimumSize(QSize(200, 60));
        label->setMaximumSize(QSize(200, 60));
        pushButton_8 = new QPushButton(Storepage);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(30, 730, 100, 30));
        pushButton_8->setMinimumSize(QSize(100, 30));
        pushButton_8->setMaximumSize(QSize(100, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\273\206\351\273\221")});
        pushButton_8->setFont(font);
        widget = new QWidget(Storepage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(146, 160, 321, 101));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 0, 4, 2, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(100, 30));
        pushButton_6->setMaximumSize(QSize(100, 30));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 2, 4, 1, 1);

        widget1 = new QWidget(Storepage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(146, 279, 321, 101));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget1);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(100, 30));
        pushButton_3->setMaximumSize(QSize(100, 30));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);

        spinBox_2 = new QSpinBox(widget1);
        spinBox_2->setObjectName("spinBox_2");

        gridLayout_2->addWidget(spinBox_2, 0, 4, 2, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(100, 30));
        pushButton_7->setMaximumSize(QSize(100, 30));
        pushButton_7->setFont(font);

        gridLayout_2->addWidget(pushButton_7, 2, 4, 1, 1);

        label_10 = new QLabel(widget1);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        widget2 = new QWidget(Storepage);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(230, 80, 151, 32));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(60, 30));
        label_2->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);


        retranslateUi(Storepage);

        QMetaObject::connectSlotsByName(Storepage);
    } // setupUi

    void retranslateUi(QWidget *Storepage)
    {
        Storepage->setWindowTitle(QCoreApplication::translate("Storepage", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Storepage", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Storepage", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\345\225\206\345\256\266\345\220\215\347\247\260</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Storepage", "\350\264\255\347\211\251\350\275\246", nullptr));
        label_6->setText(QCoreApplication::translate("Storepage", "\350\217\234\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("Storepage", "\350\257\246\346\203\205", nullptr));
        label_8->setText(QCoreApplication::translate("Storepage", "\345\233\276\347\211\2071", nullptr));
        label_9->setText(QCoreApplication::translate("Storepage", "\350\257\204\345\210\206", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Storepage", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        label_11->setText(QCoreApplication::translate("Storepage", "\345\233\276\347\211\2072", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Storepage", "\350\257\246\346\203\205", nullptr));
        label_12->setText(QCoreApplication::translate("Storepage", "\350\217\234\345\220\215", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Storepage", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        label_10->setText(QCoreApplication::translate("Storepage", "\350\257\204\345\210\206", nullptr));
        label_2->setText(QCoreApplication::translate("Storepage", "\345\225\206\345\256\266\350\257\204\345\210\206", nullptr));
        label_3->setText(QCoreApplication::translate("Storepage", "//\350\277\231\351\207\214\345\272\224\350\257\245\346\234\211\350\257\204\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Storepage: public Ui_Storepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREPAGE_H
