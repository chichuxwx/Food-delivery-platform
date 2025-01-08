/********************************************************************************
** Form generated from reading UI file 'detailedmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILEDMENU_H
#define UI_DETAILEDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailedMenu
{
public:
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_7;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_5;

    void setupUi(QWidget *DetailedMenu)
    {
        if (DetailedMenu->objectName().isEmpty())
            DetailedMenu->setObjectName("DetailedMenu");
        DetailedMenu->resize(600, 800);
        pushButton_2 = new QPushButton(DetailedMenu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 10, 60, 20));
        pushButton_2->setMinimumSize(QSize(60, 20));
        pushButton_2->setMaximumSize(QSize(60, 20));
        label_3 = new QLabel(DetailedMenu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 180, 200, 60));
        label_3->setMinimumSize(QSize(200, 60));
        label_4 = new QLabel(DetailedMenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 240, 200, 60));
        label_4->setMinimumSize(QSize(200, 60));
        pushButton = new QPushButton(DetailedMenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 720, 200, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(200, 40));
        pushButton->setMaximumSize(QSize(200, 40));
        widget = new QWidget(DetailedMenu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 700, 291, 81));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(100, 40));
        label_8->setMaximumSize(QSize(100, 40));
        QFont font;
        font.setPointSize(14);
        label_8->setFont(font);

        horizontalLayout->addWidget(label_8);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        widget1 = new QWidget(DetailedMenu);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(140, 300, 314, 162));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(200, 40));
        label_5->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_5, 0, 0, 2, 3);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(200, 40));
        label_6->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_6, 1, 1, 2, 3);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 4, 1, 1);

        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 3, 1, 1, 1);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout->addWidget(checkBox_2, 3, 2, 1, 1);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(200, 40));
        label_7->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_7, 4, 1, 1, 3);

        checkBox_4 = new QCheckBox(widget1);
        checkBox_4->setObjectName("checkBox_4");

        gridLayout->addWidget(checkBox_4, 5, 1, 1, 1);

        checkBox_3 = new QCheckBox(widget1);
        checkBox_3->setObjectName("checkBox_3");

        gridLayout->addWidget(checkBox_3, 5, 2, 1, 1);

        checkBox_5 = new QCheckBox(widget1);
        checkBox_5->setObjectName("checkBox_5");

        gridLayout->addWidget(checkBox_5, 5, 3, 1, 1);


        retranslateUi(DetailedMenu);

        QMetaObject::connectSlotsByName(DetailedMenu);
    } // setupUi

    void retranslateUi(QWidget *DetailedMenu)
    {
        DetailedMenu->setWindowTitle(QCoreApplication::translate("DetailedMenu", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DetailedMenu", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\217\234\345\223\201\346\217\217\350\277\260\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246"
                        "\342\200\246</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("DetailedMenu", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        label_8->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-weight:700;\">\346\200\273\350\256\241\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DetailedMenu", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\350\247\204\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\210\206\351\207\217</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("DetailedMenu", "TextLabel", nullptr));
        checkBox->setText(QCoreApplication::translate("DetailedMenu", "\344\270\200\344\272\272\344\273\275", nullptr));
        checkBox_2->setText(QCoreApplication::translate("DetailedMenu", "\344\270\244\344\272\272\344\273\275", nullptr));
        label_7->setText(QCoreApplication::translate("DetailedMenu", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\217\243\345\221\263</span></p></body></html>", nullptr));
        checkBox_4->setText(QCoreApplication::translate("DetailedMenu", "\344\270\215\350\276\243", nullptr));
        checkBox_3->setText(QCoreApplication::translate("DetailedMenu", "\345\276\256\350\276\243", nullptr));
        checkBox_5->setText(QCoreApplication::translate("DetailedMenu", "\347\211\271\350\276\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailedMenu: public Ui_DetailedMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILEDMENU_H
