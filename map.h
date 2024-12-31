#ifndef MAP_H
#define MAP_H

#include <QWidget>

// 确保包含由 Qt Designer 自动生成的 ui_map.h 文件
#include "ui_map.h"

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Map *ui; // 指向 UI 的指针
};

#endif // MAP_H
