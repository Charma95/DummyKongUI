#include "MainWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
	w.setWindowIcon(QIcon("Images/Icon.png"));
	w.showMaximized();

    return a.exec();
}
