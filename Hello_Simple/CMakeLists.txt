# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the project name and version
project(Hello VERSION 1.0)
add_executable(Hello main.cpp)
