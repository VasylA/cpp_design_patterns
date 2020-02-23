QT += core
QT -= gui

CONFIG += c++11

TARGET = Visitor
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    electricitysystemvalidator.cpp \
    floor.cpp \
    building.cpp \
    plumbingsystemvalidator.cpp \
    room.cpp

HEADERS += \
    visitor.h \
    element.h \
    electricitysystemvalidator.h \
    floor.h \
    room.h \
    building.h \
    plumbingsystemvalidator.h
