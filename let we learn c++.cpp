#include <iostream>
#include <string>
#include <unordered_map>

class UserAuth {
    std::unordered_map<std::string, std::string> users;  // Stores username and password pairs

public:
    void registerUser(const std::string& username, const std::string& password) {
        if (users.find(username) != users.end()) {
            std::cout << "Username already exists. Please choose a different username.\n";
        } else {
            users[username] = password;
            std::cout << "User registered successfully!\n";
        }
    }

    bool loginUser(const std::string& username, const std::string& password) {
        if (users.find(username) != users.end() && users[username] == password) {
            std::cout << "Login successful!\n";
            return true;
        } else {
            std::cout << "Invalid username or password.\n";
            return false;
        }
    }
};

int main() {
    UserAuth auth;
    int choice;
    std::string username, password;

    while (true) {
        std::cout << "1. Register\n2. Login\n3. Exit\nChoose an option: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter a username: ";
            std::cin >> username;
            std::cout << "Enter a password: ";
            std::cin >> password;
            auth.registerUser(username, password);
            break;
        case 2:
            std::cout << "Enter username: ";
            std::cin >> username;
            std::cout << "Enter password: ";
            std::cin >> password;
            auth.loginUser(username, password);
            break;
        case 3:
            return 0;
        default:
            std::cout << "Invalid option. Please try again.\n";
        }
    }
}

