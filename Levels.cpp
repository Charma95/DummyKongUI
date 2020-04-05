#include "Levels.h"

LevelsPage::LevelsPage(QWidget *parent) : QWidget(parent)
{
	mainLayout = new QVBoxLayout();
	level1 = new QPushButton("Level 1");
	level2 = new QPushButton("Level 2");
	level3 = new QPushButton("Level 3");

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