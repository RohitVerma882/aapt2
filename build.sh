#!/usr/bin/env bash

echored () {
  echo "${TEXTRED}$1${TEXTRESET}"
}

echogreen () {
  echo "${TEXTGREEN}$1${TEXTRESET}"
}

TEXTRESET=$(tput sgr0)
TEXTGREEN=$(tput setaf 2)
TEXTRED=$(tput setaf 1)

if [[ -z $NDK_PATH ]]; then
    echored "Please specify the Android NDK environment variable \"NDK_PATH\"."
    exit 1
fi

TOOLCHAIN=$NDK_PATH/toolchains/llvm/prebuilt/linux-x86_64
STRIP=$TOOLCHAIN/bin/llvm-strip
CLEAN=termux-elf-cleaner
BUILDDIR="$(pwd)/build"

ARCH=$1
API=24
[ -z $ARCH ] && ARCH=aarch64

case $ARCH in
    arm64|aarch64) ARCH=aarch64; ABI=arm64-v8a;;
    arm) ARCH=arm; ABI=armeabi-v7a;;
    x64|x86_64) ARCH=x86_64; ABI=x86_64;;
    x86|i686) ARCH=i686; ABI=x86;;
    *) echored "Invalid arch: $ARCH!"; exit 1;;
esac
echogreen "Compiling for arch: $ARCH, api: $API"

echogreen "Configuring"
cmake -GNinja -B $BUILDDIR \
    -DCMAKE_TOOLCHAIN_FILE=$NDK_PATH/build/cmake/android.toolchain.cmake \
    -DANDROID_ABI=$ABI \
    -DANDROID_NATIVE_API_LEVEL=$API \
    -DANDROID_PLATFORM="android-$API" \
    -DCMAKE_SYSTEM_NAME="Android" \
    -DCMAKE_BUILD_TYPE="Release" \
    -DANDROID_STL="c++_static" \
    -DPROTOC_PATH="$(find $TOOLS_PATH -name protoc-3.9.*)"
[ $? -eq 0 ] || { echored "Configure failed!"; exit 1; }

echogreen "Building"
ninja -C $BUILDDIR -j$(nproc) || exit 1
[ $? -eq 0 ] || { echored "Building failed!"; exit 1; }

AAPT2=$BUILDDIR/bin/aapt2
ZIPALIGN=$BUILDDIR/bin/zipalign

$CLEAN --api-level $API $AAPT2
$CLEAN --api-level $API $ZIPALIGN
$STRIP --strip-all $AAPT2
$STRIP --strip-all $ZIPALIGN

[ $? -eq 0 ] && { echogreen "aapt2 and zipalign binary built sucessfully"; }