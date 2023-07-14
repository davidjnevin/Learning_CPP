# Add the library
add_library(HelloWorldLib main.cpp)

# Include directories
target_include_directories(HelloWorldLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

