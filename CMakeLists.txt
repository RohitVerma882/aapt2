cmake_minimum_required(VERSION 3.14.2)
project(aapt)

# Use C11 with GNU extensions.
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Use C++20 with GNU extensions.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Android seems to use various attributes supported by clang but not by
# GCC which causes it to emit lots of warnings. Since these attributes
# don't seem to effect runtime behaviour simply disable the warnings.
add_compile_options(-Wno-attributes)

# set global cflags and cxxflags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fcolor-diagnostics -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics -fPIC")

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
