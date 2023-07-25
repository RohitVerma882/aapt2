add_library(libpng STATIC
    ${SRC}/third_party/libpng/png.c
    ${SRC}/third_party/libpng/pngerror.c
    ${SRC}/third_party/libpng/pngget.c
    ${SRC}/third_party/libpng/pngmem.c
    ${SRC}/third_party/libpng/pngpread.c
    ${SRC}/third_party/libpng/pngread.c
    ${SRC}/third_party/libpng/pngrio.c
    ${SRC}/third_party/libpng/pngrtran.c
    ${SRC}/third_party/libpng/pngrutil.c
    ${SRC}/third_party/libpng/pngset.c
    ${SRC}/third_party/libpng/pngtrans.c
    ${SRC}/third_party/libpng/pngwio.c
    ${SRC}/third_party/libpng/pngwrite.c
    ${SRC}/third_party/libpng/pngwtran.c
    ${SRC}/third_party/libpng/pngwutil.c)
  
if(ANDROID_ABI STREQUAL "arm64-v8a" OR ANDROID_ABI STREQUAL "armeabi-v7a")
    target_sources(libpng PRIVATE
        ${SRC}/third_party/libpng/arm/arm_init.c
        ${SRC}/third_party/libpng/arm/filter_neon_intrinsics.c
        ${SRC}/third_party/libpng/arm/palette_neon_intrinsics.c
        ${SRC}/third_party/libpng/arm/filter_neon.S)

elseif(ANDROID_ABI STREQUAL "x86_64" OR ANDROID_ABI STREQUAL "x86")
    target_sources(libpng PRIVATE
        ${SRC}/third_party/libpng/intel/intel_init.c
        ${SRC}/third_party/libpng/intel/filter_sse2_intrinsics.c)
    
    target_compile_definitions(libpng PRIVATE -DPNG_INTEL_SSE_OPT=1)
endif()
        
target_include_directories(libpng PRIVATE ${SRC}/third_party/libpng)
