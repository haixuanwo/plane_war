#include "mainscene.h"
#include "config.h"
#include <QIcon>

MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{
    //初始化场景
    initScene();
}

MainScene::~MainScene() {}

void MainScene::initScene()
{
    //初始化窗口大小
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置窗口标题
    setWindowTitle(GAME_TITLE);

    //设置图标资源
    setWindowIcon(QIcon( GAME_ICON)); //加头文件 #include <QIcon>
}
