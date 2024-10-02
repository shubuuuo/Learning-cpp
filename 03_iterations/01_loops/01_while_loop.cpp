#include <iostream>

// While loop - It's like a if statement except it can repeat the code infinitely.

int main() {

    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: " << '\n';
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name;

    return 0;
}
