#-------------------------------------------------
#
# Project created by QtCreator 2019-03-15T18:53:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Automated_accounting_system_for_livestock_farms
TEMPLATE = app
QT       += sql
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
    show_database.cpp \
    changetableemploee.cpp \
    changetablestatisticss.cpp \
    settings.cpp \
    changetableanimals.cpp \
    information.cpp

HEADERS += \
        mainwindow.h \
    show_database.h \
    changetableemploee.h \
    changetablestatisticss.h \
    settings.h \
    changetableanimals.h \
    information.h

FORMS += \
        mainwindow.ui \
    show_database.ui \
    changetableemploee.ui \
    changetablestatisticss.ui \
    settings.ui \
    changetableanimals.ui \
    information.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
