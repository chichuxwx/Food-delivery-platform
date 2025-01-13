#ifndef DISHWIDGET_H
#define DISHWIDGET_H

#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QFrame>
#include <QVariantMap>

class DishWidget : public QFrame
{
    Q_OBJECT

public:
    explicit DishWidget(const QVariantMap &dishInfo, QWidget *parent = nullptr);
    QVariantMap getDishInfo() const;

signals:
         // 如果需要，可以在这里声明其他信号
         // void dishInfoUpdated(const QVariantMap &newDishInfo);

public slots:
    void onButtonClicked(); // 声明为槽

private:
    QVariantMap m_dishInfo;
    QLabel *imageLabel;

    // 工具函数：将 QByteArray 转换为 QPixmap
    QPixmap byteArrayToPixmap(const QByteArray &byteArray);

    // 更具描述性的成员变量名称
    QLineEdit *dishNameLineEdit;
    QLineEdit *priceLineEdit;
    QLineEdit *descriptionLineEdit;
    QLineEdit *sellNumberLineEdit;
    QPushButton *admitButton;

    QString account;
};

#endif // DISHWIDGET_H
