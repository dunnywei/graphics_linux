#-------------------------------------------------
#
# Project created by QtCreator 2018-03-31T23:33:27
#
#-------------------------------------------------

QT       += core gui widgets opengl 

LIBS +=-lGLEW -lglfw -lglut -lGLEW -lGLU -lGL -lX11 -lXxf86vm -lrt -lm -pthread -lXrandr -lXinerama

TARGET = Test1
TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp

HEADERS  += mainwindow.h
