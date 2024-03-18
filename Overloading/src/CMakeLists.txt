
set(SOURCES customString.cpp
            customString.h)

add_library(customString ${SOURCES})
target_include_directories(customString PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})