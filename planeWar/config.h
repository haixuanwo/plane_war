#ifndef CONFIG_H
#define CONFIG_H

/********** 游戏配置数据 **********/
#define GAME_WIDTH 512 //宽度
#define GAME_HEIGHT 768 //高度
#define GAME_TITLE "飞机大战 v1.0" //标题
#define GAME_RES_PATH "./plane.rcc" //rcc文件路径
#define GAME_ICON ":/res/app.ico"

/********** 地图配置数据 **********/
#define MAP_PATH ":/res/img_bg_level_1.jpg" //地图图片路径
#define MAP_SCROLL_SPEED 2 //地图滚动速度

#define GAME_RATE 10 //刷新间隔，帧率 单位毫秒

/********** 飞机配置数据 **********/
#define HERO_PATH ":/res/hero2.png"

#endif // CONFIG_H
