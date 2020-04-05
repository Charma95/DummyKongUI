#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
	centralWidget = new QWidget(this);

	mainLayout = new QGridLayout();

	mainLayout->setHorizontalSpacing(0);
	mainLayout->setVerticalSpacing(0);
	
	QPixmap bkgnd("Images/Background1.jpg");
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);

	/*Initialize buttons ---------------------------------------------------*/
	Continue = new QPushButton("Continue");
	Continue->setFixedSize(200,40);
	Play = new QPushButton("Play");
	Play->setFixedSize(200, 40);
	Option = new QPushButton("Options");
	Option->setFixedSize(200, 40);
	QObject::connect(Option, SIGNAL(clicked()), this, SLOT(showOptionsPage()));
	Help = new QPushButton("Help");
	Help->setFixedSize(200, 40);
	QObject::connect(Help, SIGNAL(clicked()), this, SLOT(showHelpPage()));
	Save = new QPushButton("Save");
	Save->setFixedSize(200, 40);
	QObject::connect(Save, SIGNAL(clicked()), this, SLOT(saveGame()));
	Exit = new QPushButton("Exit");
	Exit->setFixedSize(200, 40);
	QObject::connect(Exit, SIGNAL(clicked()), this, SLOT(exitGame()));

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

void MainWindow::exitGame()
{
	this->close();
}


