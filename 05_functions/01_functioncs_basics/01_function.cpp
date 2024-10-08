#include <iostream>

void happyBirthday(std::string name);

int main() {

    std::string name;
    // funtion = a block of reusable code.
    std::cout << "Enter your Name: ";
    std::getline(std::cin, name);

    happyBirthday(name);

    return 0;
}

void happyBirthday(std::string name) {
    std::cout << "Happy Birthday To you " << name << '\n';
    std::cout << "Happy Birthday To you " << name << '\n';
    std::cout << "Happy Birthday Dear " << name << '\n';
    std::cout << "Happy Birthday To you!" << '\n';
}
