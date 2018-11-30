cmake_minimum_required(VERSION 2.8.3)
project(trytry)
add_definitions(-g -Wall -std=c++11 )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")


find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(trytry main_try.cpp)
