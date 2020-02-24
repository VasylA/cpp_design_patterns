QT += core
QT -= gui

CONFIG += c++17

TARGET = Adapter
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    inewelectricitysystem.h \
    oldelectricitysystem.h \
    newelectricitysystem.h \
    adapter.h \
    electricitycustomer.h
