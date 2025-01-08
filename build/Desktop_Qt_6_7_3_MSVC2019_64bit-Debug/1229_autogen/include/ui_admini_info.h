/********************************************************************************
** Form generated from reading UI file 'admini_info.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINI_INFO_H
#define UI_ADMINI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admini_info
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *admini_info)
    {
        if (admini_info->objectName().isEmpty())
            admini_info->setObjectName("admini_info");
        admini_info->resize(600, 800);
        admini_info->setMinimumSize(QSize(600, 800));
        admini_info->setMaximumSize(QSize(600, 800));
        widget = new QWidget(admini_info);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(175, 40));
        pushButton_5->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));

        horizontalLayout->addWidget(pushButton_4);

        widget1 = new QWidget(admini_info);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(100, 210, 402, 161));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(400, 40));
        pushButton->setMaximumSize(QSize(400, 40));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(400, 40));
        pushButton_2->setMaximumSize(QSize(400, 40));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(admini_info);

        QMetaObject::connectSlotsByName(admini_info);
    } // setupUi

    void retranslateUi(QWidget *admini_info)
    {
        admini_info->setWindowTitle(QCoreApplication::translate("admini_info", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admini_info", "\346\212\225\350\257\211\345\244\204\347\220\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admini_info", "\350\264\255\347\211\251\346\227\245\345\277\227", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admini_info", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("admini_info", "\345\267\262\345\244\204\347\220\206\346\212\225\350\257\211", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admini_info", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admini_info: public Ui_admini_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINI_INFO_H
