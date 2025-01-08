/********************************************************************************
** Form generated from reading UI file 'inform_change.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORM_CHANGE_H
#define UI_INFORM_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inform_change
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextEdit *textEdit_2;

    void setupUi(QWidget *inform_change)
    {
        if (inform_change->objectName().isEmpty())
            inform_change->setObjectName("inform_change");
        inform_change->resize(600, 800);
        inform_change->setMinimumSize(QSize(600, 800));
        inform_change->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(inform_change);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        QFont font;
        font.setPointSize(9);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(inform_change);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 410, 400, 40));
        pushButton_2->setMinimumSize(QSize(400, 40));
        pushButton_2->setMaximumSize(QSize(400, 40));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        widget = new QWidget(inform_change);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 110, 501, 291));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(60, 20));
        label->setMaximumSize(QSize(60, 20));
        QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(60, 20));
        label_2->setMaximumSize(QSize(60, 20));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(160, 30));
        textEdit->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(textEdit, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(100, 50));
        label_4->setMaximumSize(QSize(100, 50));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName("textEdit_2");
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMinimumSize(QSize(160, 30));
        textEdit_2->setMaximumSize(QSize(100, 30));

        gridLayout->addWidget(textEdit_2, 2, 1, 1, 1);


        retranslateUi(inform_change);

        QMetaObject::connectSlotsByName(inform_change);
    } // setupUi

    void retranslateUi(QWidget *inform_change)
    {
        inform_change->setWindowTitle(QCoreApplication::translate("inform_change", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("inform_change", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("inform_change", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("inform_change", "\346\233\264\346\224\271\345\244\264\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("inform_change", "\345\244\264\345\203\217", nullptr));
        label_3->setText(QCoreApplication::translate("inform_change", "\346\233\264\346\224\271\345\272\227\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("inform_change", "\346\233\264\346\224\271\346\211\213\346\234\272\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inform_change: public Ui_inform_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORM_CHANGE_H
