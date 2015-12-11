cmake_minimum_required(VERSION 3.3)
project(GetUserInput)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Student.cpp Student.h DateTime.cpp DateTime.h)
add_executable(GetUserInput ${SOURCE_FILES})