#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
	centralWidget = new QWidget(this);

	mainLayout = new QGridLayout();

	/*Initializing menu---------------------------------------*/
	menuBar = new QMenuBar();
	fileMenu = new QMenu("File");
	levelsMenu = new QMenu("Levels");
	viewMenu = new QMenu("View");

	optionsAction = new QAction("Options");
	saveAction = new QAction("Save");
	homeAction = new QAction("Home");
	QObject::connect(homeAction, SIGNAL(triggered()), this, SLOT(showHomePage()));
	quitAction = new QAction("Quit");
	level1Action = new QAction("Level 1");
	level2Action = new QAction("Level 2");
	level3Action = new QAction("Level 3");
	fullScreenAction = new QAction("Full screen");
	normalScreenAction = new QAction("Regular screen");

	fileMenu->addAction(optionsAction);
	fileMenu->addAction(saveAction);
	fileMenu->addAction(homeAction);
	fileMenu->addAction(quitAction);

	levelsMenu->addAction(level1Action);
	levelsMenu->addAction(level2Action);
	levelsMenu->addAction(level3Action);

	viewMenu->addAction(fullScreenAction);
	viewMenu->addAction(normalScreenAction);

	menuBar->addMenu(fileMenu);
	menuBar->addMenu(levelsMenu);
	menuBar->addMenu(viewMenu);

	setMenuBar(menuBar);

	mainLayout->setHorizontalSpacing(0);
	mainLayout->setVerticalSpacing(0);
	
	QPixmap bkgnd("Images/Background1.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);

	/*Initialize buttons ---------------------------------------------------*/
	Continue = new QPushButton("Continue");
	Continue->setFixedSize(75,30);
	Play = new QPushButton("Play");
	Play->setFixedSize(75, 30);
	QObject::connect(Play, SIGNAL(clicked()), this, SLOT(showLevelsPage()));
	Option = new QPushButton("Options");
	Option->setFixedSize(75, 30);
	QObject::connect(Option, SIGNAL(clicked()), this, SLOT(showOptionsPage()));
	Help = new QPushButton("Help");
	Help->setFixedSize(75, 30);
	QObject::connect(Help, SIGNAL(clicked()), this, SLOT(showHelpPage()));
	Exit = new QPushButton("Exit");
	Exit->setFixedSize(75, 30);

	mainLayout->addWidget(Continue,1,3,1,1);
	mainLayout->addWidget(Play,2,3,1,1);
	mainLayout->addWidget(Option, 3, 3, 1, 1);
	mainLayout->addWidget(Help,4,3,1,1);
	mainLayout->addWidget(Exit,5,3,1,1);


	centralWidget->setLayout(mainLayout);
	setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
	delete optionsAction;
	delete saveAction;
	delete homeAction;
	delete quitAction;
	delete level1Action;
	delete level2Action;
	delete level3Action;
	delete fullScreenAction;
	delete normalScreenAction;
	delete fileMenu;
	delete levelsMenu;
	delete viewMenu;
	delete menuBar;

	delete Continue;
	delete Play;
	delete Option;
	delete Help;
	delete Exit;
	delete mainLayout;
	delete centralWidget;
}

void MainWindow::showHelpPage()
{
	helpPage = new HelpPage(this);
	helpPage->show();
	
}

void MainWindow::showOptionsPage()
{
	optionsPage = new OptionsPage();
	optionsPage->show();
}

void MainWindow::showLevelsPage()
{
	levelsPage = new LevelsPage();
	setCentralWidget(levelsPage);
}

void MainWindow::showHomePage()
{
	//setCentralWidget(centralWidget);
}

void MainWindow::showGamePage()
{
	//gamePage = new GamePage();
	//setCentralWidget(gamePage);
}

