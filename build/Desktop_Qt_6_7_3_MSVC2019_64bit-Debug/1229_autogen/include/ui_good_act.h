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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good_act
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_value_desc;
    QLineEdit *lineEdit_value;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *good_act)
    {
        if (good_act->objectName().isEmpty())
            good_act->setObjectName("good_act");
        good_act->resize(600, 800);
        good_act->setMinimumSize(QSize(600, 800));
        good_act->setMaximumSize(QSize(600, 800));
        label = new QLabel(good_act);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 100, 100, 50));
        label->setMinimumSize(QSize(100, 50));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(good_act);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 150, 80));
        pushButton->setMinimumSize(QSize(150, 80));
        pushButton->setMaximumSize(QSize(150, 80));
        pushButton->setFont(font);
        lineEdit_value_desc = new QLineEdit(good_act);
        lineEdit_value_desc->setObjectName("lineEdit_value_desc");
        lineEdit_value_desc->setGeometry(QRect(390, 160, 200, 100));
        lineEdit_value_desc->setMinimumSize(QSize(200, 100));
        lineEdit_value = new QLineEdit(good_act);
        lineEdit_value->setObjectName("lineEdit_value");
        lineEdit_value->setGeometry(QRect(10, 160, 200, 100));
        lineEdit_value->setMinimumSize(QSize(200, 100));
        label_2 = new QLabel(good_act);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 100, 100, 50));
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setFont(font);
        pushButton_2 = new QPushButton(good_act);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 340, 200, 100));
        pushButton_2->setMinimumSize(QSize(200, 100));
        pushButton_2->setMaximumSize(QSize(200, 100));
        pushButton_2->setFont(font);

        retranslateUi(good_act);

        QMetaObject::connectSlotsByName(good_act);
    } // setupUi

    void retranslateUi(QWidget *good_act)
    {
        good_act->setWindowTitle(QCoreApplication::translate("good_act", "Form", nullptr));
        label->setText(QCoreApplication::translate("good_act", "\346\273\241\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("good_act", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("good_act", "\347\253\213\345\207\217\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("good_act", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_act: public Ui_good_act {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_ACT_H
