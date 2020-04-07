#pragma once

#include <qwidget.h>
#include <qlayout.h>
#include <qlabel.h>

class GamePage : public QWidget
{
	Q_OBJECT
public:
	GamePage(QWidget *parent = nullptr);
	~GamePage();
private:
	QGridLayout *gameLayout;
};
