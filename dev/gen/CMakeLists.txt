cmake_minimum_required(VERSION 3.24.0)

project(GEN)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRCS ./src/*.cpp)

add_executable(GEN memory.cpp ${SRCS})
target_include_directories(GEN PRIVATE include)