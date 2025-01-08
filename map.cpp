#include "map.h"
#include "ui_map.h"  // 确保包含自动生成的 ui_map.h 文件
#include <QWebEngineView>
#include "head.h"

Map::Map(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Map)  // 初始化 ui 对象
{
    ui->setupUi(this);  // 设置 UI

    // 创建 QWebEngineView 实例
    QWebEngineView *view = ui->webView; // 假设 UI 中有一个名为 webView 的 QWebEngineView

    // 构建高德地图 HTML 内容
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
            center: [112.936894,28.172738],
            zoom: 16,
            dragEnable: true
        });

        // 输入提示功能
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
    </script>
</body>

</html>
    )";

    // 设置 HTML 到 QWebEngineView
    view->setHtml(amapHtml);
}

Map::~Map()
{
    delete ui;  // 清理 UI 对象
}

void Map::on_pushButton_clicked()
{
    MainWindow *main=new MainWindow();
    main->show();
    this->close();
}

