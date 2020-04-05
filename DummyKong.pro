TEMPLATE     = vcapp
TARGET       = DummyKong
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MainWindow.h Help.h Options.h Levels.h GameWindow.h
SOURCES     += MainWindow.cpp main.cpp Help.cpp Options.cpp Levels.cpp GameWindow.cpp
INCLUDEPATH += .
LIBS	      += 
QT += widgets
