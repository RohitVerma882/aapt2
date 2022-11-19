set(COMPILE_FLAGS
    -Wno-unused-parameter
    -Wno-missing-field-initializers
    -fno-exceptions 
    -fno-rtti)
    
set(INCLUDES
    ${SRC_PATH}/aapt2
    ${SRC_PATH}/protobuf/src
    ${SRC_PATH}/liblog/include
    ${SRC_PATH}/expat
    ${SRC_PATH}/fmtlib/include
    ${SRC_PATH}/libpng
    ${SRC_PATH}/libbase/include
    ${SRC_PATH}/androidfw/include
    ${SRC_PATH}/libidmap2_policies/include
    ${SRC_PATH}/libsystem/include
    ${SRC_PATH}/libutils/include
    ${SRC_PATH}/googletest/include
    ${SRC_PATH}/libziparchive/include
    ${SRC_PATH}/incfs/util/include
    ${SRC_PATH}/sysprop/include)
    
set(LD_LIBS
    libaapt2
    libandroidfw 
    libincfs
    liblog
    libbase
    libutils
    libcutils
    libziparchive
    protobuf
    libpng
    libexpat
    libfmt
    c++_static
    z)

set(TOOL_SOURCE
    ${SRC_PATH}/aapt2/cmd/Command.cpp
    ${SRC_PATH}/aapt2/cmd/Compile.cpp
    ${SRC_PATH}/aapt2/cmd/Convert.cpp
    ${SRC_PATH}/aapt2/cmd/Diff.cpp
    ${SRC_PATH}/aapt2/cmd/Dump.cpp
    ${SRC_PATH}/aapt2/cmd/Link.cpp
    ${SRC_PATH}/aapt2/cmd/Optimize.cpp
    ${SRC_PATH}/aapt2/cmd/Util.cpp)
    
