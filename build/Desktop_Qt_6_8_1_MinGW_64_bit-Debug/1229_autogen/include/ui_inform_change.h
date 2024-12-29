/********************************************************************************
** Form generated from reading UI file 'inform_change.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORM_CHANGE_H
#define UI_INFORM_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inform_change
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *inform_change)
    {
        if (inform_change->objectName().isEmpty())
            inform_change->setObjectName("inform_change");
        inform_change->resize(600, 800);
        inform_change->setMinimumSize(QSize(600, 800));
        inform_change->setMaximumSize(QSize(600, 800));
        pushButton = new QPushButton(inform_change);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 100, 80));
        pushButton->setMinimumSize(QSize(100, 80));
        pushButton->setMaximumSize(QSize(100, 80));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        label = new QLabel(inform_change);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 100, 100, 50));
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label_2 = new QLabel(inform_change);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 80, 150, 100));
        label_2->setMinimumSize(QSize(150, 100));
        label_2->setMaximumSize(QSize(150, 100));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(inform_change);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 200, 100, 50));
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_3->setFont(font1);
        textEdit = new QTextEdit(inform_change);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(160, 200, 341, 41));
        label_4 = new QLabel(inform_change);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 280, 100, 50));
        label_4->setMinimumSize(QSize(100, 50));
        label_4->setMaximumSize(QSize(100, 50));
        label_4->setFont(font1);
        textEdit_2 = new QTextEdit(inform_change);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(160, 290, 341, 41));
        pushButton_2 = new QPushButton(inform_change);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 410, 200, 200));
        pushButton_2->setMinimumSize(QSize(200, 200));
        pushButton_2->setMaximumSize(QSize(200, 200));
        pushButton_2->setFont(font);

        retranslateUi(inform_change);

        QMetaObject::connectSlotsByName(inform_change);
    } // setupUi

    void retranslateUi(QWidget *inform_change)
    {
        inform_change->setWindowTitle(QCoreApplication::translate("inform_change", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("inform_change", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("inform_change", "\346\233\264\346\224\271\345\244\264\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("inform_change", "\345\244\264\345\203\217", nullptr));
        label_3->setText(QCoreApplication::translate("inform_change", "\346\233\264\346\224\271\345\272\227\345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("inform_change", "\346\233\264\346\224\271\346\211\213\346\234\272\345\217\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("inform_change", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inform_change: public Ui_inform_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORM_CHANGE_H
