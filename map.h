#ifndef MAP_H
#define MAP_H

#include <QWidget>
#include <QWebEngineView>
#include "database/database.h"

namespace Ui {
class Map;
}

class Map : public QWidget
{
    Q_OBJECT

public:
    explicit Map(QString account,QWidget *parent = nullptr);
    ~Map();

private slots:
    void on_getCoordsButton_clicked();  // 按钮点击槽

private:
    Ui::Map *ui;  // 自动生成的 UI 对象
    QWebEngineView *view;  // 用于展示地图的 QWebEngineView
    double mapLng, mapLat;  // 存储地图中心的经纬度
    QString account;
    Database db;
};

#endif // MAP_H
