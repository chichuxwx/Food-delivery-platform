/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

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

class Ui_log
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *log)
    {
        if (log->objectName().isEmpty())
            log->setObjectName("log");
        log->resize(800, 600);
        centralwidget = new QWidget(log);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 180, 60, 50));
        label->setMinimumSize(QSize(60, 50));
        label->setMaximumSize(QSize(60, 50));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(360, 260, 113, 20));
        lineEdit_2->setMaximumSize(QSize(113, 20));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 220, 40, 30));
        label_2->setMinimumSize(QSize(40, 30));
        label_2->setMaximumSize(QSize(40, 30));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 230, 113, 20));
        lineEdit->setMaximumSize(QSize(113, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 290, 60, 20));
        pushButton->setMinimumSize(QSize(60, 20));
        pushButton->setMaximumSize(QSize(60, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 250, 40, 30));
        label_3->setMinimumSize(QSize(40, 30));
        label_3->setMaximumSize(QSize(40, 30));
        log->setCentralWidget(centralwidget);
        menubar = new QMenuBar(log);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        log->setMenuBar(menubar);
        statusbar = new QStatusBar(log);
        statusbar->setObjectName("statusbar");
        log->setStatusBar(statusbar);

        retranslateUi(log);

        QMetaObject::connectSlotsByName(log);
    } // setupUi

    void retranslateUi(QMainWindow *log)
    {
        log->setWindowTitle(QCoreApplication::translate("log", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\347\231\273\345\275\225</span></p></body></html>", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("log", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("log", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("log", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("log", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log: public Ui_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
