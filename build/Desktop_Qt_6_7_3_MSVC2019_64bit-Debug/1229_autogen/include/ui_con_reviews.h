/********************************************************************************
** Form generated from reading UI file 'con_reviews.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CON_REVIEWS_H
#define UI_CON_REVIEWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Con_reviews
{
public:
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_8;
    QTextEdit *textEdit;
    QLabel *label_7;

    void setupUi(QWidget *Con_reviews)
    {
        if (Con_reviews->objectName().isEmpty())
            Con_reviews->setObjectName("Con_reviews");
        Con_reviews->resize(600, 800);
        Con_reviews->setMinimumSize(QSize(600, 800));
        Con_reviews->setMaximumSize(QSize(600, 800));
        pushButton_2 = new QPushButton(Con_reviews);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 60, 20));
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setMaximumSize(QSize(60, 20));
        label_5 = new QLabel(Con_reviews);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 120, 200, 60));
        label_5->setMinimumSize(QSize(200, 60));
        label_6 = new QLabel(Con_reviews);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 360, 200, 60));
        label_6->setMinimumSize(QSize(200, 60));
        pushButton_8 = new QPushButton(Con_reviews);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(100, 690, 400, 40));
        pushButton_8->setMinimumSize(QSize(400, 40));
        pushButton_8->setMaximumSize(QSize(400, 40));
        textEdit = new QTextEdit(Con_reviews);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 540, 421, 141));
        label_7 = new QLabel(Con_reviews);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 480, 200, 60));
        label_7->setMinimumSize(QSize(200, 60));

        retranslateUi(Con_reviews);

        QMetaObject::connectSlotsByName(Con_reviews);
    } // setupUi

    void retranslateUi(QWidget *Con_reviews)
    {
        Con_reviews->setWindowTitle(QCoreApplication::translate("Con_reviews", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Con_reviews", "\351\200\200\345\207\272", nullptr));
        label_5->setText(QCoreApplication::translate("Con_reviews", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\257\204\344\273\267\351\252\221\346\211\213\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Con_reviews", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\257\204\344\273\267\345\225\206\345\256\266\357\274\232</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Con_reviews", "\346\217\220\344\272\244", nullptr));
        label_7->setText(QCoreApplication::translate("Con_reviews", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\217\215\351\246\210\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Con_reviews: public Ui_Con_reviews {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CON_REVIEWS_H
