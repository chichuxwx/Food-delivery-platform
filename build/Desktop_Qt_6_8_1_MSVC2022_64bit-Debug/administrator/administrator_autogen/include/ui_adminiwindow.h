/********************************************************************************
** Form generated from reading UI file 'adminiwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINIWINDOW_H
#define UI_ADMINIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminiwindow
{
public:

    void setupUi(QWidget *adminiwindow)
    {
        if (adminiwindow->objectName().isEmpty())
            adminiwindow->setObjectName("adminiwindow");
        adminiwindow->resize(400, 300);

        retranslateUi(adminiwindow);

        QMetaObject::connectSlotsByName(adminiwindow);
    } // setupUi

    void retranslateUi(QWidget *adminiwindow)
    {
        adminiwindow->setWindowTitle(QCoreApplication::translate("adminiwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminiwindow: public Ui_adminiwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINIWINDOW_H
