QT += core
QT -= gui

CONFIG += c++11

TARGET = AbstractFactory
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    animaltoy.h \
    cat.h \
    bear.h \
    itoyfactory.h \
    teddytoyfactory.h \
    woodentoyfactory.h
