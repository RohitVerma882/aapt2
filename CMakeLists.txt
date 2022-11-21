cmake_minimum_required(VERSION 3.14.2)
project(aapt)

# Set global flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fcolor-diagnostics -fPIC -std=c11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics -fPIC -std=c++20")
set(CMAKE_CPP_FLAGS "${CMAKE_CPP_FLAGS} -DNDEBUG -D__ANDROID_SDK_VERSION__=__ANDROID_API__")

# Android seems to use various attributes supported by clang but not by
# GCC which causes it to emit lots of warnings. Since these attributes
# don't seem to effect runtime behaviour simply disable the warnings.
add_compile_options(-Wno-attributes)

# Sources and version
set(SRC_PATH ${PROJECT_SOURCE_DIR}/src)
set(TOOLS_VERSION "33.0.3")

# Building
add_subdirectory(src/googletest EXCLUDE_FROM_ALL)
add_subdirectory(src/zopfli EXCLUDE_FROM_ALL)
add_subdirectory(src/zlib EXCLUDE_FROM_ALL)
add_subdirectory(src/libpng EXCLUDE_FROM_ALL)
add_subdirectory(src/fmtlib EXCLUDE_FROM_ALL)
add_subdirectory(src/expat/expat EXCLUDE_FROM_ALL)
add_subdirectory(cmake)
