/********************************************************************************
** Form generated from reading UI file 'admini_info_done.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_INFO_DONE_H
#define UI_ADMINI_INFO_DONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_info_done
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;

    void setupUi(QWidget *admini_info_done)
    {
        if (admini_info_done->objectName().isEmpty())
            admini_info_done->setObjectName("admini_info_done");
        admini_info_done->resize(600, 800);
        admini_info_done->setMinimumSize(QSize(600, 800));
        pushButton = new QPushButton(admini_info_done);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 56, 18));
        groupBox = new QGroupBox(admini_info_done);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 270, 101, 111));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 40, 12));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 40, 40, 12));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 40, 12));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 90, 40, 12));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 40, 40, 12));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 20, 40, 12));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 60, 40, 12));
        label_7 = new QLabel(admini_info_done);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 130, 200, 50));
        label_7->setMinimumSize(QSize(200, 50));

        retranslateUi(admini_info_done);

        QMetaObject::connectSlotsByName(admini_info_done);
    } // setupUi

    void retranslateUi(QWidget *admini_info_done)
    {
        admini_info_done->setWindowTitle(QCoreApplication::translate("admini_info_done", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_info_done", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admini_info_done", "\345\267\262\345\244\204\347\220\206\346\212\225\350\257\211\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("admini_info_done", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("admini_info_done", "\345\225\206\345\256\266\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("admini_info_done", "\346\212\225\350\257\211\347\220\206\347\224\261\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("admini_info_done", "\346\212\225\350\257\211/\351\251\263\345\233\236", nullptr));
        label_6->setText(QCoreApplication::translate("admini_info_done", "XX", nullptr));
        label_8->setText(QCoreApplication::translate("admini_info_done", "acc", nullptr));
        label_9->setText(QCoreApplication::translate("admini_info_done", "XX", nullptr));
        label_7->setText(QCoreApplication::translate("admini_info_done", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">\345\267\262\345\244\204\347\220\206\346\212\225\350\257\211</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_info_done: public Ui_admini_info_done {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_INFO_DONE_H
