TEMPLATE = subdirs

SUBDIRS = \
    controls \
    gui

# app must be last:
CONFIG += ordered
SUBDIRS += app

