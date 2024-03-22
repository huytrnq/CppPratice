cmake_minimum_required(VERSION 3.24.3)
project(inheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_executable(inheritance src/main.cpp)

target_link_libraries(inheritance PRIVATE family)