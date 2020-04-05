#include "Options.h"

OptionsPage::OptionsPage(QWidget *parent) : QMainWindow(parent)
{
	centralWidget = new QWidget(this);

	volumeSlider = new QSlider();
	sensisivitySlider = new QSlider();
	recordButton = new QPushButton("Record voice");
	FPS = new QCheckBox("30 FPS");

	mainLayout = new QVBoxLayout();

	mainLayout->addWidget(volumeSlider);
	mainLayout->addWidget(sensisivitySlider);
	mainLayout->addWidget(recordButton);
	mainLayout->addWidget(FPS);
	   
	centralWidget->setLayout(mainLayout);
	setCentralWidget(centralWidget);
}

OptionsPage::~OptionsPage()
{
	delete centralWidget;
	delete volumeSlider;
	delete sensisivitySlider;
	delete recordButton;
	delete FPS;
	delete mainLayout;
}