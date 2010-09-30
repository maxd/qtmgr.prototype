! include( ../staticlib.pri ) {
    error( Couldn't find the staticlib.pri file! )
}

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
