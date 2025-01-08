/********************************************************************************
** Form generated from reading UI file 'consumer_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMER_INTERFACE_H
#define UI_CONSUMER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consumer_interface
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_7;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Consumer_interface)
    {
        if (Consumer_interface->objectName().isEmpty())
            Consumer_interface->setObjectName("Consumer_interface");
        Consumer_interface->resize(600, 800);
        Consumer_interface->setMinimumSize(QSize(600, 800));
        Consumer_interface->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(Consumer_interface);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        lineEdit = new QLineEdit(Consumer_interface);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 40, 211, 20));
        label = new QLabel(Consumer_interface);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 40, 21, 16));
        widget = new QWidget(Consumer_interface);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 150, 291, 61));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 0, 3, 2, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        widget1 = new QWidget(Consumer_interface);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(150, 230, 291, 51));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget1);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout_2->addWidget(pushButton_6, 0, 3, 2, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_9 = new QLabel(widget1);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 1, 1, 1, 1);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 1, 2, 1, 1);

        widget2 = new QWidget(Consumer_interface);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget2);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);


        retranslateUi(Consumer_interface);

        QMetaObject::connectSlotsByName(Consumer_interface);
    } // setupUi

    void retranslateUi(QWidget *Consumer_interface)
    {
        Consumer_interface->setWindowTitle(QCoreApplication::translate("Consumer_interface", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Consumer_interface", "\351\200\200\345\207\272", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Consumer_interface", "\350\257\267\350\276\223\345\205\245\345\225\206\345\256\266\345\220\215\342\200\246\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("Consumer_interface", "\346\220\234\347\264\242", nullptr));
        label_2->setText(QCoreApplication::translate("Consumer_interface", "\345\233\276\347\211\2071", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Consumer_interface", "\350\277\233\345\205\245", nullptr));
        label_3->setText(QCoreApplication::translate("Consumer_interface", "\345\272\227\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("Consumer_interface", "\350\257\204\345\210\206", nullptr));
        label_5->setText(QCoreApplication::translate("Consumer_interface", "\350\267\235\347\246\273", nullptr));
        label_8->setText(QCoreApplication::translate("Consumer_interface", "\345\233\276\347\211\2072", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Consumer_interface", "\350\277\233\345\205\245", nullptr));
        label_6->setText(QCoreApplication::translate("Consumer_interface", "\345\272\227\345\220\215", nullptr));
        label_9->setText(QCoreApplication::translate("Consumer_interface", "\350\257\204\345\210\206", nullptr));
        label_7->setText(QCoreApplication::translate("Consumer_interface", "\350\267\235\347\246\273", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Consumer_interface", "\347\202\271\351\244\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Consumer_interface", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Consumer_interface", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consumer_interface: public Ui_Consumer_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMER_INTERFACE_H
