/*
    FOREACH LOOP - There's less syntax in foreach loop than for loop but it's also less flexible
                    It's is also known as loop that eases the traversal over an iterable data set.
                    For eg: Using for loop we can go forward, backward or even start at the middle.
                    But using foreach loop we just start and reach the end hence, less flexibility.
*/

#include <iostream>

int main()
{

    std::string students[] = {"Pokemon", "Doraemon", "perman"};

    for (std::string student : students)
    {
        std::cout << student << '\n';
    }

    return 0;
}
