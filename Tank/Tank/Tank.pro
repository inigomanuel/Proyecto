#-------------------------------------------------
#
# Project created by QtCreator 2016-11-15T08:54:31
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tank
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp \
    instrucciones.cpp \
    pantalla_jugador1.cpp \
    pantalla_jugador2.cpp \
    credits.cpp \
    matriz_juego_jugador2.cpp

HEADERS  += game.h \
    instrucciones.h \
    pantalla_jugador1.h \
    pantalla_jugador2.h \
    credits.h \
    matriz_juego_jugador2.h

FORMS    += game.ui \
    instrucciones.ui \
    pantalla_jugador1.ui \
    pantalla_jugador2.ui \
    credits.ui \
    matriz_juego_jugador2.ui

RESOURCES += \
    inicio.qrc
