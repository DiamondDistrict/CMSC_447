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
    wy_one.cpp \
    nc_three.cpp \
    nc_five.cpp \
    nc_seven.cpp \
    nc_nine.cpp \
    nc_eleven.cpp \
    nc_thirteen.cpp \
    nc_fifteen.cpp \
    wy_two.cpp \
    wy_three.cpp \
    wy_four.cpp \
    wy_five.cpp \
    wy_six.cpp \
    wy_seven.cpp \
    wy_eight.cpp

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
    wy_one.ui \
    nc_three.ui \
    nc_five.ui \
    nc_seven.ui \
    nc_nine.ui \
    nc_eleven.ui \
    nc_thirteen.ui \
    nc_fifteen.ui \
    wy_two.ui \
    wy_three.ui \
    wy_four.ui \
    wy_five.ui \
    wy_six.ui \
    wy_seven.ui \
    wy_eight.ui

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
    wy_one.h \
    nc_three.h \
    nc_five.h \
    nc_seven.h \
    nc_nine.h \
    nc_eleven.h \
    nc_thirteen.h \
    nc_fifteen.h \
    wy_two.h \
    wy_three.h \
    wy_four.h \
    wy_five.h \
    wy_six.h \
    wy_seven.h \
    wy_eight.h
