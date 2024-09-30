#include <iostream>
#include <vector>

/*
    typedef: 1> Reserved keyworf used to create an additional name
                (alias) for another data type.
                New identifier for an axisting type.
                Helps with readibility and reduces typos.
             2> Use when there is a clear Benifit.
             3> Replaced with "using" (Works better w/ templates)
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main() {

    pairlist_t pairlist; 
    text_t myName = "Ramesh";
    number_t age = 32;

    std::cout << "My name is " << myName << '\n';
    std::cout << "And my age is " << age << '\n';

    return 0;
}