#-------------------------------------------------
#
# Project created by QtCreator 2017-01-21T16:19:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = inventory_mgmt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    new_item.cpp \
    adjust.cpp \
    addnew_customer.cpp \
    customer_drecord.cpp \
    formlogin.cpp \
    customer_edit.cpp

HEADERS  += mainwindow.h \
    new_item.h \
    adjust.h \
    addnew_customer.h \
    customer_drecord.h \
    formlogin.h \
    customer_edit.h

FORMS    += mainwindow.ui \
    new_item.ui \
    adjust.ui \
    addnew_customer.ui \
    customer_drecord.ui \
    customer_edit.ui

RESOURCES += \
    icons.qrc
