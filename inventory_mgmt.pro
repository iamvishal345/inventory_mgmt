#-------------------------------------------------
#
# Project created by QtCreator 2017-01-21T16:19:54
#
#-------------------------------------------------

QT       += core gui
QT       += sql


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
    customer_edit.cpp \
    editusername.cpp \
    addnewvehicle.cpp \
    editvehicle.cpp \
    vehicle_record.cpp \
    stock_record.cpp \
    addnew_supplier.cpp \
    edit_supplier.cpp \
    customer_payments.cpp \
    vehicle_payment.cpp \
    supplier_edit.cpp \
    supplier_payment.cpp \
    supplier_record.cpp

HEADERS  += mainwindow.h \
    new_item.h \
    adjust.h \
    addnew_customer.h \
    customer_drecord.h \
    formlogin.h \
    customer_edit.h \
    editusername.h \
    addnewvehicle.h \
    editvehicle.h \
    vehicle_record.h \
    stock_record.h \
    addnew_supplier.h \
    edit_supplier.h \
    customer_payments.h \
    vehicle_payment.h \
    supplier_edit.h \
    supplier_payment.h \
    supplier_record.h

FORMS    += mainwindow.ui \
    new_item.ui \
    adjust.ui \
    addnew_customer.ui \
    customer_drecord.ui \
    customer_edit.ui \
    editusername.ui \
    addnewvehicle.ui \
    editvehicle.ui \
    vehicle_record.ui \
    stock_record.ui \
    addnew_supplier.ui \
    edit_supplier.ui \
    customer_payments.ui \
    vehicle_payment.ui \
    supplier_edit.ui \
    supplier_payment.ui \
    supplier_record.ui

RESOURCES += \
    icons.qrc \
    image.qrc
