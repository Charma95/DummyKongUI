#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAX_HEIGHT 15
#define MAX_WIDTH 15

#include <QMainWindow>
#include <qlayout.h>
#include <qpixmap.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include "Help.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
	QWidget *centralWidget;
	QGridLayout *mainLayout;
	QPushButton *Continue;
	QPushButton *Play;
	QPushButton *Option;
	QPushButton *Help;
	QPushButton *Exit;
    HelpPage *helpPage;   /* We shall convert it to smart pointer (shared pointer)*/
private slots:
	void showHelpPage();
};
#endif // MAINWINDOW_H
