! include( ../common.pri ) {
    error( Couldn't find the common.pri file! )
}

QT       += core gui

TARGET = gui
TEMPLATE = lib
CONFIG += staticlib

SOURCES += mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
