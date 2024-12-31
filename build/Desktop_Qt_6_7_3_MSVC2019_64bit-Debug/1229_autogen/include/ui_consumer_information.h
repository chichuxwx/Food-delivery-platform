/********************************************************************************
** Form generated from reading UI file 'consumer_information.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMER_INFORMATION_H
#define UI_CONSUMER_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consumer_Information
{
public:
    QLabel *label_img;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_name;
    QLabel *label_phone_number;
    QLabel *label_grade;
    QPushButton *pushButton_address;
    QPushButton *pushButton_service;
    QPushButton *pushButton_history_order;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_change_infom;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Consumer_Information)
    {
        if (Consumer_Information->objectName().isEmpty())
            Consumer_Information->setObjectName("Consumer_Information");
        Consumer_Information->resize(600, 800);
        Consumer_Information->setMinimumSize(QSize(600, 800));
        Consumer_Information->setMaximumSize(QSize(600, 800));
        label_img = new QLabel(Consumer_Information);
        label_img->setObjectName("label_img");
        label_img->setGeometry(QRect(10, 10, 100, 90));
        label_img->setMinimumSize(QSize(100, 90));
        label_img->setMaximumSize(QSize(100, 90));
        QFont font;
        font.setPointSize(20);
        label_img->setFont(font);
        label_img->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(Consumer_Information);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 10, 100, 30));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_3 = new QLabel(Consumer_Information);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 40, 100, 30));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setFont(font1);
        label_4 = new QLabel(Consumer_Information);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 70, 100, 30));
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        label_4->setFont(font1);
        label_name = new QLabel(Consumer_Information);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(230, 10, 250, 30));
        label_name->setMinimumSize(QSize(250, 30));
        label_name->setMaximumSize(QSize(250, 30));
        label_name->setFont(font1);
        label_phone_number = new QLabel(Consumer_Information);
        label_phone_number->setObjectName("label_phone_number");
        label_phone_number->setGeometry(QRect(230, 40, 250, 30));
        label_phone_number->setMinimumSize(QSize(250, 30));
        label_phone_number->setMaximumSize(QSize(250, 30));
        label_phone_number->setFont(font1);
        label_grade = new QLabel(Consumer_Information);
        label_grade->setObjectName("label_grade");
        label_grade->setGeometry(QRect(230, 70, 250, 30));
        label_grade->setMinimumSize(QSize(250, 30));
        label_grade->setMaximumSize(QSize(250, 30));
        label_grade->setFont(font1);
        pushButton_address = new QPushButton(Consumer_Information);
        pushButton_address->setObjectName("pushButton_address");
        pushButton_address->setGeometry(QRect(0, 120, 600, 100));
        pushButton_address->setMinimumSize(QSize(600, 100));
        pushButton_address->setFont(font);
        pushButton_service = new QPushButton(Consumer_Information);
        pushButton_service->setObjectName("pushButton_service");
        pushButton_service->setGeometry(QRect(0, 320, 600, 100));
        pushButton_service->setMinimumSize(QSize(600, 100));
        pushButton_service->setFont(font);
        pushButton_history_order = new QPushButton(Consumer_Information);
        pushButton_history_order->setObjectName("pushButton_history_order");
        pushButton_history_order->setGeometry(QRect(0, 220, 600, 100));
        pushButton_history_order->setMinimumSize(QSize(600, 100));
        pushButton_history_order->setFont(font);
        pushButton_exit = new QPushButton(Consumer_Information);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(0, 520, 600, 100));
        pushButton_exit->setMinimumSize(QSize(600, 100));
        pushButton_exit->setFont(font);
        pushButton_change_infom = new QPushButton(Consumer_Information);
        pushButton_change_infom->setObjectName("pushButton_change_infom");
        pushButton_change_infom->setGeometry(QRect(0, 420, 600, 100));
        pushButton_change_infom->setMinimumSize(QSize(600, 100));
        pushButton_change_infom->setFont(font);
        pushButton_4 = new QPushButton(Consumer_Information);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 750, 56, 18));
        pushButton_3 = new QPushButton(Consumer_Information);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 750, 56, 18));
        pushButton_2 = new QPushButton(Consumer_Information);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 750, 56, 18));

        retranslateUi(Consumer_Information);

        QMetaObject::connectSlotsByName(Consumer_Information);
    } // setupUi

    void retranslateUi(QWidget *Consumer_Information)
    {
        Consumer_Information->setWindowTitle(QCoreApplication::translate("Consumer_Information", "Form", nullptr));
        label_img->setText(QCoreApplication::translate("Consumer_Information", "\345\233\276\347\211\207", nullptr));
        label_2->setText(QCoreApplication::translate("Consumer_Information", "\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("Consumer_Information", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Consumer_Information", "\347\255\211\347\272\247", nullptr));
        label_name->setText(QString());
        label_phone_number->setText(QString());
        label_grade->setText(QString());
        pushButton_address->setText(QCoreApplication::translate("Consumer_Information", "\346\210\221\347\232\204\345\234\260\345\235\200", nullptr));
        pushButton_service->setText(QCoreApplication::translate("Consumer_Information", "\345\256\242\346\234\215\344\270\255\345\277\203", nullptr));
        pushButton_history_order->setText(QCoreApplication::translate("Consumer_Information", "\345\216\206\345\217\262\350\256\242\345\215\225", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Consumer_Information", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_change_infom->setText(QCoreApplication::translate("Consumer_Information", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Consumer_Information", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Consumer_Information", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Consumer_Information", "\347\202\271\351\244\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consumer_Information: public Ui_Consumer_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMER_INFORMATION_H
