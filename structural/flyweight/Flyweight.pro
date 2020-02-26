QT += core
QT -= gui

CONFIG += c++17

TARGET = Flyweight
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    flyweightfactory.cpp

HEADERS += \
    flyweight.h \
    flyweightfactory.h \
    sharedstate.h \
    uniquestate.h

