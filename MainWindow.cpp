#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
	centralWidget = new QWidget(this);

	mainLayout = new QGridLayout();

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

