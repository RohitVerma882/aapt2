add_executable(zipalign
    ${SRC_PATH}/zipalign/ZipAlignMain.cpp
    ${SRC_PATH}/zipalign/ZipAlign.cpp
    ${SRC_PATH}/zipalign/ZipEntry.cpp
    ${SRC_PATH}/zipalign/ZipFile.cpp)

target_include_directories(zipalign PUBLIC
    ${SRC_PATH}/zipalign/include
    ${SRC_PATH}/zopfli/src
    ${SRC_PATH}/libbase/include
    ${SRC_PATH}/liblog/include
    ${SRC_PATH}/libutils/include
    ${SRC_PATH}/libziparchive/include)

target_link_libraries(zipalign 
    libutils 
    libbase
    liblog
    libziparchive
    libzopfli
    c++_static
    z)
