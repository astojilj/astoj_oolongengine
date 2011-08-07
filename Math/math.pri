INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/../../Include

HEADERS += \
    $$PWD/Vector.h \
    $$PWD/Transform.h \
    $$PWD/Random.h \
    $$PWD/Quaternion.h \
    $$PWD/Matrix.h \
    $$PWD/Endian.h \
    $$PWD/neonmath/neon_matrix_impl.h \
    $$PWD/vfpmath/vfp_clobbers.h \
    $$PWD/vfpmath/utility_impl.h \
    $$PWD/vfpmath/matrix_impl.h \
    $$PWD/vfpmath/common_macros.h

SOURCES += \
    $$PWD/Vector.cpp \
    $$PWD/Transform.cpp \
    $$PWD/Random.cpp \
    $$PWD/Matrix.cpp \
    $$PWD/neonmath/neon_matrix_impl.cpp \
    $$PWD/vfpmath/utility_impl.cpp \
    $$PWD/vfpmath/matrix_impl.cpp



