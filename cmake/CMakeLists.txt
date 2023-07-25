PROJECT(cmake)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Third_party libraries.
add_subdirectory(third_party)

include(libbase.cmake)
include(libcutils.cmake)
include(libutils.cmake)
include(liblog.cmake)
include(libziparchive.cmake)
include(libandroidfw.cmake)
include(libincfs.cmake)

include(aapt2.cmake)
include(zipalign.cmake)
