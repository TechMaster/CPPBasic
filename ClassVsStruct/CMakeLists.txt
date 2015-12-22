cmake_minimum_required(VERSION 3.3)
project(ClassVsStruct)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Diem.cpp Point.cpp)
add_executable(ClassVsStruct ${SOURCE_FILES})