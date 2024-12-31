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
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *Consumer_interface)
    {
        if (Consumer_interface->objectName().isEmpty())
            Consumer_interface->setObjectName("Consumer_interface");
        Consumer_interface->resize(600, 800);
        Consumer_interface->setMinimumSize(QSize(600, 800));
        Consumer_interface->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(Consumer_interface);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 56, 18));
        lineEdit = new QLineEdit(Consumer_interface);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 40, 211, 20));
        label = new QLabel(Consumer_interface);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 40, 21, 16));
        pushButton_2 = new QPushButton(Consumer_interface);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 760, 56, 18));
        pushButton_3 = new QPushButton(Consumer_interface);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 760, 56, 18));
        pushButton_4 = new QPushButton(Consumer_interface);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 760, 56, 18));
        label_2 = new QLabel(Consumer_interface);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 100, 40, 12));
        label_3 = new QLabel(Consumer_interface);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 120, 40, 12));
        label_4 = new QLabel(Consumer_interface);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 120, 40, 12));
        label_5 = new QLabel(Consumer_interface);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 120, 40, 12));
        pushButton_5 = new QPushButton(Consumer_interface);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(330, 110, 56, 18));
        pushButton_6 = new QPushButton(Consumer_interface);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(330, 230, 56, 18));
        label_6 = new QLabel(Consumer_interface);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 240, 40, 12));
        label_7 = new QLabel(Consumer_interface);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 240, 40, 12));
        label_8 = new QLabel(Consumer_interface);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(170, 220, 40, 12));
        label_9 = new QLabel(Consumer_interface);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(210, 240, 40, 12));

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
        label_2->setText(QCoreApplication::translate("Consumer_interface", "\345\233\276\347\211\2071", nullptr));
        label_3->setText(QCoreApplication::translate("Consumer_interface", "\345\272\227\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("Consumer_interface", "\350\257\204\345\210\206", nullptr));
        label_5->setText(QCoreApplication::translate("Consumer_interface", "\350\267\235\347\246\273", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Consumer_interface", "\350\277\233\345\205\245", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Consumer_interface", "\350\277\233\345\205\245", nullptr));
        label_6->setText(QCoreApplication::translate("Consumer_interface", "\345\272\227\345\220\215", nullptr));
        label_7->setText(QCoreApplication::translate("Consumer_interface", "\350\267\235\347\246\273", nullptr));
        label_8->setText(QCoreApplication::translate("Consumer_interface", "\345\233\276\347\211\2072", nullptr));
        label_9->setText(QCoreApplication::translate("Consumer_interface", "\350\257\204\345\210\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consumer_interface: public Ui_Consumer_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMER_INTERFACE_H
