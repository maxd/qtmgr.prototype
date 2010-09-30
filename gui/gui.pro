! include( ../staticlib.pri ) {
    error( Couldn't find the staticlib.pri file! )
}

TARGET = gui

QT       += core gui

SOURCES += mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += \
    ../controls
