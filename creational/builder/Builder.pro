QT += core
QT -= gui

CONFIG += c++11

TARGET = Builder
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    laptop.h \
    laptopbuilder.h \
    gamelaptopbuilder.h \
    triplaptopbuilder.h \
    master.h
