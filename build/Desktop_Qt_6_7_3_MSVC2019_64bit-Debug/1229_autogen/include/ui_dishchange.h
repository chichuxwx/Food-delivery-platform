/********************************************************************************
** Form generated from reading UI file 'dishchange.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHCHANGE_H
#define UI_DISHCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dishchange
{
public:
    QPushButton *pushButton_back;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_dish;
    QLabel *label_3;
    QLineEdit *lineEdit_price;
    QLabel *label_4;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *dishchange)
    {
        if (dishchange->objectName().isEmpty())
            dishchange->setObjectName("dishchange");
        dishchange->resize(600, 800);
        dishchange->setMinimumSize(QSize(600, 800));
        pushButton_back = new QPushButton(dishchange);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(10, 10, 60, 20));
        pushButton_back->setMinimumSize(QSize(60, 20));
        pushButton_back->setMaximumSize(QSize(60, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(9);
        pushButton_back->setFont(font);
        pushButton = new QPushButton(dishchange);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 90, 400, 40));
        pushButton->setMinimumSize(QSize(400, 40));
        pushButton->setMaximumSize(QSize(400, 40));
        QFont font1;
        font1.setPointSize(20);
        pushButton->setFont(font1);
        widget = new QWidget(dishchange);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 200, 560, 202));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 3, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 30));
        label_2->setMaximumSize(QSize(50, 30));
        QFont font2;
        font2.setPointSize(15);
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        lineEdit_dish = new QLineEdit(widget);
        lineEdit_dish->setObjectName("lineEdit_dish");
        lineEdit_dish->setMinimumSize(QSize(300, 50));
        lineEdit_dish->setMaximumSize(QSize(300, 50));

        gridLayout->addWidget(lineEdit_dish, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(50, 30));
        label_3->setMaximumSize(QSize(50, 30));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        lineEdit_price = new QLineEdit(widget);
        lineEdit_price->setObjectName("lineEdit_price");
        lineEdit_price->setMinimumSize(QSize(300, 50));
        lineEdit_price->setMaximumSize(QSize(300, 50));

        gridLayout->addWidget(lineEdit_price, 1, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 30));
        label_4->setMaximumSize(QSize(50, 30));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMinimumSize(QSize(300, 50));
        lineEdit_3->setMaximumSize(QSize(300, 50));

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);


        retranslateUi(dishchange);

        QMetaObject::connectSlotsByName(dishchange);
    } // setupUi

    void retranslateUi(QWidget *dishchange)
    {
        dishchange->setWindowTitle(QCoreApplication::translate("dishchange", "Form", nullptr));
        pushButton_back->setText(QCoreApplication::translate("dishchange", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("dishchange", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("dishchange", "\346\267\273\345\212\240\345\233\276\347\211\207", nullptr));
        label_2->setText(QCoreApplication::translate("dishchange", "\350\217\234\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("dishchange", "\344\273\267\346\240\274", nullptr));
        label_4->setText(QCoreApplication::translate("dishchange", "\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dishchange: public Ui_dishchange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHCHANGE_H
