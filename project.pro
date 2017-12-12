TEMPLATE = app
TARGET = Un_Gerrymandered_Software

QT = core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES +=  main.cpp \
    mainwindow.cpp \
    md_eight.cpp \
    nc_one.cpp \
    wy_one.cpp

RESOURCES +=

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h \
    md_eight.h \
    nc_one.h \
    wy_one.h \
    ui_md.h \
    ui_nc.h \
    ui_wy.h
