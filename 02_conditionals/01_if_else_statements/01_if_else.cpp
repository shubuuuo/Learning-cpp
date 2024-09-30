#include <iostream>

/*
    if statements = do something if a condition is true.
                    if not, then don't do it.
*/

int main() {

    int your_age;

    std::cout << "********************************" << '\n';
    std::cout << "      DRIVING TEST" << '\n';

    std::cout << "Enter Your Age: " << '\n';
    std::cin >> your_age;

    if (your_age > 18)
    {
        std::cout << "You can Drive the Car." << '\n';
    } else
    {
        std::cout << "You cannot Drive the car." << '\n';
    }

    std::cout << "********************************" << '\n';

    return 0;
}
