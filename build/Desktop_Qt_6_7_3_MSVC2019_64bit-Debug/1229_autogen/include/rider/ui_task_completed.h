/********************************************************************************
** Form generated from reading UI file 'task_completed.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_COMPLETED_H
#define UI_TASK_COMPLETED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task_completed
{
public:
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_9;
    QPushButton *pushButton_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *task_completed)
    {
        if (task_completed->objectName().isEmpty())
            task_completed->setObjectName("task_completed");
        task_completed->resize(600, 800);
        task_completed->setMinimumSize(QSize(600, 800));
        label_7 = new QLabel(task_completed);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(180, 50, 141, 51));
        QFont font;
        font.setPointSize(14);
        label_7->setFont(font);
        label_8 = new QLabel(task_completed);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 50, 121, 51));
        label_8->setFont(font);
        groupBox = new QGroupBox(task_completed);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 130, 501, 191));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 81, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 20, 61, 41));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 70, 181, 91));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 70, 81, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 70, 61, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 110, 91, 41));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(350, 110, 91, 41));
        label_9 = new QLabel(task_completed);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 600, 800));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton_5 = new QPushButton(task_completed);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(100, 360, 400, 40));
        pushButton_5->setMinimumSize(QSize(400, 40));
        pushButton_5->setMaximumSize(QSize(400, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 6px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));
        layoutWidget = new QWidget(task_completed);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #081439; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\346\267\261\350\223\235\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(99, 132, 233, 0.8); \n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350"
                        "\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #6384e9; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\350\223\235\350\211\262 */\n"
"    border: 2px solid #6384e9; /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\216\350\203\214\346\231\257\350\211\262\347\233\270\345\220\214 */\n"
"    border-radius: 20px; /* \345\234\206\350\247\222 */\n"
"    color: #ffffff; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5076c6; /* \346\202\254\346\265\256\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\346\267\261 */\n"
"    border: 2px solid #5076c6; /* \346\202\254\346\265\256\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\345\276\227\346\233\264\346\267"
                        "\261 */\n"
"    border-color: #3a5d8f; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\345\276\227\346\233\264\346\267\261 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff; /* \351\273\230\350\256\244\350\203\214\346\231\257\350\211\262\357\274\214\347\231\275\350\211\262 */\n"
"    border: 2px solid rgba(99, 132, 233, 0.8); /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"    color: #081439; /* \346\226\207\346\234\254\351\242\234\350\211\262\357\274\214\346\267\261\350\223\235\350\211\262 */\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(99, 132, 233, 0.8); \n"
"    border: none; /* \346\202\254\346\265\256\346\227\266\346\227\240\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b0c4de; /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\250\215\345\276\256\345\201\217\344\272\256\347\232\204\350\223\235\350\211\262 */\n"
"    border-color: #4682b4; /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350"
                        "\211\262 */\n"
"    transform: scale(0.95); /* \346\214\211\344\270\213\346\227\266\346\214\211\351\222\256\347\225\245\345\276\256\347\274\251\345\260\217 */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_4);

        label_9->raise();
        label_7->raise();
        label_8->raise();
        groupBox->raise();
        pushButton_5->raise();
        layoutWidget->raise();

        retranslateUi(task_completed);

        QMetaObject::connectSlotsByName(task_completed);
    } // setupUi

    void retranslateUi(QWidget *task_completed)
    {
        task_completed->setWindowTitle(QCoreApplication::translate("task_completed", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-weight:700;\">\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-weight:700;\">\345\267\262\347\273\217\351\200\201\350\276\276</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("task_completed", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxx</span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("task_completed", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\256\242\345\215\225\344\277\241\346\201\257\357\274\232xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\217\234\345\223\201\350\247\204\346\240\274\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxx</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\234\260\345\235\200\345\217\212\345\244\207\346\263\250\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("task_completed", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">xxx</span></p></body></html>", nullptr));
        label_9->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("task_completed", "\346\237\245\347\234\213\350\256\242\345\215\225\350\257\204\344\273\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("task_completed", "\346\216\245\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("task_completed", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("task_completed", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task_completed: public Ui_task_completed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_COMPLETED_H
