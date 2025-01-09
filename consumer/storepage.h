#ifndef STOREPAGE_H
#define STOREPAGE_H

#include <QWidget>
#include <QVariantMap>


namespace Ui {
class Storepage;
}

class Storepage : public QWidget
{
    Q_OBJECT

public:
    explicit Storepage(QString account,QString shop_name = nullptr,QWidget *parent = nullptr);
    ~Storepage();
    void setSellerInfo(const QVariantMap &sellerInfo);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Storepage *ui;
    QVariantMap m_sellerInfo;
    void displaySellerInfo();
    QString account;//修改
    QString shop_name;//修改
};

#endif // STOREPAGE_H
