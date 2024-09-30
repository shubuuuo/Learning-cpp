#include <iostream>

int main() {

    std::cout << "DRIVING TEST" << '\n';

    int your_age;
    std::cout << "Enter your age: " << '\n';
    std::cin >> your_age;

    if (your_age >= 60)
    {
        std::cout << "You are too Old to drive.";
    }
    else if (your_age >= 18)
    {
        std::cout << "You can drive the car.";
    } else if (your_age < 0)
    {
        std::cout << "You haven't been born yet!";
    } else if (your_age < 18)
    {
        std::cout << "You are not old enough to drive the car.";
    } else
    {
        std::cout << "Enter Vaid Input.";
    }
    
    



    return 0;
}