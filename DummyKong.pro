TEMPLATE     = vcapp
TARGET       = DummyKong
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += MainWindow.h Help.h
SOURCES     += MainWindow.cpp main.cpp Help.cpp
INCLUDEPATH += .
LIBS	      += 
QT += widgets
