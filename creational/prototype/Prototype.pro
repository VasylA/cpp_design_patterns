QT += core
QT -= gui

CONFIG += c++11

TARGET = Prototype
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    calendarprototype.h \
    calendarevent.h \
    datetime.h
