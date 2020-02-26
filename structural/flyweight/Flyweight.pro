QT += core
QT -= gui

TARGET = Flyweight
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    flyweight.h \
    flyweightfactory.h \
    sharedstate.h \
    uniquestate.h

