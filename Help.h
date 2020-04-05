#pragma once

#include <QMainWindow>
#include <qlayout.h>
#include <qpixmap.h>
#include <qlabel.h>
#include <qpushbutton.h>

class HelpPage : public QMainWindow
{
	Q_OBJECT
public:
	explicit HelpPage(QWidget *parent = nullptr);
    ~HelpPage();
private:
	QLabel *Message;
	QWidget *helpWidget;
	QGridLayout *helpLayout;
};