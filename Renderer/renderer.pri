INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/Resource
INCLUDEPATH += $$PWD/Core/GraphicsDevice
INCLUDEPATH += $$PWD/Core/UI

SOURCES += \
    $$PWD/transformInterpolator.cpp \
    $$PWD/shaderData.cpp \
    $$PWD/piper_p.cpp \
    $$PWD/piperGL20.cpp \
    $$PWD/piperGL11.cpp\
    $$PWD/Core/GraphicsDevice\Shader.cpp \
    $$PWD/Resource\ResourceFile.cpp \
    $$PWD/Core/UI/DisplayText.cpp \
    $$PWD/Core/UI/DisplayTextAPI.cpp



HEADERS +=  \
    $$PWD/transformInterpolator.h \
    $$PWD/shaderData.h \
    $$PWD/piper_p.h \
    $$PWD/piperGL20.h \
    $$PWD/piperGL11.h \
    $$PWD/piper.h \
    $$PWD/Core/GraphicsDevice\Shader.h \
    $$PWD/Resource\ResourceFile.h \
    $$PWD/Core/UI/DisplayText.h \
    $$PWD/Core/UI/DisplayTextAPI.h



