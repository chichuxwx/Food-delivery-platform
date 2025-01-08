/********************************************************************************
** Form generated from reading UI file 'inform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORM_H
#define UI_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inform
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_name;
    QLabel *label_3;
    QLabel *label_phone;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_order;
    QPushButton *pushButton_workbench;
    QPushButton *pushButton_self_inform;

    void setupUi(QWidget *inform)
    {
        if (inform->objectName().isEmpty())
            inform->setObjectName("inform");
        inform->resize(600, 800);
        inform->setMinimumSize(QSize(600, 800));
        inform->setMaximumSize(QSize(600, 800));
        widget = new QWidget(inform);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 80, 501, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(120, 100));
        label->setMaximumSize(QSize(120, 100));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 2, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setMaximumSize(QSize(100, 50));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_name = new QLabel(widget);
        label_name->setObjectName("label_name");
        label_name->setMinimumSize(QSize(200, 50));
        label_name->setSizeIncrement(QSize(200, 50));
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        label_phone = new QLabel(widget);
        label_phone->setObjectName("label_phone");
        label_phone->setMinimumSize(QSize(200, 50));
        label_phone->setSizeIncrement(QSize(200, 50));
        label_phone->setFont(font);

        gridLayout->addWidget(label_phone, 1, 2, 1, 1);

        widget1 = new QWidget(inform);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 340, 601, 86));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(400, 40));
        pushButton->setMaximumSize(QSize(400, 40));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton, 0, Qt::AlignmentFlag::AlignHCenter);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(400, 40));
        pushButton_2->setMaximumSize(QSize(400, 40));
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2, 0, Qt::AlignmentFlag::AlignHCenter);

        widget2 = new QWidget(inform);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_order = new QPushButton(widget2);
        pushButton_order->setObjectName("pushButton_order");
        pushButton_order->setMinimumSize(QSize(175, 40));
        pushButton_order->setMaximumSize(QSize(175, 40));
        QFont font2;
        font2.setPointSize(9);
        pushButton_order->setFont(font2);

        horizontalLayout->addWidget(pushButton_order);

        pushButton_workbench = new QPushButton(widget2);
        pushButton_workbench->setObjectName("pushButton_workbench");
        pushButton_workbench->setMinimumSize(QSize(175, 40));
        pushButton_workbench->setMaximumSize(QSize(175, 40));
        pushButton_workbench->setFont(font2);

        horizontalLayout->addWidget(pushButton_workbench);

        pushButton_self_inform = new QPushButton(widget2);
        pushButton_self_inform->setObjectName("pushButton_self_inform");
        pushButton_self_inform->setMinimumSize(QSize(175, 40));
        pushButton_self_inform->setMaximumSize(QSize(175, 40));
        pushButton_self_inform->setFont(font2);

        horizontalLayout->addWidget(pushButton_self_inform);


        retranslateUi(inform);

        QMetaObject::connectSlotsByName(inform);
    } // setupUi

    void retranslateUi(QWidget *inform)
    {
        inform->setWindowTitle(QCoreApplication::translate("inform", "Form", nullptr));
        label->setText(QCoreApplication::translate("inform", "\345\233\276\347\211\207", nullptr));
        label_2->setText(QCoreApplication::translate("inform", "\345\272\227\345\220\215", nullptr));
        label_name->setText(QCoreApplication::translate("inform", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("inform", "\347\224\265\350\257\235", nullptr));
        label_phone->setText(QCoreApplication::translate("inform", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("inform", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("inform", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_order->setText(QCoreApplication::translate("inform", "\350\256\242\345\215\225", nullptr));
        pushButton_workbench->setText(QCoreApplication::translate("inform", "\345\267\245\344\275\234\345\217\260", nullptr));
        pushButton_self_inform->setText(QCoreApplication::translate("inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inform: public Ui_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORM_H
