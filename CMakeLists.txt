cmake_minimum_required(VERSION 3.14.2)
project(aapt)

enable_language(ASM)


# set global cflags and cxxflags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fcolor-diagnostics -fPIC -Wno-attributes -std=gnu11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics -fPIC -Wno-attributes -std=gnu++2a")

# static link
set(CMAKE_EXE_LINKER_FLAGS "-static")

set(SRC_PATH ${PROJECT_SOURCE_DIR}/src)
set(TOOLS_VERSION "31.0.3")

# 64-bit off_t for lseek.
add_definitions(-D_FILE_OFFSET_BITS=64)


if(NOT DEFINED ANDROID_ABI)
    message(FATAL_ERROR "ANDROID_ABI is not defined")
endif()


# prebuilt static
add_library(protobuf STATIC IMPORTED)
set_target_properties(protobuf PROPERTIES IMPORTED_LOCATION ${SRC_PATH}/protobuf/lib/${ANDROID_ABI}/libprotobuf.a)


# building
add_subdirectory(cmake)
