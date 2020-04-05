#pragma once

#include <QMainWindow>
#include <qlayout.h>
#include <qpixmap.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qtextedit.h>
#include <qcolor.h>


class HelpPage : public QMainWindow
{
	Q_OBJECT
public:
	explicit HelpPage(QWidget *parent = nullptr);
    ~HelpPage();
private slots:
	void closeHelpPage();
private:
	QLabel *Message;
	QWidget *helpWidget;
	QGridLayout *helpLayout;
	QColor *color;
	QPushButton *Ok;
};