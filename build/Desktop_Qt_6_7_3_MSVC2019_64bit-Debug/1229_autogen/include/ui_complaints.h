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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_complaints
{
public:
    QPushButton *pushButton_8;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QTextEdit *textEdit_2;
    QLabel *label_8;

    void setupUi(QWidget *complaints)
    {
        if (complaints->objectName().isEmpty())
            complaints->setObjectName("complaints");
        complaints->resize(600, 800);
        pushButton_8 = new QPushButton(complaints);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(440, 680, 100, 30));
        pushButton_8->setMinimumSize(QSize(100, 30));
        pushButton_8->setMaximumSize(QSize(100, 30));
        textEdit = new QTextEdit(complaints);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 120, 421, 171));
        pushButton_2 = new QPushButton(complaints);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 10, 60, 20));
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setMaximumSize(QSize(60, 20));
        label_7 = new QLabel(complaints);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 60, 200, 60));
        label_7->setMinimumSize(QSize(200, 60));
        textEdit_2 = new QTextEdit(complaints);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(90, 380, 421, 171));
        label_8 = new QLabel(complaints);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 320, 200, 60));
        label_8->setMinimumSize(QSize(200, 60));

        retranslateUi(complaints);

        QMetaObject::connectSlotsByName(complaints);
    } // setupUi

    void retranslateUi(QWidget *complaints)
    {
        complaints->setWindowTitle(QCoreApplication::translate("complaints", "Form", nullptr));
        pushButton_8->setText(QCoreApplication::translate("complaints", "\346\217\220\344\272\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("complaints", "\351\200\200\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("complaints", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700;\">\344\270\215\346\273\241\346\204\217\347\232\204\345\234\260\346\226\271\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("complaints", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700;\">\346\224\271\350\277\233\345\273\272\350\256\256\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class complaints: public Ui_complaints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLAINTS_H
