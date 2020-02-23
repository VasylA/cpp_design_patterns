QT += core
QT -= gui

TARGET = Command
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    projectmanagercommand.cpp \
    herodevelopercommand.cpp \
    customer.cpp

HEADERS += \
    icommand.h \
    projectmanagercommand.h \
    team.h \
    herodevelopercommand.h \
    herodeveloper.h \
    customer.h

