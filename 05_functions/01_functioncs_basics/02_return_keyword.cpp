#include <iostream>

double square(double side);

int main()
{

    // return = return a value back to the spot
    //           where you called the encompassing function

    double side;

    std::cout << "Enter the Value of Side: " << '\n';
    std::cin >> side;

    double area = square(side);

    std::cout << "The Value of area  of Square is " << area << "sq.cm." <<'\n';

    return 0;
}

double square(double side)
{
    return side * side;
}
