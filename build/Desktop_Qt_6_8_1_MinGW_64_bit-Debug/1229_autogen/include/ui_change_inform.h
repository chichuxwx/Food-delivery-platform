/********************************************************************************
** Form generated from reading UI file 'change_inform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_INFORM_H
#define UI_CHANGE_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_inform
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextBrowser *textBrowser_2;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;

    void setupUi(QWidget *change_inform)
    {
        if (change_inform->objectName().isEmpty())
            change_inform->setObjectName("change_inform");
        change_inform->resize(600, 800);
        change_inform->setMinimumSize(QSize(600, 800));
        pushButton = new QPushButton(change_inform);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 20, 141, 61));
        groupBox = new QGroupBox(change_inform);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 130, 501, 321));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 50, 151, 191));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 60, 91, 41));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(290, 70, 191, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 120, 91, 41));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(290, 130, 191, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 190, 91, 41));
        textBrowser_3 = new QTextBrowser(groupBox);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(290, 200, 191, 21));

        retranslateUi(change_inform);

        QMetaObject::connectSlotsByName(change_inform);
    } // setupUi

    void retranslateUi(QWidget *change_inform)
    {
        change_inform->setWindowTitle(QCoreApplication::translate("change_inform", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("change_inform", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("change_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("change_inform", "\347\224\250\346\210\267\345\244\264\345\203\217", nullptr));
        label->setText(QCoreApplication::translate("change_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\347\224\250\346\210\267\346\230\265\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("change_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("change_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\344\277\256\346\224\271\350\264\246\345\217\267\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_inform: public Ui_change_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_INFORM_H
