#include <iostream>

int myNum = 4;

void printNum(int myNum);

int main() {

    // Local variables = declared inside a function or block {}
    // Global Variable= declared outside of all functions
     
    int myNum = 1;
    
    
    std::cout << myNum << '\n';

    printNum(myNum);

    // If we want to get global variable specifically then...
    std::cout << ::myNum << '\n';
    // :: = scope resolution operator

    return 0;
}

// void printNum() {
//     std::cout << myNum;
// }
// The above Code wont work because the outside function doesn't know that muNum is declared in main function.

void printNum(int myNum) {
    myNum = 2;
    std::cout << myNum << '\n';
}

// Priority of Local Variable > Global Valriable
// Global Variable is Avoided because it pollutes 
// the global namespace & these variables are less secure.

