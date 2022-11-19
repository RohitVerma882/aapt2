add_library(libfmt STATIC 
    ${SRC_PATH}/fmtlib/format.cc
    ${SRC_PATH}/fmtlib/os.cc)

target_include_directories(libfmt PUBLIC ${SRC_PATH}/fmtlib/include)