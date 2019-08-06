TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += "C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v9.2\include"
LIBS += -L"C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v9.2\lib\x64"
LIBS += -lcudart

SOURCES += \
        main.cpp
