TEMPLATE = app
TARGET = Un_Gerrymandered_Software

QT = core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES +=  main.cpp \
    mainwindow.cpp \
    md_two.cpp \
    md_four.cpp \
    md_six.cpp \
    md_eight.cpp \
    md_ten.cpp \
    md_twelve.cpp \
    md_fourteen.cpp \
    md_sixteen.cpp \
    nc_one.cpp \
    wy_one.cpp

RESOURCES += \
    maps.qrc

FORMS += \
    mainwindow.ui \
    md_two.ui \
    md_four.ui \
    md_six.ui \
    md_eight.ui \
    md_ten.ui \
    md_twelve.ui \
    md_fourteen.ui \
    md_sixteen.ui \
    nc_one.ui \
    wy_one.ui

HEADERS += \
    mainwindow.h \
    md_two.h \
    md_four.h \
    md_six.h \
    md_eight.h \
    md_ten.h \
    md_twelve.h \
    md_fourteen.h \
    md_sixteen.h \
    nc_one.h \
    wy_one.h
