#include <iostream>
#include <time.h>

// Pseudo_random = NOT truely random (but close)

int main() {
    
    srand(time(NULL)); 

    int num = rand();

    // This will create a random number between 0 to 32,767
    
    std::cout << num;

    return 0;
}
