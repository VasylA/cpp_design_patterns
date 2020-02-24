QT += core
QT -= gui

CONFIG += c++17

TARGET = Bridge
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    buildingcompany.cpp \
    brickwallcreator.cpp \
    concreteslabwallcreator.cpp

HEADERS += \
    ibuildingcompany.h \
    buildingcompany.h \
    iwallcreator.h \
    brickwallcreator.h \
    concreteslabwallcreator.h
