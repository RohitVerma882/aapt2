add_library(libziparchive STATIC
    ${SRC_PATH}/libziparchive/zip_archive.cc
    ${SRC_PATH}/libziparchive/zip_archive_stream_entry.cc
    ${SRC_PATH}/libziparchive/zip_cd_entry_map.cc
    ${SRC_PATH}/libziparchive/zip_writer.cc
    ${SRC_PATH}/libziparchive/zip_error.cpp
    ${SRC_PATH}/libziparchive/incfs_support/signal_handling.cpp)

target_compile_definitions(libziparchive PRIVATE
    -DZLIB_CONST
    -D_FILE_OFFSET_BITS=64
    -DZIPARCHIVE_DISABLE_CALLBACK_API=1)
    
target_include_directories(libziparchive PRIVATE
    ${SRC_PATH}/libziparchive/include
    ${SRC_PATH}/libziparchive/incfs_support/include
    ${SRC_PATH}/libbase/include 
    ${SRC_PATH}/liblog/include
    ${SRC_PATH}/googletest/googletest/include)