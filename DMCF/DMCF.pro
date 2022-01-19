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
    testform10.cpp \
    testform11.cpp \
    testform12.cpp \
    testform13.cpp \
    testform14.cpp \
    testform15.cpp \
    testform16.cpp \
    testform17.cpp \
    testform18.cpp \
    testform19.cpp \
    testform2.cpp \
    testform20.cpp \
    testform21.cpp \
    testform23.cpp \
    testform24.cpp \
    testform25.cpp \
    testform26.cpp \
    testform27.cpp \
    testform29.cpp \
    testform3.cpp \
    testform30.cpp \
    testform31.cpp \
    testform32.cpp \
    testform33.cpp \
    testform4.cpp \
    testform5.cpp \
    testform6.cpp \
    testform7.cpp \
    testform8.cpp \
    testform9.cpp \
    tstform22.cpp

HEADERS += \
    auth_window.h \
    mainwindow.h \
    modules.h \
    reg_window.h \
    testform1.h \
    testform10.h \
    testform11.h \
    testform12.h \
    testform13.h \
    testform14.h \
    testform15.h \
    testform16.h \
    testform17.h \
    testform18.h \
    testform19.h \
    testform2.h \
    testform20.h \
    testform21.h \
    testform23.h \
    testform24.h \
    testform25.h \
    testform26.h \
    testform27.h \
    testform29.h \
    testform3.h \
    testform30.h \
    testform31.h \
    testform32.h \
    testform33.h \
    testform4.h \
    testform5.h \
    testform6.h \
    testform7.h \
    testform8.h \
    testform9.h \
    tstform22.h

FORMS += \
    auth_window.ui \
    dialog.ui \
    mainwindow.ui \
    modules.ui \
    reg_window.ui \
    testform1.ui \
    testform10.ui \
    testform11.ui \
    testform12.ui \
    testform13.ui \
    testform14.ui \
    testform15.ui \
    testform16.ui \
    testform17.ui \
    testform18.ui \
    testform19.ui \
    testform2.ui \
    testform20.ui \
    testform21.ui \
    testform23.ui \
    testform24.ui \
    testform25.ui \
    testform26.ui \
    testform27.ui \
    testform29.ui \
    testform3.ui \
    testform30.ui \
    testform31.ui \
    testform32.ui \
    testform33.ui \
    testform4.ui \
    testform5.ui \
    testform6.ui \
    testform7.ui \
    testform8.ui \
    testform9.ui \
    tstform22.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
