#-------------------------------------------------
#
# Project created by QtCreator 2024-08-25T21:32:13
#
#-------------------------------------------------

QT       += core gui \
        sql \
        serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CrossroadGradeManageSystem
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    database/admintablemodel.cpp \
    database/checkpointstablemodel.cpp \
    database/dbmanager.cpp \
    database/matchestablemodel.cpp \
    database/participantstablemodel.cpp \
    database/resultstablemodel.cpp \
    database/rfidrecordstablemodel.cpp \
    pages/export/exportdatas.cpp \
    pages/welcome/mainpage.cpp \
    serialThread/serialportthread.cpp \
    tools/tools.cpp \
    main.cpp \
    mainwindow.cpp \
    pages/connect/settingsdialog.cpp \
    pages/login/loginpage.cpp

HEADERS += \
    database/admintablemodel.h \
    database/checkpointstablemodel.h \
    database/database_api.h \
    database/dbmanager.h \
    database/matchestablemodel.h \
    database/participantstablemodel.h \
    database/resultstablemodel.h \
    database/rfidrecordstablemodel.h \
    pages/export/exportdatas.h \
    pages/welcome/mainpage.h \
    serialThread/serialportthread.h \
    tools/tools.h \
    mainwindow.h \
    inc/m1356dll.h \
    inc/m1356dll_global.h \
    pages/connect/settingsdialog.h \
    pages/pages.h \
    pages/login/loginpage.h

FORMS += \
        mainwindow.ui \
    pages/welcome/mainpage.ui \
    pages/export/exportdatas.ui \
    pages/connect/settingsdialog.ui \
    pages/login/loginpage.ui

DISTFILES += \
    lib/libM1356Dll.a \
    lib/M1356Dll.dll

win32: LIBS += -L$$PWD/lib/ -lM1356Dll
