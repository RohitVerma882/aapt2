add_library(liblog STATIC
    ${SRC_PATH}/liblog/log_event_list.cpp
    ${SRC_PATH}/liblog/log_event_write.cpp
    ${SRC_PATH}/liblog/logger_name.cpp
    ${SRC_PATH}/liblog/logger_read.cpp
    ${SRC_PATH}/liblog/logger_write.cpp
    ${SRC_PATH}/liblog/properties.cpp
    ${SRC_PATH}/liblog/logprint.cpp)

target_compile_definitions(liblog PRIVATE
    -DLIBLOG_LOG_TAG=1006 
    -D_XOPEN_SOURCE=700)
    
target_include_directories(liblog PUBLIC
    ${SRC_PATH}/libcutils/include
    ${SRC_PATH}/libutils/include 
    ${SRC_PATH}/libsystem/include
    ${SRC_PATH}/liblog/include
    ${SRC_PATH}/libbase/include)