## Required CMake version
cmake_minimum_required(VERSION 3.24.3)
## Project name
Project(opp LANGUAGES CXX)

## Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Add the library
add_library(account account.cpp player.cpp)

## Add the executable
add_executable(opp main.cpp)

## Link the library to the executable
target_link_libraries(opp account)