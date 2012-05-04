QT       -= gui

TARGET = electro-components
TEMPLATE = lib

DEFINES += ELECTROCOMPONENTS_LIBRARY

SOURCES += electro-components.cpp

HEADERS += electro-components.h\
        electro-components_global.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE951182C
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = electro-components.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
