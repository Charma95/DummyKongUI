#include "GameWindow.h"

GamePage::GamePage(QWidget *parent) : QWidget(parent)
{
	drawMap();
}

GamePage::~GamePage()
{
	delete gameLayout;
}

void GamePage::drawMap()
{
	gameLayout = new QGridLayout();
	for (int i = 0; i < MAX_HEIGHT; i++)
	{
		for (int j = 0; j < MAX_WIDTH; j++)
		{
			QLabel *label = new QLabel();
			switch (mainGame.getLevel().getMap(i, j))
			{
			case AIR:
				label->setPixmap(QPixmap("Images/Background.jpg"));
				gameLayout->addWidget(label, i, j);
				break;
			case MAP:
				label->setPixmap(QPixmap("Images/Floor.jpg"));
				gameLayout->addWidget(label, i, j);
				break;
			case ECHELLE:
				label->setPixmap(QPixmap("Images/Ladder.jpg"));
				gameLayout->addWidget(label, i, j);
				break;
			default:
				break;
			}
		}
	}

	gameLayout->setSpacing(0);
	gameLayout->setRowStretch(10, 0);

	setLayout(gameLayout);
}