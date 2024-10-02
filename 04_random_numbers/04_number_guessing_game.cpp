#include <iostream>
#include <ctime>

int main()
{

    int num, tries, guess;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "********************************" << '\n';
    std::cout << "     NUMBER GUESSING GAME       " << '\n';
    std::cout << "********************************" << '\n';

    std::cout << num << '\n';
    tries = 10;

    do
    {
        tries--;
        std::cout << "You have " << tries << "attempts left." << '\n';
        std::cout << "Enter Your Guess: " << '\n';
        std::cin >> guess;
        if (num == guess)
        {
            std::cout << "Congratulations! You Won!" << '\n';
            break;
        }
        else if (num - guess > 10)
        {
            std::cout << "OOPS! Too Low!" << '\n';
        }
        else if (num - guess > 1)
        {
            std::cout << "OOPS! Close But still Low!" << '\n';
        }
        else if (num - guess < -10)
        {
            std::cout << "OOPS! Too High!" << '\n';
        }
        else if (num - guess < -1)
        {
            std::cout << "OOPS! Close But still High!" << '\n';
        }
        else
        {
            std::cout << "INVALID INPUT" << '\n';
        }
    } while (tries > 0);

    std::cout << "********************************" << '\n';

    return 0;
}