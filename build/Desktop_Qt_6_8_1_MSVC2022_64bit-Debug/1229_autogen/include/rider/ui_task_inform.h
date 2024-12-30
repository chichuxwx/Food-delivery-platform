/********************************************************************************
** Form generated from reading UI file 'task_inform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_INFORM_H
#define UI_TASK_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task_inform
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *task_inform)
    {
        if (task_inform->objectName().isEmpty())
            task_inform->setObjectName("task_inform");
        task_inform->resize(600, 800);
        task_inform->setMinimumSize(QSize(600, 800));
        pushButton_4 = new QPushButton(task_inform);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(400, 670, 151, 71));
        pushButton_2 = new QPushButton(task_inform);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 670, 151, 71));
        pushButton_3 = new QPushButton(task_inform);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(230, 670, 141, 71));
        groupBox = new QGroupBox(task_inform);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 180, 501, 191));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 61, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 20, 61, 41));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 70, 181, 91));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 70, 81, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 70, 61, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 110, 91, 41));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(350, 110, 61, 41));
        pushButton = new QPushButton(task_inform);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 390, 501, 91));
        label_7 = new QLabel(task_inform);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(180, 100, 141, 51));
        label_8 = new QLabel(task_inform);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 100, 121, 51));

        retranslateUi(task_inform);

        QMetaObject::connectSlotsByName(task_inform);
    } // setupUi

    void retranslateUi(QWidget *task_inform)
    {
        task_inform->setWindowTitle(QCoreApplication::translate("task_inform", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("task_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("task_inform", "\346\216\245\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("task_inform", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("task_inform", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxx</span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("task_inform", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\256\242\345\215\225\344\277\241\346\201\257\357\274\232xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\350\247\204\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxx</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\234\260\345\235\200\345\217\212\345\244\207\346\263\250\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxx</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("task_inform", "\345\267\262\351\200\201\350\276\276", nullptr));
        label_7->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\345\260\232\346\234\252\351\200\201\350\276\276</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task_inform: public Ui_task_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_INFORM_H
