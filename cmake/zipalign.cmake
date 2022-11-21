add_executable(zipalign
    ${SRC_PATH}/zipalign/ZipAlignMain.cpp
    ${SRC_PATH}/zipalign/ZipAlign.cpp
    ${SRC_PATH}/zipalign/ZipEntry.cpp
    ${SRC_PATH}/zipalign/ZipFile.cpp)

target_include_directories(zipalign PRIVATE
    ${SRC_PATH}/libbase/include
    ${SRC_PATH}/liblog/include
    ${SRC_PATH}/libutils/include
    ${SRC_PATH}/libziparchive/include)

target_include_directories(zipalign PRIVATE
    ${SRC}/zipalign/include
    ${SRC}/zopfli/src)
    
target_link_libraries(zipalign  
    libbase
    libutils
    liblog
    libziparchive
    libzopfli
    zlibstatic)
