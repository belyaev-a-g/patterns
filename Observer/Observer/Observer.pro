TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    observer.cpp \
    client.cpp \
    twitter.cpp \
    email.cpp

HEADERS += \
    observer.h \
    client.h \
    twitter.h \
    email.h