add_library(libaapt2 STATIC
    ${SRC_PATH}/aapt2/compile/IdAssigner.cpp
    ${SRC_PATH}/aapt2/compile/InlineXmlFormatParser.cpp
    ${SRC_PATH}/aapt2/compile/NinePatch.cpp
    ${SRC_PATH}/aapt2/compile/Png.cpp
    ${SRC_PATH}/aapt2/compile/PngChunkFilter.cpp
    ${SRC_PATH}/aapt2/compile/PngCrunch.cpp
    ${SRC_PATH}/aapt2/compile/PseudolocaleGenerator.cpp
    ${SRC_PATH}/aapt2/compile/Pseudolocalizer.cpp
    ${SRC_PATH}/aapt2/compile/XmlIdCollector.cpp
    ${SRC_PATH}/aapt2/configuration/ConfigurationParser.cpp
    ${SRC_PATH}/aapt2/dump/DumpManifest.cpp
    ${SRC_PATH}/aapt2/filter/AbiFilter.cpp
    ${SRC_PATH}/aapt2/filter/ConfigFilter.cpp
    ${SRC_PATH}/aapt2/format/Archive.cpp
    ${SRC_PATH}/aapt2/format/Container.cpp
    ${SRC_PATH}/aapt2/format/binary/BinaryResourceParser.cpp
    ${SRC_PATH}/aapt2/format/binary/ResChunkPullParser.cpp
    ${SRC_PATH}/aapt2/format/binary/TableFlattener.cpp
    ${SRC_PATH}/aapt2/format/binary/XmlFlattener.cpp
    ${SRC_PATH}/aapt2/format/proto/ProtoDeserialize.cpp
    ${SRC_PATH}/aapt2/format/proto/ProtoSerialize.cpp
    ${SRC_PATH}/aapt2/io/BigBufferStream.cpp
    ${SRC_PATH}/aapt2/io/File.cpp
    ${SRC_PATH}/aapt2/io/FileStream.cpp
    ${SRC_PATH}/aapt2/io/FileSystem.cpp
    ${SRC_PATH}/aapt2/io/StringStream.cpp
    ${SRC_PATH}/aapt2/io/Util.cpp
    ${SRC_PATH}/aapt2/io/ZipArchive.cpp
    ${SRC_PATH}/aapt2/link/AutoVersioner.cpp
    ${SRC_PATH}/aapt2/link/ManifestFixer.cpp
    ${SRC_PATH}/aapt2/link/NoDefaultResourceRemover.cpp
    ${SRC_PATH}/aapt2/link/ProductFilter.cpp
    ${SRC_PATH}/aapt2/link/PrivateAttributeMover.cpp
    ${SRC_PATH}/aapt2/link/ReferenceLinker.cpp
    ${SRC_PATH}/aapt2/link/ResourceExcluder.cpp
    ${SRC_PATH}/aapt2/link/TableMerger.cpp
    ${SRC_PATH}/aapt2/link/XmlCompatVersioner.cpp
    ${SRC_PATH}/aapt2/link/XmlNamespaceRemover.cpp
    ${SRC_PATH}/aapt2/link/XmlReferenceLinker.cpp
    ${SRC_PATH}/aapt2/optimize/MultiApkGenerator.cpp
    ${SRC_PATH}/aapt2/optimize/ResourceDeduper.cpp
    ${SRC_PATH}/aapt2/optimize/ResourceFilter.cpp
    ${SRC_PATH}/aapt2/optimize/ResourcePathShortener.cpp
    ${SRC_PATH}/aapt2/optimize/VersionCollapser.cpp
    ${SRC_PATH}/aapt2/process/SymbolTable.cpp
    ${SRC_PATH}/aapt2/split/TableSplitter.cpp
    ${SRC_PATH}/aapt2/text/Printer.cpp
    ${SRC_PATH}/aapt2/text/Unicode.cpp
    ${SRC_PATH}/aapt2/text/Utf8Iterator.cpp
    ${SRC_PATH}/aapt2/util/BigBuffer.cpp
    ${SRC_PATH}/aapt2/util/Files.cpp
    ${SRC_PATH}/aapt2/util/Util.cpp
    ${SRC_PATH}/aapt2/Debug.cpp
    ${SRC_PATH}/aapt2/DominatorTree.cpp
    ${SRC_PATH}/aapt2/java/AnnotationProcessor.cpp
    ${SRC_PATH}/aapt2/java/ClassDefinition.cpp
    ${SRC_PATH}/aapt2/java/JavaClassGenerator.cpp
    ${SRC_PATH}/aapt2/java/ManifestClassGenerator.cpp
    ${SRC_PATH}/aapt2/java/ProguardRules.cpp
    ${SRC_PATH}/aapt2/LoadedApk.cpp
    ${SRC_PATH}/aapt2/Resource.cpp
    ${SRC_PATH}/aapt2/ResourceParser.cpp
    ${SRC_PATH}/aapt2/ResourceTable.cpp
    ${SRC_PATH}/aapt2/ResourceUtils.cpp
    ${SRC_PATH}/aapt2/ResourceValues.cpp
    ${SRC_PATH}/aapt2/SdkConstants.cpp
    ${SRC_PATH}/aapt2/StringPool.cpp
    ${SRC_PATH}/aapt2/trace/TraceBuffer.cpp
    ${SRC_PATH}/aapt2/xml/XmlActionExecutor.cpp
    ${SRC_PATH}/aapt2/xml/XmlDom.cpp
    ${SRC_PATH}/aapt2/xml/XmlPullParser.cpp
    ${SRC_PATH}/aapt2/xml/XmlUtil.cpp
    ${SRC_PATH}/aapt2/Configuration.pb.cc
    ${SRC_PATH}/aapt2/Resources.pb.cc
    ${SRC_PATH}/aapt2/ResourcesInternal.pb.cc)

target_include_directories(libaapt2 PUBLIC ${INCLUDES})
target_compile_options(libaapt2 PRIVATE ${COMPILE_FLAGS})

add_library(aapt2_jni SHARED
    ${SRC_PATH}/aapt2/jni/aapt2_jni.cpp
    ${TOOL_SOURCE})
    
target_include_directories(aapt2_jni PUBLIC ${INCLUDES})
target_compile_options(aapt2_jni PRIVATE ${COMPILE_FLAGS})
target_link_libraries(aapt2_jni ${LD_LIBS})

add_executable(aapt2
    ${SRC_PATH}/aapt2/Main.cpp
    ${TOOL_SOURCE})
    
target_include_directories(aapt2 PUBLIC ${INCLUDES})
target_compile_options(aapt2 PRIVATE ${COMPILE_FLAGS})
target_link_libraries(aapt2 ${LD_LIBS})