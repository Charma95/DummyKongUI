#include "Help.h"



HelpPage::HelpPage(QWidget *parent)
	:QMainWindow(parent)
{
	helpWidget = new QWidget(this);
	helpLayout = new QGridLayout();

	Message = new QLabel("Ceci est une autre fenetre qui communique avec la premiere");
	helpLayout->addWidget(Message);

	helpWidget->setLayout(helpLayout);
	setCentralWidget(helpWidget);
}

	HelpPage::~HelpPage()
{
		delete Message;
		delete helpLayout;
		delete helpWidget;
}