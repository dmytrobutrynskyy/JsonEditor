#-------------------------------------------------
#
# Project created by QtCreator 2015-11-09T00:33:33
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = JSON_Editor
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    jsonfile.cpp \
    src/lib_json/json_internalmap.inl \
    src/lib_json/json_reader.cpp \
    src/lib_json/json_value.cpp \
    src/lib_json/json_valueiterator.inl \
    src/lib_json/json_writer.cpp \
    lib_json/json_internalarray.inl \
    lib_json/json_internalmap.inl \
    lib_json/json_reader.cpp \
    lib_json/json_value.cpp \
    lib_json/json_valueiterator.inl \
    lib_json/json_writer.cpp \
    stringfile.cpp

HEADERS += \
    jsonfile.h \
    include/json/autolink.h \
    include/json/config.h \
    include/json/features.h \
    include/json/forwards.h \
    include/json/json.h \
    include/json/reader.h \
    include/json/value.h \
    include/json/writer.h \
    src/lib_json/json_batchallocator.h \
    json/autolink.h \
    json/config.h \
    json/features.h \
    json/forwards.h \
    json/json.h \
    json/reader.h \
    json/value.h \
    json/writer.h \
    lib_json/json_batchallocator.h \
    stringfile.h

OTHER_FILES += \
    src/lib_json/sconscript \
    lib_json/sconscript
