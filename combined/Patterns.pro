QT += core
QT -= gui

CONFIG += c++11

TARGET = Patterns
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    listiterator.cpp \
    clock.cpp

HEADERS += \
    iterator.h \
    listiterator.h \
    craftsman.h \
    baker.h \
    booter.h \
    barman.h \
    clock.h
