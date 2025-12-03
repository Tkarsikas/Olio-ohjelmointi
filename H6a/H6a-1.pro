TEMPLATE = app
CONFIG += console c++17 \
    qt
CONFIG -= app_bundle
QT = core

SOURCES += \
        main.cpp \
        myclass.cpp

HEADERS += \
    myclass.h
