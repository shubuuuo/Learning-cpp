#include <iostream>

int main() {

    // In this, we don't neceassrily need to specify rows, but we need to do it for columns.
    std::string pokemon[][3] = {{"Charmander", "Cyndiquil", "Torchik"},
                                {"Squirtle", "Totodile", "Mudkip"},
                                {"Bulbasaur", "Chikorita", "Treeko"}};

    std::cout << "Which pokemon at index #1: " << pokemon[0][0] << '\n';

    int rows = sizeof(pokemon)/sizeof(pokemon[0]);
    int columns = sizeof(pokemon[0])/sizeof(pokemon[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << pokemon[i][j] << " ";
        }
        std::cout << '\n';
    }
    

    return 0;
}