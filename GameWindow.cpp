#include "GameWindow.h"

GamePage::GamePage(QWidget *parent) : QWidget(parent)
{
	QLabel *label = new QLabel();
	gameLayout = new QGridLayout();
	for (int i = 1; i <= 20; i++) // hauteur de la map
	{
		for (int j = 1; j <= 38; j++) // largeur de la map
		{
			QLabel *label = new QLabel();
			label->setPixmap(QPixmap("Images/Background.jpg"));
			gameLayout->addWidget(label, i, j);
		}
	}

	for (int i = 1; i <= 30; i++) // placer un plancher à 10 de hauteur
	{
		QLabel *label = new QLabel();
		label->setPixmap(QPixmap("Images/Floor.jpg"));
		gameLayout->addWidget(label, 10, i);
	}

	gameLayout->setSpacing(0);
	gameLayout->setRowStretch(10, 0);

	setLayout(gameLayout);
}

GamePage::~GamePage()
{
	delete gameLayout;
}