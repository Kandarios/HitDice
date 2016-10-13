#-------------------------------------------------
#
# Project created by QtCreator 2016-10-13T13:11:36
#
#-------------------------------------------------

CONFIG += c++11

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HitDice
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp

HEADERS  += MainWindow.hpp

FORMS    += MainWindow.ui


QMAKE_CXXFLAGS += -std=c++11

RESOURCES += \
    resources.qrc

