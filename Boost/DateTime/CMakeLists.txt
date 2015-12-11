cmake_minimum_required(VERSION 3.3)
project(DateTime)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(DateTime ${SOURCE_FILES})
include_directories("/usr/local/Cellar/boost/1.59.0/include")