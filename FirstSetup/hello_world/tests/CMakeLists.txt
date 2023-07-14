# Add test executable
add_executable(test_main test_main.cpp)

# Link test executable against gtest & gtest_main
target_link_libraries(test_main ${GTEST_LIBRARIES} pthread)

cmake_minimum_required(VERSION 3.5)

set(This Test)

set(Sources
    test_main.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    HelloWorldLib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)

