add_library(libexpat STATIC
    ${SRC}/third_party/expat/lib/xmlparse.c
    ${SRC}/third_party/expat/lib/xmlrole.c
    ${SRC}/third_party/expat/lib/xmltok.c)

target_compile_options(libexpat PRIVATE
    -fno-strict-aliasing -include stdio.h)

target_compile_definitions(libexpat PRIVATE
    -DHAVE_EXPAT_CONFIG_H)

target_include_directories(libexpat PRIVATE
    ${SRC}/third_party/expat/lib
    ${SRC}/third_party/expat)
