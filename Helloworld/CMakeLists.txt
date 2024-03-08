cmake_minimum_required(VERSION 3.10)

## Set the project name and the language
project(HelloWorld LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Add an executable
add_executable(hello helloworld.cpp)