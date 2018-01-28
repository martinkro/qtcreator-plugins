QTC_SOURCE = E:/projects/qtcreator-4.5.0
QTC_BUILD = E:/projects/qtcreator-build-4.5.0

IDE_SOURCE_TREE = $$QTC_SOURCE
IDE_BUILD_TREE  = $$QTC_BUILD
include($$QTC_SOURCE/src/qtcreatorplugin.pri)
SOURCES += exampleplugin.cpp

HEADERS += exampleplugin.h \
        example_global.h \
        exampleconstants.h
        
DEFINES += EXAMPLE_LIBRARY

