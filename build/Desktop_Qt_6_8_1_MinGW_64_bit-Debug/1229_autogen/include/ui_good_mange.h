/********************************************************************************
** Form generated from reading UI file 'good_mange.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_MANGE_H
#define UI_GOOD_MANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good_mange
{
public:
    QPushButton *pushButton_back;
    QLabel *label;
    QPushButton *pushButton_add_good;
    QListWidget *listWidget_item_inform;

    void setupUi(QWidget *good_mange)
    {
        if (good_mange->objectName().isEmpty())
            good_mange->setObjectName("good_mange");
        good_mange->resize(600, 800);
        good_mange->setMinimumSize(QSize(600, 800));
        good_mange->setMaximumSize(QSize(600, 800));
        pushButton_back = new QPushButton(good_mange);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(0, 0, 100, 60));
        pushButton_back->setMinimumSize(QSize(100, 60));
        pushButton_back->setMaximumSize(QSize(100, 60));
        QFont font;
        font.setPointSize(20);
        pushButton_back->setFont(font);
        label = new QLabel(good_mange);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 70, 600, 100));
        label->setMinimumSize(QSize(600, 100));
        label->setMaximumSize(QSize(600, 100));
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_add_good = new QPushButton(good_mange);
        pushButton_add_good->setObjectName("pushButton_add_good");
        pushButton_add_good->setGeometry(QRect(0, 180, 600, 100));
        pushButton_add_good->setMinimumSize(QSize(600, 100));
        pushButton_add_good->setFont(font);
        listWidget_item_inform = new QListWidget(good_mange);
        listWidget_item_inform->setObjectName("listWidget_item_inform");
        listWidget_item_inform->setGeometry(QRect(0, 280, 600, 400));
        listWidget_item_inform->setMinimumSize(QSize(600, 400));
        listWidget_item_inform->setMaximumSize(QSize(600, 400));

        retranslateUi(good_mange);

        QMetaObject::connectSlotsByName(good_mange);
    } // setupUi

    void retranslateUi(QWidget *good_mange)
    {
        good_mange->setWindowTitle(QCoreApplication::translate("good_mange", "Form", nullptr));
        pushButton_back->setText(QCoreApplication::translate("good_mange", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("good_mange", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        pushButton_add_good->setText(QCoreApplication::translate("good_mange", "\346\226\260\345\242\236\350\217\234\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class good_mange: public Ui_good_mange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_MANGE_H
