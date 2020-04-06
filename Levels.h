#pragma once

//#include "MainWindow.h"
#include <qwidget.h>
#include <qlayout.h>
#include <qpushbutton.h>

class LevelsPage : public QWidget
{
	Q_OBJECT
public:
	LevelsPage(QWidget *parent = nullptr);
	~LevelsPage();
private:
	QVBoxLayout *mainLayout;
	QPushButton *level1;
	QPushButton *level2;
	QPushButton *level3;

public slots:
	void showGameWindow();

signals:
	void levelSelected();
};
