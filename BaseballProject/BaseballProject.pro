#-------------------------------------------------
#
# Project created by QtCreator 2019-04-04T21:06:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BaseballProject
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        team.cpp \
        souvenirs.cpp \
        database.cpp \
        distance.cpp \
        orders.cpp \
    trip.cpp

HEADERS += \
        mainwindow.h \
        team.h \
        souvenirs.h \
        priorityQueue.h \
        database.h \
        distance.h \
        orders.h \
    trip.h \
    adjlistgraph.h \
    graph.h

FORMS += \
        mainwindow.ui \

DISTFILES += \
    Icons/stadium.jpg \
    Icons/baseball.png \
    Icons/cart.png \
    Icons/tools.png

include(3rdParty/qtxlsx/xlsx/qtxlsx.pri)
