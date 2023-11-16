add_library(libincfs STATIC
    ${SRC}/incremental_delivery/incfs/util/map_ptr.cpp)

target_include_directories(libincfs PUBLIC
    ${SRC}/incremental_delivery/incfs/util/include 
    ${SRC}/libbase/include
    ${SRC}/core/libutils/include)