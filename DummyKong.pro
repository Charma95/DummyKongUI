TEMPLATE     = vcapp
TARGET       = DummyKong
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MainWindow.h Help.h Options.h
SOURCES     += MainWindow.cpp main.cpp Help.cpp Options.cpp
INCLUDEPATH += .
LIBS	      += 
QT += widgets
