#!/bin/bash

NDK_TOOLCHAIN="${NDK_PATH}/toolchains/llvm/prebuilt/linux-aarch64"

compile() {
    abi="$1"
    c_compiler=""
    cxx_compiler=""
    case $abi in
    "arm64-v8a")
        c_compiler="aarch64-linux-android32-clang"
        cxx_compiler="aarch64-linux-android32-clang++"
        ;;
    "armeabi-v7a")
        c_compiler="armv7a-linux-androideabi32-clang"
        cxx_compiler="armv7a-linux-androideabi32-clang++"
        ;;
    "x86")
        c_compiler="i686-linux-android32-clang"
        cxx_compiler="i686-linux-android32-clang++"
        ;;
    "x86_64")
        c_compiler="x86_64-linux-android32-clang"
        cxx_compiler="x86_64-linux-android32-clang++"
        ;;
    *)
        echo "Unknown architecture: $abi"
        exit 1
        ;;
    esac
    currentdir="$(pwd)"
    outdir="$currentdir/prebuilt/$abi"

    rm -rf "build"
    
    mkdir "build" && cd "build" || exit 1

    cmake -G 'Ninja' \
        -DCMAKE_C_COMPILER="$NDK_TOOLCHAIN/bin/$c_compiler" \
        -DCMAKE_CXX_COMPILER="$NDK_TOOLCHAIN/bin/$cxx_compiler" \
        -DCMAKE_BUILD_WITH_INSTALL_RPATH=True \
        -DCMAKE_SYSROOT="$NDK_TOOLCHAIN/sysroot" \
        -DCMAKE_BUILD_TYPE=Release \
        -DANDROID_ABI="$abi" \
        .. || exit 1

    ninja -j16 || exit 1

    "$NDK_TOOLCHAIN/bin/llvm-strip" --strip-unneeded "cmake/aapt"
    "$NDK_TOOLCHAIN/bin/llvm-strip" --strip-unneeded "cmake/aapt2"
    "$NDK_TOOLCHAIN/bin/llvm-strip" --strip-unneeded "cmake/aidl"
    "$NDK_TOOLCHAIN/bin/llvm-strip" --strip-unneeded "cmake/zipalign"
    
    mkdir -p "$outdir"
    
    mv "cmake/aapt" "$outdir"
    mv "cmake/aapt2" "$outdir"
    mv "cmake/aidl" "$outdir"
    mv "cmake/zipalign" "$outdir"
    
    cd "$currentdir" || exit 1
}

build() {
    for abi in "arm64-v8a" \
        "armeabi-v7a" \
        "x86" \
        "x86_64"; do
            compile $abi
    done
}

main() {
    echo "Building..."
    build
    echo "All done!"
}

main
