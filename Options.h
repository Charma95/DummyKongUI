#pragma once

#include <qmainwindow.h>
#include <QWidget>
#include <qpushbutton.h>
#include <qslider.h>
#include <qlayout.h>
#include <qcheckbox.h>

class OptionsPage : public QMainWindow
{
	Q_OBJECT
public:
	OptionsPage(QWidget *parent = nullptr);
	~OptionsPage();
private:
	QWidget *centralWidget;
	QVBoxLayout *mainLayout;
	QSlider *volumeSlider;
	QSlider *sensisivitySlider;
	QPushButton *recordButton;
	QCheckBox *FPS;
};
