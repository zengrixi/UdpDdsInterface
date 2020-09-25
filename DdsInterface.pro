#-------------------------------------------------
#
# Project created by QtCreator 2020-07-29T18:31:09
#
#-------------------------------------------------

QT       += core gui network positioning

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DdsInterface
TEMPLATE = app

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# RTIDDS配置
DEFINES += Linux \
    RTI_UNIX

# RTIDDS路径
MDS_PATH = /home/ywxt-18/MDS

# 子模块
include($$PWD/qt-json/qt-json.pri)

CONFIG(debug, release|debug) {
  SUFFIX = d
} else {
  SUFFIX =
}

INCLUDEPATH += $$MDS_PATH/usr/include \
                ./IDL \
                $$MDS_PATH/usr/include \
                $$MDS_PATH/usr/include/DDS \
                $$MDS_PATH/usr/include/DDS/ndds \
                $$MDS_PATH/usr/include/DDS/ndds/dds_c

LIBS += -L$$MDS_PATH/usr/lib \
        -lMDSxml \
        -lAbstractComponent \
        -lCommunicationManager \
        -lnddscpp$$SUFFIX \
        -lnddsc$$SUFFIX \
        -lnddscore$$SUFFIX \
        -ldl \
        -lnsl \
		-lm \
        -lpthread \
        -lrt \
        -lLog$$SUFFIX

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    database.cpp \
    udphelper.cpp \
    ddshelper.cpp \
    IDL/Entity/lhzs-vrforce-entity.cxx \
    IDL/Entity/lhzs-vrforce-entityPlugin.cxx \
    IDL/Entity/lhzs-vrforce-entitySupport.cxx \
    IDL/Command/lhzs-vrforce-command.cxx \
    IDL/Command/lhzs-vrforce-commandPlugin.cxx \
    IDL/Command/lhzs-vrforce-commandSupport.cxx \
    tcpsocket.cpp \
    app.cpp \
    savelog.cpp \
    onworker.cpp \
    IDL/Target/target.cxx \
    IDL/Target/targetPlugin.cxx \
    IDL/Target/targetSupport.cxx \
    testinfo.cxx \
    wrj_function_variable.cpp \
    wrj_module.cpp \
    waitdialog.cpp \
	SurveyMath/geocoordinate.cpp \
	SurveyMath/surveymath.cpp

HEADERS += \
        mainwindow.h \
    database.h \
    udphelper.h \
    commondef.h \
    ddshelper.h \
    IDL/Entity/lhzs-vrforce-entity.h \
    IDL/Entity/lhzs-vrforce-entityPlugin.h \
    IDL/Entity/lhzs-vrforce-entitySupport.h \
    IDL/Command/lhzs-vrforce-command.h \
    IDL/Command/lhzs-vrforce-commandPlugin.h \
    IDL/Command/lhzs-vrforce-commandSupport.h \
    tcpsocket.h \
    app.h \
    myhelper.h \
    savelog.h \
    onworker.h \
    IDL/Target/target.h \
    IDL/Target/targetPlugin.h \
    IDL/Target/targetSupport.h \
    testinfo.h \
    wrj_function_variable.h \
    wrj_module.h \
    waitdialog.h \
	SurveyMath/geocoordinate.h \
	SurveyMath/surveymath.h

FORMS += \
        mainwindow.ui \
    waitdialog.ui

DISTFILES += \
    IDL/Entity/lhzs-vrforce-entity.idl \
    IDL/Command/lhzs-vrforce-command.idl \
    IDL/Target/target.idl
