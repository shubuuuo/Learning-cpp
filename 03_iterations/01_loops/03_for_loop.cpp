#include <iostream>

/*
    for loop = A for loop in c++ is a loop which runs a specific amout of time.
*/

int main() {

    for (int i = 0; i <= 10; i+=2)
    {
        std::cout << i << '\n';
    }
    // we can do many things with iterations
    // like.. i+=2, i-=2, etc. 
    // Note: It is imp to put (=) sign in iteration if we are iterating +2 
    // If we do not do that then the output will go infinite.
    
    std::cout << "Thank you :)";

    return 0;
}