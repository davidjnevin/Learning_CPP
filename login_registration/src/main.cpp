#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

// Simple hash function for demonstration purposes
std::string hashPassword(const std::string& password) {
    unsigned int hash = 0;
    for (char c : password) {
        hash = 31 * hash + c;
    }
    return std::to_string(hash);
}

// User registration
void registerUser(std::map<std::string, std::string>& users) {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    // Hash the password before storing
    std::string hashedPassword = hashPassword(password);

    // Store the username and hashed password
    users[username] = hashedPassword;
}

// User login
void loginUser(const std::map<std::string, std::string>& users) {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    // Hash the entered password
    std::string hashedPassword = hashPassword(password);

    // Check if the username exists and the hashed password matches
    if (users.count(username) > 0 && users.at(username) == hashedPassword) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Invalid username or password!\n";
    }
}

int main() {
    std::map<std::string, std::string> users;
    int choice;

    while (true) {
        std::cout << "1. Register\n2. Login\n3. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                registerUser(users);
                break;
            case 2:
                loginUser(users);
                break;
            case 3:
                return 0;
            default:
                std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}

