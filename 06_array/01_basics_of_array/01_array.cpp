/*
    Array : A dtaa structure that can hold multiple values;
            values are accessed by an index numbers;
            (A variable that holds multiple values) 
*/

#include <iostream>

int main() {

    // initializing Array
    std::string burger[] = {"MacDonalds", "BurgerKing", "Dominos"};

    // Printing specific Array
    std::cout << burger[0] << '\n';
    std::cout << burger[1] << '\n';
    std::cout << burger[2] << '\n';

    // modified Array
    burger[0] = "Homemade One";
    
    // printing modified Array
    std::cout << burger[0] << '\n';
    std::cout << burger[1] << '\n';
    std::cout << burger[2] << '\n';

    // At first we intialized the varible and put the strings in the varible, but we can do it in different way too.
    // for example: 
    // initializing aaray with size 3
    std::string pokemon[3];

    // Inputiing values
    pokemon[0] = "charmander";
    pokemon[1] = "squirtle";
    pokemon[2] = "bulbasaur";

    // printing aaray
    std::cout << pokemon[0] << '\n';
    std::cout << pokemon[1] << '\n';
    std::cout << pokemon[2] << '\n';

    // same with double
    double prices[] = {22.00, 33.09, 1.23, 43.00};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';
    return 0;
}
