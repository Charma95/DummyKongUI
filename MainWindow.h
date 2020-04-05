#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAX_HEIGHT 15
#define MAX_WIDTH 15

#include <QMainWindow>
#include <qlayout.h>
#include <qpixmap.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qmenu.h>
#include <qmenubar.h>
#include "Help.h"
#include "Levels.h"
#include <Options.h>
#include "GameWindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
	QWidget *centralWidget;
	QGridLayout *mainLayout;
	QPushButton *Continue;
	QPushButton *Play;
	QPushButton *Option;
	QPushButton *Help;
	QPushButton *Exit;
    HelpPage *helpPage;   /* We shall convert it to smart pointer (shared pointer)*/
	OptionsPage *optionsPage;
	LevelsPage *levelsPage;
	GamePage *gamePage;
	QMenuBar *menuBar;
	QMenu *fileMenu;
	QMenu *levelsMenu;
	QMenu *viewMenu;
	QAction *optionsAction;
	QAction *saveAction;
	QAction *homeAction;
	QAction *quitAction;
	QAction *level1Action;
	QAction *level2Action;
	QAction *level3Action;
	QAction *fullScreenAction;
	QAction *normalScreenAction;

private slots:
	void showHelpPage();
	void showOptionsPage();
	void showLevelsPage();
	void showHomePage();
	void showGamePage();
};
#endif // MAINWINDOW_H
