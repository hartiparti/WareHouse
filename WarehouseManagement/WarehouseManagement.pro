QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    additemdialog.cpp \
    finalorderdialog.cpp \
    item.cpp \
    itemservice.cpp \
    itemtree.cpp \
    jsonparser.cpp \
    main.cpp \
    mainwindow.cpp \
    neworderdialog.cpp \
    order.cpp \
    orderservice.cpp

HEADERS += \
    additemdialog.h \
    finalorderdialog.h \
    item.h \
    itemservice.h \
    itemtree.h \
    jsonparser.h \
    mainwindow.h \
    neworderdialog.h \
    order.h \
    orderservice.h

FORMS += \
    additemdialog.ui \
    finalorderdialog.ui \
    mainwindow.ui \
    neworderdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/ekedalen.jpg \
    images/godmorgon.jfif \
    images/kornsjo.jpg \
    images/pax.jfif \
    images/sundvik.jpg \
    items.json \
    orders.json
