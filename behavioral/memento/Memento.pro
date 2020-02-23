QT += core
QT -= gui

TARGET = Memento
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    caretaker.cpp

HEADERS += \
    gamestate.h \
    gameoriginator.h \
    gamememento.h \
    caretaker.h

