#include <iostream>

// && = check if two conditions are true
//  || = check if at least one of two conditions is true
// ! = reverses the logical state of its operand

int main() {

    int temp;

    std::cout << "We are going to discuss if the whether is good or not." << '\n';
    std::cout << "Enter the Temperature." << '\n';
    std::cin >> temp;

    if (temp > 10 && temp < 30)
    {
        std::cout << "The whether is normal today." << '\n';
    } else if (temp >= 0 && temp <= 10 || temp < 0 && temp >= -100)
    {
        std::cout << "The Whther is freezing today!" << '\n';
    } else if (!(temp < 30))
    {
        std::cout << "The whether is too hot today!" << '\n';
    } else {
        std::cout << "INVALID INPUT" << '\n';
    }

    return 0;
}

/*
ERRORS:
The issue you're encountering is due to the way some of the conditions 
are structured in your else if statements. Specifically, 
there's a problem with this line:

} else if (10 < temp <= 0 || 0 > temp >= -100)

This line won't work as expected because 10 < temp <= 0 is not a valid C++ expression. 
In C++, the comparison 10 < temp <= 0 is evaluated from left to right, 
meaning 10 < temp is evaluated first, resulting in either true (1) or false (0). 
Then, this boolean result is compared to 0, which is incorrect.
*/
