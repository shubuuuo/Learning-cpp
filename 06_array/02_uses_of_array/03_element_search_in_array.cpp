#include <iostream>

int searchArray(int array[], int size, int element);
int searchFood(std::string array[], int size, std::string element);

int main()
{

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string fastFood[] = {"Samosa", "Vadapav", "Masala Bhaji"};

    int size = sizeof(numbers) / sizeof(numbers[0]);
    int size1 = sizeof(fastFood) / sizeof(fastFood[0]);
    int index;
    int index1;
    int myNum;
    std::string myFood;

    std::cout << "Enter food you want to search for: " << '\n';
    // std::cin >> myFood;
    std::getline(std::cin, myFood);

    std::cout << "Enter Element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    index1 = searchFood(fastFood, size1, myFood);

    if (index1 != -1)
    {
        std::cout << myFood << " is at index " << index1 << '\n';
    }
    else
    {
        std::cout << myFood << " is not in the index." << '\n';
    }
    

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index << '\n';
    }
    else
    {
        std::cout << myNum << " is not in the index." << '\n';
    }

    return 0;
}

int searchArray(int array[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int searchFood(std::string array[], int size, std::string element)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}