#-------------------------------------------------
#
# Project created by QtCreator 2017-12-01T12:23:
#
#LIBS +=-lGLEW -lglfw3 -lGL -lX11 -lXi -lXrandr -lXxf86vm -lXinerama -lXcursor -lrt -lm -pthread
#-lglut -lGLU -lGL
#
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

LIBS +=-lGLEW -lGLU -lGL -lX11 -lXxf86vm -lrt -lm -pthread


TARGET = Test1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    oglwidget.cpp

HEADERS  += mainwindow.h \
    oglwidget.h

FORMS    += mainwindow.ui
