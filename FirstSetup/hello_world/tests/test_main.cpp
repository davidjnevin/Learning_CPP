#include <gtest/gtest.h>
#include "main.hpp"

TEST(GetGreetingTest, CheckGreeting) {
    EXPECT_EQ(get_greeting(), "Hello World from C++");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

