#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include "map.h"

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    void initScene();

    //启动游戏 用于启动定时器对象
    void playGame();

    //更新坐标
    void updatePosition();

    //绘图事件
    void paintEvent(QPaintEvent *event);

    //地图对象
    Map m_map;

    QTimer m_Timer;
};
#endif // MAINSCENE_H
