#include <iostream>
#include <cmath>

int main() {

    // Today we are going to find the hypotenuse of the right angled triangle.
    // The formula for calculating the Hypotenuse is (c = sqrt(a^(2) + b^(2)))
    
    double side_one, side_two, hypotenuse;

    std::cout << "Enter the First Side: " << '\n';
    std::cin >> side_one;

    std::cout << "Enter the Second Side: " << '\n';
    std::cin >> side_two;

    side_one = pow(side_one, 2);
    side_two = pow(side_two, 2);

    hypotenuse = sqrt(side_one + side_two);

    std::cout << "The Hypotenuse of the Right Angled Triangle is: " << hypotenuse << " sq.cm." << '\n';
    return 0;
}
