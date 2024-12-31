/********************************************************************************
** Form generated from reading UI file 'task_inform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_INFORM_H
#define UI_TASK_INFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task_inform
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *task_inform)
    {
        if (task_inform->objectName().isEmpty())
            task_inform->setObjectName("task_inform");
        task_inform->resize(600, 800);
        task_inform->setMinimumSize(QSize(600, 800));
        groupBox = new QGroupBox(task_inform);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 180, 501, 191));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 10, 141, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignmentFlag::AlignRight);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(140, 70, 191, 101));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout->addLayout(horizontalLayout_4);

        widget2 = new QWidget(task_inform);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(160, 90, 251, 51));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget2);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(widget2);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        widget3 = new QWidget(task_inform);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(100, 420, 371, 191));
        verticalLayout_2 = new QVBoxLayout(widget3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget3);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(300, 50));
        pushButton->setMaximumSize(QSize(300, 50));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_2 = new QPushButton(widget3);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(80, 30));
        pushButton_2->setMaximumSize(QSize(80, 30));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget3);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(80, 30));
        pushButton_3->setMaximumSize(QSize(80, 30));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget3);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(80, 30));
        pushButton_4->setMaximumSize(QSize(80, 30));

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(task_inform);

        QMetaObject::connectSlotsByName(task_inform);
    } // setupUi

    void retranslateUi(QWidget *task_inform)
    {
        task_inform->setWindowTitle(QCoreApplication::translate("task_inform", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("task_inform", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\256\242\345\215\225\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt;\">xxx</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\217\234\345\223\201\350\247\204\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:12pt;\">xxx</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\234\260\345\235\200\345\217\212\345\244\207\346\263\250\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:12pt;\">xxx</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\345\260\232\346\234\252\351\200\201\350\276\276</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("task_inform", "\345\267\262\351\200\201\350\276\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("task_inform", "\346\216\245\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("task_inform", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("task_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task_inform: public Ui_task_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_INFORM_H
