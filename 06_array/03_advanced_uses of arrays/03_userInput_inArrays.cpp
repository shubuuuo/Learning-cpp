#include <iostream>

int main() {

    std::string myFoods[5];
    int size = sizeof(myFoods)/sizeof(myFoods[0]);
    std::string temp;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the items you like or quit 'q' #" << i + 1 << ": ";
        std::getline(std::cin, temp);

        if (temp == "q")
        {
            break;
        } else
        {
            myFoods[i] = temp;
        }
    }
    
    std::cout << "You like the following food items: " << '\n';

    for (int i = 0; !myFoods[i].empty(); i++)
    {
        std::cout << myFoods[i] << '\n';
    }
    

    return 0;
}