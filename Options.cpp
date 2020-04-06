#include "Options.h"

OptionsPage::OptionsPage(QWidget *parent) : QMainWindow(parent)
{
	centralWidget = new QWidget(this);

	optionsLabel = new QLabel();
	optionsLabel->setFont(QFont("Arial", 20, QFont::Bold));
	optionsLabel->setText("<font color='blue'>Options</font>");
	optionsLabel->setAlignment(Qt::AlignCenter);
	volumeLabel = new QLabel();
	volumeLabel->setText("<font color='blue'>Volume</font>");
	volumeSlider = new QSlider(Qt::Horizontal);
	sensitivityLabel = new QLabel();
	sensitivityLabel->setText("<font color='blue'>Microphone sensitivity</font>");
	sensitivitySlider = new QSlider(Qt::Horizontal);
	recordButton = new QPushButton("Record voice");
	FPS30 = new QRadioButton("30 FPS");
	FPS30->setChecked(true);
	QPalette* palette = new QPalette();
	palette->setColor(QPalette::Foreground, Qt::blue);
	FPS60 = new QRadioButton("60 FPS");
	FPS30->setPalette(*palette);
	FPS60->setPalette(*palette);
	okButton = new QPushButton("OK");
	QObject::connect(okButton, SIGNAL(clicked()), this, SLOT(close()));


	mainLayout = new QVBoxLayout();

	mainLayout->addWidget(optionsLabel, Qt::AlignCenter);
	mainLayout->addWidget(volumeLabel);
	mainLayout->addWidget(volumeSlider, Qt::AlignCenter);
	mainLayout->addWidget(sensitivityLabel);
	mainLayout->addWidget(sensitivitySlider, Qt::AlignCenter);
	mainLayout->addWidget(recordButton, Qt::AlignCenter);
	mainLayout->addWidget(FPS30);
	mainLayout->addWidget(FPS60);
	mainLayout->addWidget(okButton, Qt::AlignCenter);

	QPalette *pal = new QPalette();
	pal->setColor(QPalette::Background, Qt::black);
	centralWidget->setAutoFillBackground(true);
	centralWidget->setPalette(*pal);
	   
	centralWidget->setLayout(mainLayout);
	setCentralWidget(centralWidget);
	this->setMinimumSize(600, 600);
}

OptionsPage::~OptionsPage()
{
	delete optionsLabel;
	delete volumeSlider;
	delete sensitivitySlider;
	delete recordButton;
	delete FPS30;
	delete FPS60;
	delete okButton;
	delete mainLayout;
	delete centralWidget;
}