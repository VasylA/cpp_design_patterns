QT += core
QT -= gui

CONFIG += c++11

TARGET = State
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    order.cpp \
    stategranted.cpp \
    orderstate.cpp

HEADERS += \
    order.h \
    stategranted.h \
    orderstate.h \
    product.h
