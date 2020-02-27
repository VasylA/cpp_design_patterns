QT += core
QT -= gui

CONFIG += c++17

TARGET = Adapter
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    oldelectricitysystem.h \
    newelectricitysystem.h \
    universaladapter.h
