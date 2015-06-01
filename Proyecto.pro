#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T22:42:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto
TEMPLATE = app


SOURCES += main.cpp\
        Proyecto.cpp \
    Tamagotchi.cpp \
    Cola.cpp \
    Pila.cpp \
    Nodo.cpp \
    Inicio.cpp

HEADERS  += Proyecto.h \
    Tamagotchi.h \
    Cola.h \
    Pila.h \
    Nodo.h \
    Inicio.h

FORMS    += Proyecto.ui \
    Inicio.ui

RESOURCES += \
    imagenes.qrc
