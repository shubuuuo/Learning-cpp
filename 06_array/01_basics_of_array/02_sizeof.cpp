/*
    sizeof = determines the size in bytes of a
                variable, data type, class, objects, etc.
*/ 

#include <iostream>

int main() {

    int integertype = 1;
    std::string string1 = "Shubuuuo";
    std::string string2 = "shubuuuo is a good boy";
    char charachter = 'S';
    double number_float = 32.00;
    char char_2[] = {'A', 'B', 'C', 'D'};
    bool hehe = true;
    // 4 bytes
    std::cout << sizeof(integertype) << '\n';
    // the size of both the string is gonna be 32 bytes cause a string is a referene data type.
    std::cout << sizeof(string1) << '\n';
    std::cout << sizeof(string2) << '\n';
    // 1 byte
    std::cout << sizeof(charachter) << '\n';
    // 8 byte
    std::cout << sizeof(number_float) << '\n';
    // how much the size of array
    std::cout << sizeof(char_2) << '\n';
    // 1 byte
    std::cout << sizeof(hehe) << '\n';

    // We can use this sizeof operator to find how many charachter are in the array.
    char lol[] = {'L', 'M','A', 'O', 'H', 'H'};
    // 1st way = Size of one array divided by the size of one element of it.
    std::cout << sizeof(lol)/sizeof(lol[0]) << '\n';
    // 2nd way = Size of one array divided by the size of charachter(data type).
    std::cout << sizeof(lol)/sizeof(char) << '\n';

    return 0;
}