#include <iostream>

/*
provides a solution for preventing name conflicts in large projects.
Each entity needs a unique name.
A namespace allows for identically named entities as long as the namespaces are different.
*/

namespace first{
    int x = 1;
} // namespace first
namespace second{
    int x = 2;
} // namespace second

int main() {

    int x = 0;
    
    // :: - scope resolution operator
    
    std::cout << "The first namespace contains " << first::x << '\n';
    std::cout << "The second namespace contains " << second::x << '\n';
    std::cout << "The main function without namespace contains " << x << '\n';

    return 0;
}