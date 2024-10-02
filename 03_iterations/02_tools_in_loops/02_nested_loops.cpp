#include <iostream>

int main() {

    int rows, colums;
    char symbol;

    std::cout << "Enter the number of Rows: " << '\n';
    std::cin >> rows;
    std::cout << "Enter the number of Colums: " << '\n';
    std::cin >> colums;
    std::cout << "Enter a symbol to use: " << '\n';
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colums; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    
    return 0;
}
