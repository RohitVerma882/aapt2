add_library(libincfs STATIC ${SRC_PATH}/incfs/util/map_ptr.cpp)
    
target_include_directories(libincfs PUBLIC
    ${SRC_PATH}/incfs/util/include 
    ${SRC_PATH}/libbase/include
    ${SRC_PATH}/libutils/include
    ${SRC_PATH}/liblog/include)
