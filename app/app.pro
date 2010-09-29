TARGET = qtmgr
TEMPLATE = app

SOURCES += \
    main.cpp

LIBS += \
    -L../gui -lgui \
    -L../controls -lcontrols

INCLUDEPATH += \
    ../gui \
    ../controls
