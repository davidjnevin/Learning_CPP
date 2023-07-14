#include <string>
#include <iostream>
#include "main.hpp"

std::string get_greeting() {
    return "Hello World from C++";
}

int main() {
    std::cout << get_greeting() << "\n";
    return 0;
}

