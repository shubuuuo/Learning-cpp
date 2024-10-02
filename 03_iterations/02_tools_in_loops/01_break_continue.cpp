#include <iostream>

/*
    break = break out of a lop
    continue = skip current iteration
*/

int main() {

    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        } 
        else if (i == 17)
        {
            break;
        }
        
        std::cout << i << '\n';
        
    }
    

    return 0;
}
