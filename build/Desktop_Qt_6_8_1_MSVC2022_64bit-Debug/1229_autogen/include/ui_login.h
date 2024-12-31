/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 836);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(600, 800));
        centralwidget->setMaximumSize(QSize(600, 800));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(230, 240, 113, 20));
        lineEdit_2->setMaximumSize(QSize(113, 20));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 150, 40, 30));
        label_2->setMinimumSize(QSize(40, 30));
        label_2->setMaximumSize(QSize(40, 30));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 240, 40, 30));
        label_3->setMinimumSize(QSize(40, 30));
        label_3->setMaximumSize(QSize(40, 30));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 160, 113, 20));
        lineEdit->setMaximumSize(QSize(113, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 300, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 100, 60, 50));
        label->setMinimumSize(QSize(60, 50));
        label->setMaximumSize(QSize(60, 50));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 300, 100, 30));
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setMaximumSize(QSize(100, 30));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 360, 100, 30));
        pushButton_3->setMinimumSize(QSize(100, 30));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(320, 360, 100, 30));
        pushButton_4->setMinimumSize(QSize(100, 30));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(180, 360, 100, 30));
        pushButton_5->setMinimumSize(QSize(100, 30));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 340, 500, 12));
        label_4->setMinimumSize(QSize(500, 0));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(460, 360, 100, 30));
        pushButton_6->setMinimumSize(QSize(100, 30));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\347\231\273\345\275\225</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("login", "\346\266\210\350\264\271\350\200\205", nullptr));
        pushButton_4->setText(QCoreApplication::translate("login", "\351\252\221\346\211\213", nullptr));
        pushButton_5->setText(QCoreApplication::translate("login", "\345\225\206\345\256\266", nullptr));
        label_4->setText(QCoreApplication::translate("login", "\344\270\213\351\235\242\347\232\204\346\214\211\351\222\256\344\276\277\344\272\216\350\260\203\350\257\225\357\274\214\346\255\243\345\270\270\345\272\224\350\257\245\346\214\211\347\205\247\347\231\273\345\275\225\347\232\204\347\224\250\346\210\267\347\261\273\345\236\213\346\235\245\351\200\211\346\213\251\347\225\214\351\235\242", nullptr));
        pushButton_6->setText(QCoreApplication::translate("login", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
