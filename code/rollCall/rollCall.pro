#-------------------------------------------------
#
# Project created by QtCreator 2014-04-13T14:14:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rollCall
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    student.cpp \
    studentlist.cpp

HEADERS  += mainwindow.h \
    student.h \
    studentlist.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    List.txt
