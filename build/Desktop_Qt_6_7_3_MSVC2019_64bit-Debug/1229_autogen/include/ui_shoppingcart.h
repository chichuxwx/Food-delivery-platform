/********************************************************************************
** Form generated from reading UI file 'shoppingcart.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCART_H
#define UI_SHOPPINGCART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shoppingcart
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QSpinBox *spinBox_4;
    QLabel *label_21;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QSpinBox *spinBox_2;
    QLabel *label_13;

    void setupUi(QWidget *Shoppingcart)
    {
        if (Shoppingcart->objectName().isEmpty())
            Shoppingcart->setObjectName("Shoppingcart");
        Shoppingcart->resize(600, 800);
        Shoppingcart->setMinimumSize(QSize(600, 800));
        Shoppingcart->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(Shoppingcart);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton_8 = new QPushButton(Shoppingcart);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(470, 750, 100, 30));
        pushButton_8->setMinimumSize(QSize(100, 30));
        pushButton_8->setMaximumSize(QSize(100, 30));
        label = new QLabel(Shoppingcart);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 740, 200, 50));
        label->setMinimumSize(QSize(200, 50));
        label_2 = new QLabel(Shoppingcart);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 700, 200, 50));
        label_2->setMinimumSize(QSize(200, 50));
        label_3 = new QLabel(Shoppingcart);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 50, 200, 60));
        label_3->setMinimumSize(QSize(200, 60));
        layoutWidget = new QWidget(Shoppingcart);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 260, 321, 91));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(20);
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setMinimumSize(QSize(100, 20));

        gridLayout_3->addWidget(label_18, 2, 1, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName("label_20");

        gridLayout_3->addWidget(label_20, 0, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setEnabled(true);
        spinBox_4->setMinimumSize(QSize(100, 20));
        spinBox_4->setMaximumSize(QSize(100, 20));

        gridLayout_3->addWidget(spinBox_4, 1, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");
        label_21->setMinimumSize(QSize(100, 20));
        label_21->setMaximumSize(QSize(100, 20));

        gridLayout_3->addWidget(label_21, 3, 1, 1, 1);

        widget = new QWidget(Shoppingcart);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 128, 321, 91));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(100, 20));

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setEnabled(true);
        spinBox_2->setMinimumSize(QSize(100, 20));
        spinBox_2->setMaximumSize(QSize(100, 20));

        gridLayout->addWidget(spinBox_2, 1, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(100, 20));
        label_13->setMaximumSize(QSize(100, 20));

        gridLayout->addWidget(label_13, 3, 1, 1, 1);


        retranslateUi(Shoppingcart);

        QMetaObject::connectSlotsByName(Shoppingcart);
    } // setupUi

    void retranslateUi(QWidget *Shoppingcart)
    {
        Shoppingcart->setWindowTitle(QCoreApplication::translate("Shoppingcart", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Shoppingcart", "\351\200\200\345\207\272", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Shoppingcart", "\347\273\223\347\256\227", nullptr));
        label->setText(QCoreApplication::translate("Shoppingcart", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">\346\200\273\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Shoppingcart", "<html><head/><body><p><span style=\" font-size:18pt;\">\351\200\211\346\213\251\344\274\230\346\203\240\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Shoppingcart", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\350\264\255\347\211\251\350\275\246</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("Shoppingcart", "\346\225\260\351\207\217", nullptr));
        label_19->setText(QCoreApplication::translate("Shoppingcart", "\350\217\234\345\220\215", nullptr));
        label_20->setText(QCoreApplication::translate("Shoppingcart", "\345\233\276\347\211\2071", nullptr));
        label_21->setText(QCoreApplication::translate("Shoppingcart", "\344\273\267\346\240\274", nullptr));
        label_10->setText(QCoreApplication::translate("Shoppingcart", "\346\225\260\351\207\217", nullptr));
        label_12->setText(QCoreApplication::translate("Shoppingcart", "\350\217\234\345\220\215", nullptr));
        label_11->setText(QCoreApplication::translate("Shoppingcart", "\345\233\276\347\211\2071", nullptr));
        label_13->setText(QCoreApplication::translate("Shoppingcart", "\344\273\267\346\240\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shoppingcart: public Ui_Shoppingcart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCART_H
