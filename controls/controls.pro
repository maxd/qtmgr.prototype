! include( ../common.pri ) {
    error( Couldn't find the common.pri file! )
}

TEMPLATE = lib
CONFIG += staticlib

TARGET = controls

SOURCES += \
    filespanel.cpp \
    commandlineeditor.cpp

HEADERS += \
    filespanel.h \
    commandlineeditor.h

FORMS += \
    filespanel.ui \
    commandlineeditor.ui
