#include <iostream>

void sort(int numbers[], int size);
void sort1(int numbers[], int size);

int main()
{

    int numbers[] = {10, 3, 4, 7, 2, 5, 9, 6, 8, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }

    sort1(numbers, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}

void sort(int numbers[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
void sort1(int numbers[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
