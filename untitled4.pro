CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(mycollectionplugin)
TEMPLATE    = lib

HEADERS     = mytabserplugin.h mycirclerplugin.h mycollection.h \
    interfaces.h \
    mytabserdialog.h
SOURCES     = mytabserplugin.cpp mycirclerplugin.cpp mycollection.cpp \
    mytabserdialog.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(mycircler.pri)
include(mytabser.pri)

FORMS += \
    wizard.ui
