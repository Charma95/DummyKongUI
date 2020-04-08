#include "MainWindow.h"
#include "GameEngine/Game.h"
#include "GameEngine/XController.h"
#include "GameEngine/timer.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
	w.setWindowIcon(QIcon("Images/Icon.png"));
	w.showMaximized();

	/*Game mainGame;

	timer t1([&]() {

		mainGame.refresh();
	}, 100);
	
	t1.start();*/

    return a.exec();
}
