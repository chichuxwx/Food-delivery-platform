/********************************************************************************
** Form generated from reading UI file 'histroy_record.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTROY_RECORD_H
#define UI_HISTROY_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_histroy_record
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_6;
    QLabel *label_12;

    void setupUi(QWidget *histroy_record)
    {
        if (histroy_record->objectName().isEmpty())
            histroy_record->setObjectName("histroy_record");
        histroy_record->resize(600, 800);
        histroy_record->setMinimumSize(QSize(600, 800));
        pushButton = new QPushButton(histroy_record);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 16777215));
        groupBox = new QGroupBox(histroy_record);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 110, 531, 221));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 481, 171));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 4, 1, 2);

        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 0, 6, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 2, 1, 2);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 1, 4, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 2, 1, 2);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 2, 4, 1, 2);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 1, 1, 2);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 3, 3, 1, 2);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 5, 1, 2);

        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 3, 7, 1, 1);


        retranslateUi(histroy_record);

        QMetaObject::connectSlotsByName(histroy_record);
    } // setupUi

    void retranslateUi(QWidget *histroy_record)
    {
        histroy_record->setWindowTitle(QCoreApplication::translate("histroy_record", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("histroy_record", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("histroy_record", "\350\256\242\345\215\225\344\270\200", nullptr));
        label->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\225\206\345\256\266\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxxxxx</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxx</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\344\270\200\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxxxxx</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\344\272\214\357\274\232</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxxxxx</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxx</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\256\236\344\273\230\351\207\221\351\242\235\357\274\232</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("histroy_record", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxxxxxx</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class histroy_record: public Ui_histroy_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTROY_RECORD_H
