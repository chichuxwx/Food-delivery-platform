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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consumer_interface
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

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
        layoutWidget = new QWidget(Consumer_interface);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);

        scrollArea = new QScrollArea(Consumer_interface);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 110, 471, 581));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 469, 579));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Consumer_interface);

        QMetaObject::connectSlotsByName(Consumer_interface);
    } // setupUi

    void retranslateUi(QWidget *Consumer_interface)
    {
        Consumer_interface->setWindowTitle(QCoreApplication::translate("Consumer_interface", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Consumer_interface", "\351\200\200\345\207\272", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Consumer_interface", "\350\257\267\350\276\223\345\205\245\345\225\206\345\256\266\345\220\215\342\200\246\342\200\246", nullptr));
        label->setText(QCoreApplication::translate("Consumer_interface", "\346\220\234\347\264\242", nullptr));
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
