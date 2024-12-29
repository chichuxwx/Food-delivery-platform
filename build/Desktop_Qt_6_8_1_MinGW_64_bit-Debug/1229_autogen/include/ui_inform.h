/********************************************************************************
** Form generated from reading UI file 'inform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORM_H
#define UI_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inform
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_name;
    QLabel *label_phone;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_order;
    QPushButton *pushButton_self_inform;
    QPushButton *pushButton_workbench;

    void setupUi(QWidget *inform)
    {
        if (inform->objectName().isEmpty())
            inform->setObjectName("inform");
        inform->resize(600, 800);
        inform->setMinimumSize(QSize(600, 800));
        inform->setMaximumSize(QSize(600, 800));
        label = new QLabel(inform);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 120, 100));
        label->setMinimumSize(QSize(120, 100));
        label->setMaximumSize(QSize(120, 100));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(inform);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 10, 100, 50));
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setPointSize(20);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(inform);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 60, 100, 50));
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_name = new QLabel(inform);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(260, 10, 200, 50));
        label_name->setMinimumSize(QSize(200, 50));
        label_name->setSizeIncrement(QSize(200, 50));
        label_name->setFont(font1);
        label_phone = new QLabel(inform);
        label_phone->setObjectName("label_phone");
        label_phone->setGeometry(QRect(260, 60, 200, 50));
        label_phone->setMinimumSize(QSize(200, 50));
        label_phone->setSizeIncrement(QSize(200, 50));
        label_phone->setFont(font1);
        pushButton = new QPushButton(inform);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 130, 600, 100));
        pushButton->setMinimumSize(QSize(600, 100));
        pushButton->setMaximumSize(QSize(600, 100));
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(inform);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 230, 600, 100));
        pushButton_2->setMinimumSize(QSize(600, 100));
        pushButton_2->setMaximumSize(QSize(600, 100));
        pushButton_2->setFont(font1);
        pushButton_order = new QPushButton(inform);
        pushButton_order->setObjectName("pushButton_order");
        pushButton_order->setGeometry(QRect(0, 700, 200, 100));
        pushButton_order->setMinimumSize(QSize(200, 100));
        pushButton_order->setMaximumSize(QSize(200, 30));
        pushButton_order->setFont(font1);
        pushButton_self_inform = new QPushButton(inform);
        pushButton_self_inform->setObjectName("pushButton_self_inform");
        pushButton_self_inform->setGeometry(QRect(400, 700, 200, 100));
        pushButton_self_inform->setMinimumSize(QSize(200, 100));
        pushButton_self_inform->setMaximumSize(QSize(200, 100));
        pushButton_self_inform->setFont(font1);
        pushButton_workbench = new QPushButton(inform);
        pushButton_workbench->setObjectName("pushButton_workbench");
        pushButton_workbench->setGeometry(QRect(200, 700, 200, 100));
        pushButton_workbench->setMinimumSize(QSize(200, 100));
        pushButton_workbench->setMaximumSize(QSize(200, 100));
        pushButton_workbench->setFont(font1);

        retranslateUi(inform);

        QMetaObject::connectSlotsByName(inform);
    } // setupUi

    void retranslateUi(QWidget *inform)
    {
        inform->setWindowTitle(QCoreApplication::translate("inform", "Form", nullptr));
        label->setText(QCoreApplication::translate("inform", "\345\233\276\347\211\207", nullptr));
        label_2->setText(QCoreApplication::translate("inform", "\345\272\227\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("inform", "\347\224\265\350\257\235", nullptr));
        label_name->setText(QCoreApplication::translate("inform", "TextLabel", nullptr));
        label_phone->setText(QCoreApplication::translate("inform", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("inform", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("inform", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_order->setText(QCoreApplication::translate("inform", "\350\256\242\345\215\225", nullptr));
        pushButton_self_inform->setText(QCoreApplication::translate("inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_workbench->setText(QCoreApplication::translate("inform", "\345\267\245\344\275\234\345\217\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inform: public Ui_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORM_H
