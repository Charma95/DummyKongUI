#pragma once

#include <qwidget.h>
#include <qlayout.h>
#include <qlabel.h>
#include "GameEngine/Game.h"

class GamePage : public QWidget
{
	Q_OBJECT
public:
	GamePage(QWidget *parent = nullptr);
	~GamePage();
	void drawMap();
private:
	QGridLayout *gameLayout;
	Game mainGame;

};
