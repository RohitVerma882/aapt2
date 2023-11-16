add_library(libziparchive STATIC
    ${SRC}/libziparchive/zip_archive.cc
    ${SRC}/libziparchive/zip_archive_stream_entry.cc
    ${SRC}/libziparchive/zip_cd_entry_map.cc
    ${SRC}/libziparchive/zip_writer.cc
    ${SRC}/libziparchive/zip_error.cpp
    ${SRC}/libziparchive/incfs_support/signal_handling.cpp)

set_property(TARGET libziparchive PROPERTY CXX_STANDARD 20)
target_compile_definitions(libziparchive PRIVATE -DZLIB_CONST)

target_include_directories(libziparchive PRIVATE
    ${SRC}/libziparchive/include
    ${SRC}/libziparchive/incfs_support/include
    ${SRC}/libbase/include 
    ${SRC}/logging/liblog/include)