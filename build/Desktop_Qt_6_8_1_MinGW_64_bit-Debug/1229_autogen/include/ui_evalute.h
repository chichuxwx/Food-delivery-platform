/********************************************************************************
** Form generated from reading UI file 'evalute.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVALUTE_H
#define UI_EVALUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_evalute
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QWidget *evalute)
    {
        if (evalute->objectName().isEmpty())
            evalute->setObjectName("evalute");
        evalute->resize(600, 800);
        evalute->setMinimumSize(QSize(600, 800));
        evalute->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(evalute);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 100, 80));
        pushButton->setMinimumSize(QSize(100, 80));
        pushButton->setMaximumSize(QSize(100, 80));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        label = new QLabel(evalute);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 100, 600, 100));
        label->setMinimumSize(QSize(600, 100));
        label->setMaximumSize(QSize(600, 100));
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        listWidget = new QListWidget(evalute);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 240, 500, 500));
        listWidget->setMinimumSize(QSize(500, 500));

        retranslateUi(evalute);

        QMetaObject::connectSlotsByName(evalute);
    } // setupUi

    void retranslateUi(QWidget *evalute)
    {
        evalute->setWindowTitle(QCoreApplication::translate("evalute", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("evalute", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("evalute", "\350\256\242\345\215\225\350\257\204\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class evalute: public Ui_evalute {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVALUTE_H
