#include "GameWindow.h"

GamePage::GamePage(QWidget *parent) : QGraphicsView(parent)
{
	// créer la scène et mettre le fond d'écran
	scene = new QGraphicsScene();
	scene->setSceneRect(0, 0, PIX_WIDTH * MAX_WIDTH, PIX_HEIGHT * MAX_HEIGHT);
	setBackgroundBrush(QBrush(QImage("Images/Background.jpg")));
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setFixedSize(PIX_WIDTH * MAX_WIDTH, PIX_HEIGHT * MAX_HEIGHT);

	// dessiner la map du jeu et ajouter le joueur
	drawMap();

	setScene(scene);

	t1 = new timer([&]() {

		refresh();
	}, 100);
	//t1->start();
}

GamePage::~GamePage()
{
	cout << "destructeur de gamePage\n";
	delete scene;
	delete t1;
}

void GamePage::drawMap()
{
	for (int i = 0; i < MAX_HEIGHT; i++)
	{
		for (int j = 0; j < MAX_WIDTH; j++)
		{
			QGraphicsPixmapItem *tile = new QGraphicsPixmapItem();
			switch (mainGame.getLevel()->getMap(i, j))
			{
			case MAP:
				tile->setPixmap(QPixmap("Images/Floor.jpg"));
				break;
			case LADDER:
				tile->setPixmap(QPixmap("Images/Ladder.jpg"));
				break;
			default:
				break;
			}
			tile->setPos(PIX_WIDTH * j, PIX_HEIGHT * i);
			scene->addItem(tile);
		}
	}
	//mainGame.getMario()->setFlag(QGraphicsItem::ItemIsFocusable);
	//mainGame.getMario()->setFocus();
	setFocusPolicy(Qt::StrongFocus);
	//setFocus();
	scene->addItem(mainGame.getMario());

	//scene->addItem(mario);

}

void GamePage::refresh()
{
	mainGame.refresh();
}

void GamePage::keyPressEvent(QKeyEvent *event) {
	// move the player left and right
	if (event->key() == Qt::Key_A) {
		if (mainGame.getMario()->pos().x() > 0)
			mainGame.getMario()->setPos(mainGame.getMario()->x() - 10, mainGame.getMario()->y());
	}
	else if (event->key() == Qt::Key_D) {
		if (mainGame.getMario()->pos().x() + 48 < PIX_WIDTH * MAX_WIDTH);
		mainGame.getMario()->setPos(mainGame.getMario()->x() + 10, mainGame.getMario()->y());
	}
}