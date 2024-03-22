set(SOURCES family.cpp family.h)

add_library(family STATIC ${SOURCES})

target_include_directories(family INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})