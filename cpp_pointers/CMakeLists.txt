cmake_minimum_required(VERSION 3.10)

# Set the project name
project(PointersApp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(PointersApp src/main.cpp)

# Include directories
include_directories(include)

# Libraries
# target_link_libraries(LoginApp PRIVATE your_library)

