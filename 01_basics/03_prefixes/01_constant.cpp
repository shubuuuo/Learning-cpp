#include <iostream>

int main() {

    const double PI = 3.14;
    // Use 'const' only if you know for certain that the provided value is not going to be changed.
    // The Variables are always in capital letters if we are declaring const.

    double RADIUS = 10;
    double circumference = 2 * PI * RADIUS;
    std::cout << "The Circumference of the circle is " << circumference << '\n';

    return 0;
}
