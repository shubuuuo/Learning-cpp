#include <iostream>

int main() {

    std::cout << "Determining Whether you passed or not?" << '\n';
    
    int grade;
    std::cout << "Enter your Grade: " << '\n';
    std::cin >> grade;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    std::cout << '\n' << "Now we will check if the number is odd or even?" << '\n';

    int num1;
    std::cout << "Enter your number: " << '\n';
    std::cin >> num1;

    num1 % 2 == 0 ? std::cout << "EVEN" : std::cout << "ODD";

    bool not_hungry, hungry = true;

    hungry ? std::cout << '\n' << "You are hungry" : std::cout << "You are full";

    // There's one more way to write this program in another method.

    std::cout << '\n' << (not_hungry ? "You are not Hungry" : "You are not full");
    return 0;
}
