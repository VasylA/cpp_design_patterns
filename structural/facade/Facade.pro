QT += core
QT -= gui

TARGET = Facade
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    skiresortfacade.cpp

HEADERS += \
    skirentsystem.h \
    skiresortticketsystem.h \
    hotelbookingsystem.h \
    skiresortfacade.h

