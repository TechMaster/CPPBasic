cmake_minimum_required(VERSION 3.3)
project(ncurseBasic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lncurses")

set(SOURCE_FILES main.cpp)
add_executable(ncurseBasic ${SOURCE_FILES})