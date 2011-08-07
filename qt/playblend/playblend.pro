TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .

QT += opengl
QT += core gui
LIBS += -ljpeg

DEFINES += QT_BUILD OPENGL_ES_2_0

INCLUDEPATH += ../../Include
INCLUDEPATH += /usr/include
INCLUDEPATH += ../../Application

include(../../Utility/utility.pri)
include(../../Bullet/src/bulletphysics.pri)
include(../../Examples/Demos/ReadBlend/BlenderSerialize/blenderserialize.pri)
include(../../Math/math.pri)
include(../../Renderer/renderer.pri)


# Input
SOURCES += main.cpp \
    ../../Examples/Demos/ReadBlend/Application.cpp \
    ../../Examples/Demos/ReadBlend/BulletBlendReaderNew.cpp \
    ../../Examples/Demos/ReadBlend/OolongReadBlend.cpp


HEADERS += \
    ../../Application/Application.h

# install
target.path = /usr/bin/

desktop.path = /usr/share/applications
desktop.files += playblend.desktop

graphics.path = /usr/share/playblend/
graphics.files += ../../Examples/Demos/ReadBlend/icon.png \
    ../../Examples/Demos/ReadBlend/PhysicsAnimationBakingDemo.blend


shaders.path = /usr/share/playblend/
shaders.files += ../../Examples/Demos/ReadBlend/Toon.frag \
    ../../Examples/Demos/ReadBlend/Toon.vert \
    ../../Examples/Demos/ReadBlend/Color.frag \
    ../../Examples/Demos/ReadBlend/Color.vert \
    ../../Examples/Demos/ReadBlend/Texture.frag \
    ../../Examples/Demos/ReadBlend/Texture.vert

INSTALLS += target desktop graphics shaders

OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog \
    qtc_packaging/debian_fremantle/rules \
    qtc_packaging/debian_fremantle/README \
    qtc_packaging/debian_fremantle/copyright \
    qtc_packaging/debian_fremantle/control \
    qtc_packaging/debian_fremantle/compat \
    qtc_packaging/debian_fremantle/changelog
