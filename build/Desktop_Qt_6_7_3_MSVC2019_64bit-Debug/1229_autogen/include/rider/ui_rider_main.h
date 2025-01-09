/********************************************************************************
** Form generated from reading UI file 'rider_main.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIDER_MAIN_H
#define UI_RIDER_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rider_main
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QGroupBox *groupBox_3;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *timelabel;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Rider_main)
    {
        if (Rider_main->objectName().isEmpty())
            Rider_main->setObjectName("Rider_main");
        Rider_main->resize(600, 800);
        Rider_main->setMinimumSize(QSize(600, 800));
        groupBox_2 = new QGroupBox(Rider_main);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(50, 310, 501, 141));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(120, 40, 91, 31));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(50, 40, 61, 31));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(120, 100, 91, 31));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(330, 40, 51, 31));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(400, 40, 81, 31));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(50, 100, 61, 31));
        groupBox_3 = new QGroupBox(Rider_main);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(50, 150, 501, 141));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(130, 40, 91, 31));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(50, 40, 71, 31));
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(130, 100, 91, 21));
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(320, 40, 61, 31));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(400, 30, 91, 41));
        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(50, 100, 71, 31));
        layoutWidget = new QWidget(Rider_main);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 80, 341, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label);

        timelabel = new QLabel(layoutWidget);
        timelabel->setObjectName("timelabel");

        horizontalLayout_2->addWidget(timelabel);

        label_2 = new QLabel(Rider_main);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 600, 800));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/bg_2.png);"));
        pushButton = new QPushButton(Rider_main);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 480, 400, 40));
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
        layoutWidget_2 = new QWidget(Rider_main);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 760, 601, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 40));
        pushButton_2->setMaximumSize(QSize(175, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 40));
        pushButton_3->setMaximumSize(QSize(175, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget_2);
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

        label_2->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        layoutWidget->raise();
        pushButton->raise();
        layoutWidget_2->raise();

        retranslateUi(Rider_main);

        QMetaObject::connectSlotsByName(Rider_main);
    } // setupUi

    void retranslateUi(QWidget *Rider_main)
    {
        Rider_main->setWindowTitle(QCoreApplication::translate("Rider_main", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Rider_main", "\346\266\210\350\264\271\350\200\205\344\277\241\346\201\257", nullptr));
        label_20->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">xxxxx</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\347\224\250\346\210\267\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">xxxxxxxxx</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\267\235\347\246\273\357\274\232</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">xxxx\345\205\254\351\207\214</span></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Rider_main", "\346\266\210\350\264\271\350\200\205\344\277\241\346\201\257", nullptr));
        label_28->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">xxxxx</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\347\224\250\346\210\267\345\220\215\347\247\260\357\274\232</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">xxxxxxxxx</span></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\350\267\235\347\246\273\357\274\232</span></p></body></html>", nullptr));
        label_32->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">xxxx\345\205\254\351\207\214</span></p></body></html>", nullptr));
        label_33->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Rider_main", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">\346\234\254\345\215\225\346\210\252\346\255\242\346\227\266\351\227\264\357\274\232</span></p></body></html>", nullptr));
        timelabel->setText(QCoreApplication::translate("Rider_main", "TextLabel", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("Rider_main", "\347\253\213\345\215\263\346\212\242\345\215\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Rider_main", "\346\216\245\345\215\225", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Rider_main", "\344\273\273\345\212\241\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Rider_main", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rider_main: public Ui_Rider_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIDER_MAIN_H
