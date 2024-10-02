#include <iostream>

//  do while loop = do some block of code first,
//                  THEN repeat again if the condition is true.

int main() {

    int number;

    /*

    while (number < 0)
    {
        std::cout << "Enter a Positive #: " << '\n';
        std::cin >> number;
    }

    // This Block of code didn't work because we put the condition first then
    // the input is being taken.
    // So, What we need here is to make the program run once and then check 
    // the condition if it is true or not.

    */

   do
   {
    std::cout << "Enter a Positive #: " << '\n';
    std::cin >> number;
   } while (number < 0);
   

    std::cout << "The # is: "<< number;

    return 0;
}