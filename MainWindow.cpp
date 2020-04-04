#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
	centralWidget = new QWidget(this);

	mainLayout = new QGridLayout();
	for (int i = 0; i < MAX_HEIGHT; i++)
	{
		for (int j = 0; j < MAX_WIDTH; j++)
		{
			QLabel *label = new QLabel();
			label->setPixmap(QPixmap("Images/Background.jpg"));
			mainLayout->addWidget(label, i, j, 1, 1);
		}
	}
	mainLayout->setHorizontalSpacing(0);
	mainLayout->setVerticalSpacing(0);

	centralWidget->setLayout(mainLayout);
	setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
	delete mainLayout;
	delete centralWidget;
}

