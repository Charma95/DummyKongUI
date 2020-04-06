#include "Levels.h"

LevelsPage::LevelsPage(QWidget *parent) : QWidget(parent)
{
	mainLayout = new QVBoxLayout();
	level1 = new QPushButton("Level 1");
	QObject::connect(level1, SIGNAL(clicked()), this, SLOT(showGameWindow()));
	level2 = new QPushButton("Level 2");
	QObject::connect(level2, SIGNAL(clicked()), this, SLOT(showGameWindow()));
	level3 = new QPushButton("Level 3");
	QObject::connect(level3, SIGNAL(clicked()), this, SLOT(showGameWindow()));

	mainLayout->addWidget(level1);
	mainLayout->addWidget(level2);
	mainLayout->addWidget(level3);

	setLayout(mainLayout);
}

LevelsPage::~LevelsPage()
{
	delete level1;
	delete level2;
	delete level3;
	delete mainLayout;
}

void LevelsPage::showGameWindow()
{
	emit levelSelected();
}