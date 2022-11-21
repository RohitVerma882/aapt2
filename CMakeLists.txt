cmake_minimum_required(VERSION 3.14.2)
project(aapt)

enable_language(ASM)

# set global cflags and cxxflags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fcolor-diagnostics -fPIC -Wno-attributes -std=c11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics -fPIC -Wno-attributes -std=c++20")

# static link
# set(CMAKE_EXE_LINKER_FLAGS "-static")

# 64-bit off_t for lseek.
add_definitions(-D_FILE_OFFSET_BITS=64)

set(SRC_PATH ${PROJECT_SOURCE_DIR}/src)
set(TOOLS_VERSION "33.0.3")

# building
add_subdirectory(src/googletest EXCLUDE_FROM_ALL)
add_subdirectory(src/zopfli EXCLUDE_FROM_ALL)
add_subdirectory(src/zlib EXCLUDE_FROM_ALL)
add_subdirectory(src/libpng EXCLUDE_FROM_ALL)
add_subdirectory(src/fmtlib EXCLUDE_FROM_ALL)
add_subdirectory(src/expat/expat EXCLUDE_FROM_ALL)
add_subdirectory(cmake)
