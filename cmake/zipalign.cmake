add_executable(zipalign
    ${SRC}/zipalign/ZipAlignMain.cpp
    ${SRC}/zipalign/ZipAlign.cpp
    ${SRC}/zipalign/ZipEntry.cpp
    ${SRC}/zipalign/ZipFile.cpp)

target_include_directories(zipalign PRIVATE
    ${SRC}/libbase/include
    ${SRC}/logging/liblog/include
    ${SRC}/core/libutils/include
    ${SRC}/libziparchive/include
    ${SRC}/zipalign/include
    ${SRC}/third_party/zopfli/src)

target_link_libraries(zipalign
    libbase libutils liblog libziparchive libzopfli libz)
