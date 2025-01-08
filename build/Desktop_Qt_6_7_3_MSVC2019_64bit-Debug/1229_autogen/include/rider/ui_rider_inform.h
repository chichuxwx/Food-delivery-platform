/********************************************************************************
** Form generated from reading UI file 'rider_inform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDER_INFORM_H
#define UI_RIDER_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rider_inform
{
public:
    QPushButton *pushButton_6;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *rider_inform)
    {
        if (rider_inform->objectName().isEmpty())
            rider_inform->setObjectName("rider_inform");
        rider_inform->resize(600, 800);
        rider_inform->setMinimumSize(QSize(600, 800));
        pushButton_6 = new QPushButton(rider_inform);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(100, 360, 400, 40));
        pushButton_6->setMinimumSize(QSize(400, 40));
        pushButton_6->setMaximumSize(QSize(400, 40));
        widget = new QWidget(rider_inform);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 130, 381, 191));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setBold(false);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setBold(true);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 3, 1, 1, 1);

        label_9 = new QLabel(rider_inform);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(230, 70, 140, 50));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(140, 50));
        label_9->setMaximumSize(QSize(140, 50));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_9->setFont(font2);
        widget1 = new QWidget(rider_inform);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);


        retranslateUi(rider_inform);

        QMetaObject::connectSlotsByName(rider_inform);
    } // setupUi

    void retranslateUi(QWidget *rider_inform)
    {
        rider_inform->setWindowTitle(QCoreApplication::translate("rider_inform", "Form", nullptr));
        pushButton_6->setText(QCoreApplication::translate("rider_inform", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        label->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-weight:700;\">\351\252\221\346\211\213\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p>xx\351\252\221\346\211\213</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-weight:700;\">\346\211\213\346\234\272\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p>xxxxxxx</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-weight:700;\">\347\273\274\345\220\210\345\210\206\346\225\260\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p>xxxxx</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p><span style=\" font-weight:700;\">\347\255\211\347\272\247\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p>levelxxx</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("rider_inform", "<html><head/><body><p align=\"center\">\351\252\221\346\211\213\344\277\241\346\201\257</p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("rider_inform", "\346\216\245\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("rider_inform", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("rider_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rider_inform: public Ui_rider_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDER_INFORM_H
