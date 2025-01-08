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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consumer_Information
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_address;
    QPushButton *pushButton_history_order;
    QPushButton *pushButton_service;
    QPushButton *pushButton_change_infom;
    QPushButton *pushButton_exit;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QLabel *label_img;
    QLabel *label_2;
    QLabel *label_name;
    QLabel *label_3;
    QLabel *label_phone_number;
    QLabel *label_4;
    QLabel *label_grade;

    void setupUi(QWidget *Consumer_Information)
    {
        if (Consumer_Information->objectName().isEmpty())
            Consumer_Information->setObjectName("Consumer_Information");
        Consumer_Information->resize(600, 800);
        Consumer_Information->setMinimumSize(QSize(600, 800));
        Consumer_Information->setMaximumSize(QSize(600, 800));
        widget = new QWidget(Consumer_Information);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);

        widget1 = new QWidget(Consumer_Information);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 230, 601, 281));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_address = new QPushButton(widget1);
        pushButton_address->setObjectName("pushButton_address");
        sizePolicy.setHeightForWidth(pushButton_address->sizePolicy().hasHeightForWidth());
        pushButton_address->setSizePolicy(sizePolicy);
        pushButton_address->setMinimumSize(QSize(400, 40));
        pushButton_address->setMaximumSize(QSize(400, 40));
        QFont font;
        font.setPointSize(12);
        pushButton_address->setFont(font);

        verticalLayout->addWidget(pushButton_address, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_history_order = new QPushButton(widget1);
        pushButton_history_order->setObjectName("pushButton_history_order");
        sizePolicy.setHeightForWidth(pushButton_history_order->sizePolicy().hasHeightForWidth());
        pushButton_history_order->setSizePolicy(sizePolicy);
        pushButton_history_order->setMinimumSize(QSize(400, 40));
        pushButton_history_order->setMaximumSize(QSize(400, 40));
        pushButton_history_order->setFont(font);

        verticalLayout->addWidget(pushButton_history_order, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_service = new QPushButton(widget1);
        pushButton_service->setObjectName("pushButton_service");
        sizePolicy.setHeightForWidth(pushButton_service->sizePolicy().hasHeightForWidth());
        pushButton_service->setSizePolicy(sizePolicy);
        pushButton_service->setMinimumSize(QSize(400, 40));
        pushButton_service->setMaximumSize(QSize(400, 40));
        pushButton_service->setFont(font);

        verticalLayout->addWidget(pushButton_service, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_change_infom = new QPushButton(widget1);
        pushButton_change_infom->setObjectName("pushButton_change_infom");
        sizePolicy.setHeightForWidth(pushButton_change_infom->sizePolicy().hasHeightForWidth());
        pushButton_change_infom->setSizePolicy(sizePolicy);
        pushButton_change_infom->setMinimumSize(QSize(400, 40));
        pushButton_change_infom->setMaximumSize(QSize(400, 40));
        pushButton_change_infom->setFont(font);

        verticalLayout->addWidget(pushButton_change_infom, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_exit = new QPushButton(widget1);
        pushButton_exit->setObjectName("pushButton_exit");
        sizePolicy.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy);
        pushButton_exit->setMinimumSize(QSize(400, 40));
        pushButton_exit->setMaximumSize(QSize(400, 40));
        pushButton_exit->setFont(font);

        verticalLayout->addWidget(pushButton_exit, 0, Qt::AlignmentFlag::AlignHCenter);

        widget2 = new QWidget(Consumer_Information);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(50, 70, 491, 121));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_img = new QLabel(widget2);
        label_img->setObjectName("label_img");
        label_img->setMinimumSize(QSize(100, 90));
        label_img->setMaximumSize(QSize(100, 90));
        QFont font1;
        font1.setPointSize(20);
        label_img->setFont(font1);
        label_img->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_img, 0, 0, 3, 1);

        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        QFont font2;
        font2.setPointSize(15);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_name = new QLabel(widget2);
        label_name->setObjectName("label_name");
        label_name->setMinimumSize(QSize(250, 30));
        label_name->setMaximumSize(QSize(250, 30));
        label_name->setFont(font2);

        gridLayout->addWidget(label_name, 0, 2, 1, 1);

        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_phone_number = new QLabel(widget2);
        label_phone_number->setObjectName("label_phone_number");
        label_phone_number->setMinimumSize(QSize(250, 30));
        label_phone_number->setMaximumSize(QSize(250, 30));
        label_phone_number->setFont(font2);

        gridLayout->addWidget(label_phone_number, 1, 2, 1, 1);

        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_grade = new QLabel(widget2);
        label_grade->setObjectName("label_grade");
        label_grade->setMinimumSize(QSize(250, 30));
        label_grade->setMaximumSize(QSize(250, 30));
        label_grade->setFont(font2);

        gridLayout->addWidget(label_grade, 2, 2, 1, 1);


        retranslateUi(Consumer_Information);

        QMetaObject::connectSlotsByName(Consumer_Information);
    } // setupUi

    void retranslateUi(QWidget *Consumer_Information)
    {
        Consumer_Information->setWindowTitle(QCoreApplication::translate("Consumer_Information", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Consumer_Information", "\347\202\271\351\244\220", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Consumer_Information", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Consumer_Information", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_address->setText(QCoreApplication::translate("Consumer_Information", "\346\210\221\347\232\204\345\234\260\345\235\200", nullptr));
        pushButton_history_order->setText(QCoreApplication::translate("Consumer_Information", "\345\216\206\345\217\262\350\256\242\345\215\225", nullptr));
        pushButton_service->setText(QCoreApplication::translate("Consumer_Information", "\345\256\242\346\234\215\344\270\255\345\277\203", nullptr));
        pushButton_change_infom->setText(QCoreApplication::translate("Consumer_Information", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Consumer_Information", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label_img->setText(QCoreApplication::translate("Consumer_Information", "\345\233\276\347\211\207", nullptr));
        label_2->setText(QCoreApplication::translate("Consumer_Information", "\345\220\215\347\247\260", nullptr));
        label_name->setText(QString());
        label_3->setText(QCoreApplication::translate("Consumer_Information", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_phone_number->setText(QString());
        label_4->setText(QCoreApplication::translate("Consumer_Information", "\347\255\211\347\272\247", nullptr));
        label_grade->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Consumer_Information: public Ui_Consumer_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMER_INFORMATION_H
