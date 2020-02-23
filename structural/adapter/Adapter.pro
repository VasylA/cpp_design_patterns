QT += core
QT -= gui

CONFIG += c++11

TARGET = Adapter
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    oldelectricitysystem.h \
    newelectricitysystem.h \
    adapter.h \
    electricitycustomer.h
