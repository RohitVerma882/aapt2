# ========================= aapt2 proto ============================
set(AAPT2_PROTO_SRC)  # proto source files
set(AAPT2_PROTO_HDRS) # proto head files
set(AAPT2_PROTO_DIR ${SRC_PATH}/aapt2)

file(GLOB_RECURSE PROTO_FILES ${AAPT2_PROTO_DIR}/*.proto)

foreach(proto ${PROTO_FILES})
    get_filename_component(FIL_WE ${proto} NAME_WE)
    
    if(DEFINED PROTOC_PATH)
        # execute the protoc command to generate the proto targets for host arch
        execute_process(
            COMMAND ${PROTOC_COMPILER} ${proto}
            --proto_path=${AAPT2_PROTO_DIR}
            --cpp_out=${AAPT2_PROTO_DIR}
            COMMAND_ECHO STDOUT
            RESULT_VARIABLE RESULT
            WORKING_DIRECTORY ${AAPT2_PROTO_DIR}
        )
    
        # check command result
        if(RESULT EQUAL 0)
            message(STATUS "generate cpp file ${TARGET_CPP_FILE}")
            message(STATUS "generate head file ${TARGET_HEAD_FILE}")
        endif()
    endif()
    
    set(TARGET_CPP_FILE "${AAPT2_PROTO_DIR}/${FIL_WE}.pb.cc")
    set(TARGET_HEAD_FILE "${AAPT2_PROTO_DIR}/${FIL_WE}.pb.h")
    
    if(EXISTS ${TARGET_CPP_FILE} AND EXISTS ${TARGET_HEAD_FILE})
        list(APPEND AAPT2_PROTO_SRC ${TARGET_CPP_FILE})
        list(APPEND AAPT2_PROTO_HDRS ${TARGET_HEAD_FILE})
    endif()
endforeach()

if(DEFINED PROTOC_PATH)
    set_source_files_properties(${AAPT2_PROTO_SRC} PROPERTIES GENERATED TRUE)
    set_source_files_properties(${AAPT2_PROTO_HDRS} PROPERTIES GENERATED TRUE)
endif()
# ========================= aapt2 proto ============================


add_executable(aapt2
    ${SRC_PATH}/aapt2/Main.cpp
    ${SRC_PATH}/aapt2/cmd/Command.cpp
    ${SRC_PATH}/aapt2/cmd/Compile.cpp
    ${SRC_PATH}/aapt2/cmd/Convert.cpp
    ${SRC_PATH}/aapt2/cmd/Diff.cpp
    ${SRC_PATH}/aapt2/cmd/Dump.cpp
    ${SRC_PATH}/aapt2/cmd/Link.cpp
    ${SRC_PATH}/aapt2/cmd/Optimize.cpp
    ${SRC_PATH}/aapt2/cmd/Util.cpp
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
    ${AAPT2_PROTO_SRC} ${AAPT2_PROTO_HDRS})
    
target_include_directories(aapt2 PRIVATE
    ${SRC_PATH}/aapt2
    ${SRC_PATH}/libbase/include
    ${SRC_PATH}/libsystem/include
    ${SRC_PATH}/libutils/include
    ${SRC_PATH}/liblog/include
    ${SRC_PATH}/androidfw/include
    ${SRC_PATH}/libidmap2_policies/include
    ${SRC_PATH}/libziparchive/include
    ${SRC_PATH}/incfs/util/include
    ${SRC_PATH}/googletest/googletest/include
    ${SRC_PATH}/protobuf/src
    ${SRC_PATH}/expat/lib
    ${SRC_PATH}/fmtlib/include
    ${SRC_PATH}/libpng)

target_compile_definitions(aapt2 PRIVATE
    -DPLATFORM_TOOLS_VERSION="${TOOLS_VERSION}")
    
target_compile_options(aapt2 PRIVATE
    -Wno-unused-parameter
    -Wno-missing-field-initializers
    -fno-exceptions 
    -fno-rtti)

target_link_libraries(aapt2
    libbase
    libutils
    libcutils
    liblog
    libandroidfw 
    libziparchive
    libincfs
    protobuf
    png_static
    expat
    zlibstatic)