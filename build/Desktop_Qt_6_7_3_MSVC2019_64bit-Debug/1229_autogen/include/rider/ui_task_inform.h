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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_9;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget_3;
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
        task_inform->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(task_inform);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 180, 501, 191));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 10, 141, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignmentFlag::AlignRight);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(140, 70, 191, 101));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6, 0, Qt::AlignmentFlag::AlignRight);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(task_inform);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 421, 400, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(400, 40));
        pushButton->setMaximumSize(QSize(400, 40));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_9 = new QLabel(task_inform);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 600, 800));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(600, 800));
        label_9->setMaximumSize(QSize(600, 800));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        layoutWidget_2 = new QWidget(task_inform);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(200, 80, 221, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        layoutWidget_3 = new QWidget(task_inform);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget_3);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));
        QFont font;
        font.setBold(true);
        pushButton_2->setFont(font);
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
"\n"
""));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget_3);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));
        pushButton_3->setFont(font);
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
"}"));

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget_3);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(175, 40));
        pushButton_4->setMaximumSize(QSize(175, 40));
        pushButton_4->setFont(font);
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

        horizontalLayout_5->addWidget(pushButton_4);

        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_2->raise();
        label_9->raise();
        groupBox->raise();
        layoutWidget1->raise();
        pushButton->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();

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
        pushButton->setText(QCoreApplication::translate("task_inform", "\345\267\262\351\200\201\350\276\276", nullptr));
        label_9->setText(QString());
        label_7->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("task_inform", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\345\260\232\346\234\252\351\200\201\350\276\276</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("task_inform", "\346\216\245     \345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("task_inform", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("task_inform", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task_inform: public Ui_task_inform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_INFORM_H
