#include <iostream>

int main() {

    std::cout << "I like pizza!\n";
    // std - Standard, cout - output, \n - next line.

    std::cout << "I like pizza!" << '\n';
    // Or this...

    std::cout << "It's really Good." << std::endl;
    // Or we can do it like this. endl - endline, Benifit of using this is that it will clear output buffer.
    return 0;
}
