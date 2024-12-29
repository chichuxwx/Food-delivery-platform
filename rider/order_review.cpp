#include"../head.h"
order_review::order_review(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::order_review)
{
    ui->setupUi(this);
}

order_review::~order_review()
{
    delete ui;
}

void order_review::on_pushButton_clicked()
{
    this->hide();
    task_completed*taskcompleted=new task_completed;
    taskcompleted->show();
}

