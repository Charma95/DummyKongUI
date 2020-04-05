#include "Help.h"



HelpPage::HelpPage(QWidget *parent)
	:QMainWindow(parent)
{
	helpWidget = new QWidget(this);
	/*Setting the background color----------------------------*/
	QPalette pal = palette();
	pal.setColor(QPalette::Background, Qt::black);
	helpWidget->setAutoFillBackground(true);
	helpWidget->setPalette(pal);
	helpLayout = new QGridLayout();
	/*Set TextEdit color----------------------------------------------------------*/
	
	Message = new QLabel();
	Message->setFixedSize(700, 600);
	QFont f("Arial", 14);
	Message->setFont(f);
	Message->setText("<font color='blue'>Menu aide <br> les carottes sont cuites</font>");
	Message->setAlignment(Qt::AlignCenter);
	Ok = new QPushButton("Ok");
	Ok->setFixedSize(150, 35);
	QObject::connect(Ok, SIGNAL(clicked()), this, SLOT(closeHelpPage()));

	helpLayout->addWidget(Message,1,3,Qt::AlignCenter);
	helpLayout->addWidget(Ok, 5,3,Qt::AlignCenter);
	helpWidget->setLayout(helpLayout);
	setCentralWidget(helpWidget);
}

HelpPage::~HelpPage()
{
		delete Message;
		delete helpLayout;
		delete Ok;

		/* Must be the last deleted -------------------------------*/
		delete helpWidget;
}

void HelpPage::closeHelpPage() 
{
	this->close();
}