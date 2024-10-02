#include <iostream>
#include <time.h>

int main() {

    // Createing a random number within a range of 1 to 6
    srand(time(NULL));

    std::cout << "Randomly throwing three dice: " << '\n';
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    int num4 = (rand() % 20) + 1;
    int num5 = (rand() % 12) + 1;

    std::cout << "**************************" << '\n';

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    std::cout << "**************************" << '\n';
    
    std::cout << "Other random Numebers. " << '\n';
    std::cout << num4 << '\n';
    std::cout << num5 << '\n';

    return 0;
}   