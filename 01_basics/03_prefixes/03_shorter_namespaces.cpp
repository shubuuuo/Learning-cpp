#include <iostream>

namespace first
{
    // Here a error was thrown that a value of 'const char' cannot be used for const so instead I added * in that.
    const std::string name = "Shanaya";
    const int AGE = 21;
    const double rate_of_dress = 345.32;
    const char *grade = "A";
    const bool crime = false;
    const std::string city = "New Delhi";
} // namespace first

int main() {
    using namespace first;
    // By using this we have already assumed that we are using first namespace

    std::cout << name << " is " << AGE << " years old. " << '\n';
    std::cout << "She always buys dresses worth " << rate_of_dress << " rupees." << '\n';
    std::cout << "Crimes commited by her = " << crime << '\n';
    std::cout << name << " was always her grade. And she lives in " << city << '\n';

    return 0;
}