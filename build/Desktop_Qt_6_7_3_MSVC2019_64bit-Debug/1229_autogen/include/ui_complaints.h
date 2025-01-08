/********************************************************************************
** Form generated from reading UI file 'complaints.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLAINTS_H
#define UI_COMPLAINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_complaints
{
public:
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QTextEdit *textEdit;
    QLabel *label_8;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *complaints)
    {
        if (complaints->objectName().isEmpty())
            complaints->setObjectName("complaints");
        complaints->resize(600, 800);
        pushButton_8 = new QPushButton(complaints);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(100, 680, 400, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(400, 40));
        pushButton_8->setMaximumSize(QSize(400, 40));
        pushButton_2 = new QPushButton(complaints);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 60, 20));
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setMaximumSize(QSize(60, 20));
        widget = new QWidget(complaints);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 100, 441, 341));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(200, 60));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(200, 60));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName("textEdit_2");

        gridLayout->addWidget(textEdit_2, 3, 0, 1, 1);


        retranslateUi(complaints);

        QMetaObject::connectSlotsByName(complaints);
    } // setupUi

    void retranslateUi(QWidget *complaints)
    {
        complaints->setWindowTitle(QCoreApplication::translate("complaints", "Form", nullptr));
        pushButton_8->setText(QCoreApplication::translate("complaints", "\346\217\220\344\272\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("complaints", "\351\200\200\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("complaints", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\344\270\215\346\273\241\346\204\217\347\232\204\345\234\260\346\226\271\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("complaints", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\224\271\350\277\233\345\273\272\350\256\256\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class complaints: public Ui_complaints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLAINTS_H
