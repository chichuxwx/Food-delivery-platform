#include "inform_change.h"
#include "ui_inform_change.h"
#include "../head.h"

inform_change::inform_change(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inform_change)
{
    ui->setupUi(this);
}

inform_change::~inform_change()
{
    delete ui;
}

void inform_change::on_label_2_linkActivated(const QString &link)
{

}


void inform_change::on_pushButton_2_clicked()
{
    QString name,phone_number;
    name=ui->textEdit->toPlainText();
    phone_number=ui->textEdit_2->toPlainText();
    QMessageBox::information(this,"成功","修改成功");
    //再重新更新信息


}



void inform_change::on_pushButton_clicked()
{
    inform *Inform=new inform;
    Inform->show();
    this->close();
}

