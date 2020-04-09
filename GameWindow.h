#pragma once

#include <qwidget.h>
#include <qlayout.h>
#include <qlabel.h>
#include "GameEngine/Game.h"
#include "GameEngine/timer.h"
#include <QGraphicsScene>
#include <qgraphicsview.h>
#include <QGraphicsPixmapItem>

#include "GameEngine/Character.h"

class GamePage : public QGraphicsView
{
	Q_OBJECT
public:
	GamePage(QWidget *parent = nullptr);
	~GamePage();
	void drawMap();
	void refresh();
	void keyPressEvent(QKeyEvent *event);

private:
	Game mainGame;
	timer *t1;
	QGraphicsScene *scene;
};
