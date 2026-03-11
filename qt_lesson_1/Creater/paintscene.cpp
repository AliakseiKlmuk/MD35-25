#include "paintscene.h"

paintScene::paintScene(QObject *parent) : QGraphicsScene(parent){}
paintScene::~paintScene(){}

void  paintScene::mousePressEvent(QGraphicsSceneMouseEvent * event){
    if (drawing){
    previousPoint = event->scenePos();
    addEllipse(event->scenePos().x() - 5,
            event->scenePos().y() - 5,
            5,
            5,
            QPen(Qt::NoPen),
            QBrush(Qt::red));
   }
}

void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event){
    if (drawing){
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::red, 2, Qt::SolidLine, Qt::RoundCap));
    previousPoint = event->scenePos();
    }
}

void paintScene::setDrawing(bool draw) { drawing = draw;}
bool paintScene::isDrawing() const { return drawing;}
