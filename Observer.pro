TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    observerhandler.cpp \
    observer.cpp

HEADERS += \
    abstractobserver.h \
    observerhandler.h \
    observer.h
