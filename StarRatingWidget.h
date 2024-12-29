#ifndef STARRATING_H
#define STARRATING_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QPaintEvent>

class StarRatingWidget : public QWidget {
    Q_OBJECT

public:
    StarRatingWidget(QWidget *parent = nullptr) : QWidget(parent), rating(0) {
        setFixedSize(500, 50);  // 设置固定大小
    }

    // 设置星级
    void setRating(int newRating) {
        if (newRating != rating) {
            rating = newRating;
            update();  // 重新绘制
        }
    }

    int getRating() const {
        return rating;
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);  // 开启抗锯齿

        int starCount = 10;  // 星星的数量
        int starWidth = width() / starCount;
        QRect rect(0, 0, starWidth, height());

        // 绘制五颗星
        for (int i = 0; i < starCount; ++i) {
            rect.moveLeft(i * starWidth);
            if (i < rating) {
                painter.setBrush(Qt::yellow);  // 填充黄色表示已评分的星星
            } else {
                painter.setBrush(Qt::gray);  // 填充灰色表示未评分的星星
            }
            drawStar(&painter, rect);  // 绘制星星
        }
    }

    void mousePressEvent(QMouseEvent *event) override {
        int starWidth = width() / 10;
        int clickedX = event->x();

        // 根据鼠标点击的位置更新评分
        setRating(qRound(clickedX / static_cast<double>(starWidth)));
    }

private:
    int rating;  // 星级评分

    // 绘制星星
    void drawStar(QPainter *painter, const QRect &rect) {
        QPolygon star;
        int centerX = rect.center().x();
        int centerY = rect.center().y();
        int radius = rect.width() / 2;

        // 定义星星的五个点
        for (int i = 0; i < 5; ++i) {
            double angle = i * 144.0;  // 星星角度，每个角之间144度
            double radian = qDegreesToRadians(angle);
            int x = centerX + radius * qCos(radian);
            int y = centerY - radius * qSin(radian);  // 使用`-`是因为坐标系的y轴向下

            star << QPoint(x, y);
        }
        painter->drawPolygon(star);  // 绘制星星
    }
};

#endif // STARRATING_H
