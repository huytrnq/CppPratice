set(SOURCES ../include/family.h
            ../include/base.h
            ../include/derived.h
            family.cpp 
            base.cpp
            derived.cpp)

add_library(inheritance_lib STATIC ${SOURCES})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

target_include_directories(inheritance_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/../include)