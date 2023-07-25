cmake_minimum_required(VERSION 3.6)
project(aapt2 VERSION 1.0.0 LANGUAGES C CXX ASM)

if(NOT DEFINED PROTOC_PATH)
    message(FATAL_ERROR "PROTOC_PATH undefined, please make sure to build and install protoc from the cloned submodule." )
endif()

set(PROTOC_COMPILER ${PROTOC_PATH})
    
if(NOT EXISTS ${PROTOC_COMPILER})
    unset(PROTOC_PATH CACHE)
    message(FATAL_ERROR "Invalid protoc: ${PROTOC_COMPILER}, please check if the path is correct")
endif()

# Use C11 with GNU extensions
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Use C++17 with GNU extensions
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Disable warnings
add_compile_options(-Wno-attributes)

# 64-bit off_t for lseek
add_compile_definitions(_FILE_OFFSET_BITS=64)

set(SRC ${PROJECT_SOURCE_DIR}/src)

# Third_party libraries.
add_subdirectory(src/third_party/zopfli EXCLUDE_FROM_ALL)
add_subdirectory(src/third_party/fmtlib EXCLUDE_FROM_ALL)

# Building
add_subdirectory(cmake)
