/********************************************************************************
** Form generated from reading UI file 'rider_inform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDER_INFORM_H
#define UI_RIDER_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rider_inform
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *rider_inform)
    {
        if (rider_inform->objectName().isEmpty())
            rider_inform->setObjectName("rider_inform");
        rider_inform->resize(600, 800);
        rider_inform->setMinimumSize(QSize(600, 800));
        groupBox = new QGroupBox(rider_inform);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(310, 30, 261, 291));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 81, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 71, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 30, 101, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 100, 91, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 160, 81, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 160, 91, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 230, 71, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 230, 101, 31));
        pushButton_4 = new QPushButton(rider_inform);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(410, 610, 151, 71));
        pushButton_2 = new QPushButton(rider_inform);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 610, 151, 71));
        pushButton_3 = new QPushButton(rider_inform);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 610, 141, 71));
        pushButton_6 = new QPushButton(rider_inform);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 360, 501, 61));
        groupBox_2 = new QGroupBox(rider_inform);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(50, 30, 261, 291));

        retranslateUi(rider_inform);

        QMetaObject::connectSlotsByName(rider_inform);
    } // setupUi

    void retranslateUi(QWidget *rider_inform)
    {
        rider_inform->setWindowTitle(QCoreApplication::translate("rider_inform", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("rider_inform", "\351\252\221\346\211\213\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\351\252\221\346\211\213\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\211\213\346\234\272\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xx\351\252\221\346\211\213</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxx</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\347\273\274\345\220\210\345\210\206\346\225\260\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxx</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\347\255\211\347\272\247\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">levelxxx</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("rider_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("rider_inform", "\346\216\245\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("rider_inform", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("rider_inform", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("rider_inform", "\351\252\221\346\211\213\344\270\252\344\272\272\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rider_inform: public Ui_rider_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDER_INFORM_H
