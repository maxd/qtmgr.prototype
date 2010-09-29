TEMPLATE = app


TARGET = qtmgr
PRE_TARGETDEPS += \
    ../gui \
    ../controls


SOURCES += \
    main.cpp

LIBS += \
    -L../gui -lgui \
    -L../controls -lcontrols

INCLUDEPATH += \
    ../gui \
    ../controls
