#ifndef PAINTSCENE_H
#define PAINTSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>

class paintScene : public QGraphicsScene
{
    Q_OBJECT

public:
    explicit paintScene(QObject *parent = 0);
    ~paintScene();

public:
    void setDrawing(bool draw);
    bool isDrawing() const;

private:
    QPointF previousPoint;

    bool drawing;

private:
    void mousePressEvent(QGraphicsSceneMouseEvent * event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

};

#endif // PAINTSCENE_H
