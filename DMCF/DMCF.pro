QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    auth_window.cpp \
    main.cpp \
    mainwindow.cpp \
    modules.cpp \
    reg_window.cpp \
    testform1.cpp \
    testform2.cpp

HEADERS += \
    auth_window.h \
    mainwindow.h \
    modules.h \
    reg_window.h \
    testform1.h \
    testform2.h

FORMS += \
    auth_window.ui \
    mainwindow.ui \
    modules.ui \
    reg_window.ui \
    testform1.ui \
    testform2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
