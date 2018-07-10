QT += core
QT -= gui

CONFIG += c++11

TARGET = testArmadillo
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    src/main.cpp


win32: LIBS += -L$$PWD/armadillo-3.930.0/lib/ -llapack_win32_MT
win32: LIBS += -L$$PWD/armadillo-3.930.0/lib/ -lblas_win32_MT

INCLUDEPATH += $$PWD/armadillo-3.930.0/include
DEPENDPATH += $$PWD/armadillo-3.930.0/include




