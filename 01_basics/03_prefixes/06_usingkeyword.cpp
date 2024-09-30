#include <iostream>

/*
    "using" - same as "typedef"
*/

using text_t = std::string;
using number_t = int;
int main() {

    text_t myName = "Suresh";
    number_t myAge = 43;
    std::cout << "Hello, My name is " << myName << "And, I am " << myAge << " years old.";

    return 0;
}