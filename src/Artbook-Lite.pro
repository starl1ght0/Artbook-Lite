QT += widgets

TARGET = Artbook-Lite
TEMPLATE = app

SOURCES += main.cpp

SOURCES += MainWindow.cpp
HEADERS += MainWindow.h

QT += core gui

CONFIG += c++17 console
CONFIG -= app_bundle