add_library(libprotobuf STATIC
    ${SRC}/third_party/protobuf/src/google/protobuf/any_lite.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/arena.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/extension_set.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/generated_enum_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/generated_message_table_driven_lite.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/generated_message_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/implicit_weak_message.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/coded_stream.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/io_win32.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/strtod.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/zero_copy_stream.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/zero_copy_stream_impl_lite.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/message_lite.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/parse_context.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/repeated_field.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/bytestream.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/common.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/int128.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/status.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/statusor.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/stringpiece.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/stringprintf.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/structurally_valid.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/strutil.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/time.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/wire_format_lite.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/any.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/any.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/api.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/compiler/importer.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/compiler/parser.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/descriptor.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/descriptor.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/descriptor_database.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/duration.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/dynamic_message.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/empty.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/extension_set_heavy.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/field_mask.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/generated_message_table_driven.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/gzip_stream.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/printer.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/io/tokenizer.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/map_field.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/message.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/reflection_ops.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/service.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/source_context.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/struct.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/mathlimits.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/stubs/substitute.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/text_format.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/timestamp.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/type.pb.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/unknown_field_set.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/delimited_message_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/field_comparator.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/field_mask_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/datapiece.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/default_value_objectwriter.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/error_listener.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/field_mask_utility.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/json_escaping.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/json_objectwriter.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/json_stream_parser.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/object_writer.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/proto_writer.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/protostream_objectsource.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/protostream_objectwriter.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/type_info.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/type_info_test_helper.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/internal/utility.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/json_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/message_differencer.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/time_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/util/type_resolver_util.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/wire_format.cc
    ${SRC}/third_party/protobuf/src/google/protobuf/wrappers.pb.cc)

target_compile_definitions(libprotobuf PRIVATE -DHAVE_ZLIB=1)

target_include_directories(libprotobuf PRIVATE 
    ${SRC}/third_party/protobuf/android
    ${SRC}/third_party/protobuf/src)

target_include_directories(libprotobuf PUBLIC
    ${SRC}/third_party/protobuf/src)

target_link_libraries(libprotobuf PRIVATE libz)