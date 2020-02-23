QT += core
QT -= gui

CONFIG += c++11

TARGET = ChainOfResponsibility
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    tom.cpp \
    wierdcafevisitor.cpp \
    amanda.cpp \
    bob.cpp

HEADERS += \
    wierdcafevisitor.h \
    food.h \
    tom.h \
    amanda.h \
    bob.h
