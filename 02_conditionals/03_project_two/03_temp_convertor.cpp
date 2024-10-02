#include <iostream>

int main() {

    double temperature;
    char input;
    std::cout << "****************************" << '\n';
    std::cout << "     TEMPERATURE CONVERSION    " << '\n';
    std::cout << "****************************" << '\n';
    std::cout << "C = Celsius" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "****************************" << '\n';
    std::cout << "What would you like to convert to: " << '\n';
    std::cin >> input;

    if (input == 'F'  || input == 'f')
    {
        std::cout << "Enter the Temperature in Celsius: " << '\n';
        std::cin >> temperature;

        temperature = (1.8 * temperature) + 32.0;
        std::cout << "Temperature in Fahrenheit is: " << temperature << "F" << '\n';
    } else if (input == 'C' || input == 'c')
    {
        std::cout << "Enter the Temperature in Fahrenheit: " << '\n';
        std::cin >> temperature;

        temperature = (temperature - 32.0) / 1.8;
        std::cout << "Temperature in Celsius is: " << temperature << "C" << '\n';
    } else {
        std::cout << "Please Enter 'c' or 'f' only." << '\n'; 
    }

    std::cout << "****************************" << '\n';

    return 0;
}