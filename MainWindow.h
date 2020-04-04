#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define MAX_HEIGHT 20
#define MAX_WIDTH 20

#include <QMainWindow>
#include <qlayout.h>
#include <qpixmap.h>
#include <qlabel.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
	QWidget *centralWidget;
	QGridLayout *mainLayout;
};
#endif // MAINWINDOW_H
