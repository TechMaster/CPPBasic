cmake_minimum_required(VERSION 3.3)
project(stdArray)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Person.cpp Person.h)
add_executable(stdArray ${SOURCE_FILES})