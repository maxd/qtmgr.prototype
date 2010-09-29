! include( ../common.pri ) {
    error( Couldn't find the common.pri file! )
}

TEMPLATE = lib
CONFIG += staticlib

TARGET = gui

QT       += core gui

SOURCES += mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += \
    ../controls
