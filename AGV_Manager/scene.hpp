#ifndef SCENE_HPP
#define SCENE_HPP

#include <QWidget>
#include <QTimer>
#include "robot.hpp"

class Scene : public QWidget
{
    Q_OBJECT
public:
    explicit Scene(QWidget *parent = nullptr);
    virtual void paintEvent(QPaintEvent *event);

private:
    QVector<Robot> robots;
    QTimer* animation_timer;
    int point_size = 8;
    int line_size = 6;

    void animation_update();

signals:

};

#endif // SCENE_HPP
