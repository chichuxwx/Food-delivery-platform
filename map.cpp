#include "map.h"
#include "ui_map.h"
#include <QPushButton>
#include <QDebug>

Map::Map(QString account,QWidget *parent)
    : account(account),QWidget(parent),
    ui(new Ui::Map),  // 初始化 UI
    mapLng(0.0), mapLat(0.0)  // 初始化经纬度为 0
{
    ui->setupUi(this);  // 设置 UI

    // 创建 QWebEngineView 实例
    view = ui->webView;  // 假设 UI 中有一个名为 webView 的 QWebEngineView

    // 创建一个简单的高德地图 HTML 内容
    QString amapHtml = R"(
    <!doctype html>
    <html>
<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="initial-scale=1.0, user-scalable=no, width=device-width">
    <title>高德地图示例</title>
    <link rel="stylesheet" href="https://cache.amap.com/lbs/static/main1119.css" />
    <script type="text/javascript">
        window._AMapSecurityConfig = {
            securityJsCode: '48adc8d10a87e574fc925f8135b72e52',
        }
    </script>
    <script type="text/javascript" src="https://webapi.amap.com/maps?v=2.0&key=39142dedbd08b778cb7d21d7b2d72ff4"></script>
</head>

    <body>
        <div id="container" style="width:100%; height:100%;"></div>
        <script type="text/javascript">
            var map = new AMap.Map("container", {
                center: [112.936894, 28.172738],  // 初始地图中心
                zoom: 16,
                dragEnable: true
            });
            var autoOptions = {
                input: "tipinput"
            };

            AMap.plugin(['AMap.PlaceSearch', 'AMap.AutoComplete'], function() {
                var auto = new AMap.AutoComplete(autoOptions);
                var placeSearch = new AMap.PlaceSearch({
                    map: map
                });

                auto.on("select", function(e) {
                    placeSearch.setCity(e.poi.adcode);
                    placeSearch.search(e.poi.name); // 进行关键字搜索
                });
            });
            function getMapCenter() {
                var center = map.getCenter();  // 获取地图中心经纬度
                var lng = center.lng;
                var lat = center.lat;
                // 返回经纬度给 Qt
                window.qt_obj.receiveCoordinates(lng, lat);
            }
        </script>
    </body>
    </html>
    )";

    // 设置 HTML 到 QWebEngineView
    view->setHtml(amapHtml);

    // 创建按钮
    QPushButton *getCoordsButton = new QPushButton("获取地图中心", this);
    getCoordsButton->setGeometry(520, 560, 150, 30);  // 设置按钮的位置和大小

    // 按钮点击连接槽
    connect(getCoordsButton, &QPushButton::clicked, this, &Map::on_getCoordsButton_clicked);
}

Map::~Map()
{
    delete ui;  // 清理 UI 对象
}

// 按钮点击时触发 JavaScript 获取地图中心
void Map::on_getCoordsButton_clicked()
{
    // 执行 JavaScript，获取地图的中心经纬度
    view->page()->runJavaScript("getMapCenter();", [this](const QVariant &result) {
        // 获取 JavaScript 返回的结果 (经纬度)
        QVariantList coords = result.toList();
        if (coords.size() == 2) {
            mapLng = coords[0].toDouble();
            mapLat = coords[1].toDouble();
            QString ad = QString("经度:28.172738, 纬度:112.936894");
            db.update_customer_address(account,ad);
            qDebug() << "获取的地图中心经纬度:" << "经度:" << mapLng << "纬度:" << mapLat;
        }
    });
    QString ad = QString("经度:28.172738, 纬度:112.936894");
    db.update_customer_address(account,ad);
    qDebug() << "获取的地图中心经纬度:" << "经度:" << mapLng << "纬度:" << mapLat;
    this->close();
}



