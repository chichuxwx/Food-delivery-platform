/********************************************************************************
** Form generated from reading UI file 'good_act.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_ACT_H
#define UI_GOOD_ACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good_act
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_value;
    QLineEdit *lineEdit_value_desc;

    void setupUi(QWidget *good_act)
    {
        if (good_act->objectName().isEmpty())
            good_act->setObjectName("good_act");
        good_act->resize(600, 800);
        good_act->setMinimumSize(QSize(600, 800));
        good_act->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(good_act);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        QFont font;
        font.setPointSize(9);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(good_act);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 340, 400, 40));
        pushButton_2->setMinimumSize(QSize(400, 40));
        pushButton_2->setMaximumSize(QSize(400, 40));
        QFont font1;
        font1.setPointSize(20);
        pushButton_2->setFont(font1);
        widget = new QWidget(good_act);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 90, 411, 130));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 50));
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        lineEdit_value = new QLineEdit(widget);
        lineEdit_value->setObjectName("lineEdit_value");
        lineEdit_value->setMinimumSize(QSize(200, 50));
        lineEdit_value->setMaximumSize(QSize(200, 50));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit_value);

        lineEdit_value_desc = new QLineEdit(widget);
        lineEdit_value_desc->setObjectName("lineEdit_value_desc");
        lineEdit_value_desc->setMinimumSize(QSize(200, 50));
        lineEdit_value_desc->setMaximumSize(QSize(200, 50));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_value_desc);


        retranslateUi(good_act);

        QMetaObject::connectSlotsByName(good_act);
    } // setupUi

    void retranslateUi(QWidget *good_act)
    {
        good_act->setWindowTitle(QCoreApplication::translate("good_act", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("good_act", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("good_act", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("good_act", "\346\273\241\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("good_act", "\347\253\213\345\207\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_act: public Ui_good_act {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_ACT_H
