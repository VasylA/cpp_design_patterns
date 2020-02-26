QT += core
QT -= gui

TARGET = Decorator
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    car.h \
    mercedes.h \
    decoratedcar.h \
    ambulancecar.h \
    superfastcar.h

