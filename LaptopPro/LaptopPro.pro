#-------------------------------------------------
#
# Project created by QtCreator 2020-07-15T11:46:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LaptopPro
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
    ordetail.cpp \
    waitlist.cpp \
    addstore.cpp \
    user.cpp \
    register.cpp \
    admi.cpp \
    tuijian.cpp \
    yuce.cpp
        addstore.cpp
        ordetail.cpp
        waitlist.cpp

HEADERS += \
        mainwindow.h \
    addstore.h \
    ordetail.h \
    waitlist.h \
    user.h \
    register.h \
    admi.h \
    tuijian.h \
    yuce.h
        addstore.h
        ordetail.h
        waitlist.h

FORMS += \
        mainwindow.ui \
    addstore.ui \
    ordetail.ui \
    waitlist.ui \
    user.ui \
    register.ui \
    admi.ui \
    tuijian.ui \
    yuce.ui
        addstore.ui
        ordetail.ui
        waitlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
