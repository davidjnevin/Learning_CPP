cmake_minimum_required(VERSION 3.10)

project(ArraySortApp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(ArraySortApp src/main.cpp)

# Include directories
include_directories(include)

# Libraries
# target_link_libraries(ArraySortApp PRIVATE your_library)

