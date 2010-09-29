! include( ../common.pri ) {
    error( Couldn't find the common.pri file! )
}

TARGET = controls
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    filespanel.cpp

HEADERS += \
    filespanel.h

FORMS += \
    filespanel.ui
