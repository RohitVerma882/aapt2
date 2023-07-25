add_library(libz STATIC
    ${SRC}/third_party/zlib/adler32.c
    ${SRC}/third_party/zlib/compress.c
    ${SRC}/third_party/zlib/cpu_features.c
    ${SRC}/third_party/zlib/crc32.c
    ${SRC}/third_party/zlib/deflate.c
    ${SRC}/third_party/zlib/gzclose.c
    ${SRC}/third_party/zlib/gzlib.c
    ${SRC}/third_party/zlib/gzread.c
    ${SRC}/third_party/zlib/gzwrite.c
    ${SRC}/third_party/zlib/infback.c
    ${SRC}/third_party/zlib/inffast.c
    ${SRC}/third_party/zlib/inflate.c
    ${SRC}/third_party/zlib/inftrees.c
    ${SRC}/third_party/zlib/trees.c
    ${SRC}/third_party/zlib/uncompr.c
    ${SRC}/third_party/zlib/zutil.c)
target_compile_definitions(libz PRIVATE -DHAVE_HIDDEN -DZLIB_CONST)
target_include_directories(libz PUBLIC ${SRC}/third_party/zlib)
