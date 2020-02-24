QT += core
QT -= gui

TARGET = Proxy
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    robotbombdefuser.cpp \
    robotbombdefuserproxy.cpp \
    bombdefuseoperation.cpp

HEADERS += \
    robotbombdefuser.h \
    robotbombdefuserproxy.h \
    bombdefuseoperation.h \
    badconnectionexception.h

