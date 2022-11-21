add_library(protobuf STATIC IMPORTED)
set_target_properties(protobuf PROPERTIES IMPORTED_LOCATION ${SRC_PATH}/protobuf/lib/${ANDROID_ABI}/libprotobuf.a)

# deps
include(libbase.cmake)
include(libcutils.cmake)
include(libutils.cmake)
include(liblog.cmake)
include(libziparchive.cmake)
include(libandroidfw.cmake)
include(libincfs.cmake)

# tools
include(aapt.cmake)
include(aapt2.cmake)
include(aidl.cmake)
include(zipalign.cmake)
