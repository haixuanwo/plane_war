#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    void initScene();
};
#endif // MAINSCENE_H
