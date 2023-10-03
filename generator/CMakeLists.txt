cmake_minimum_required(VERSION 3.24.0)

project(generator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(generator main.cpp)
target_include_directories(generator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)