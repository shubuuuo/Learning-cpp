#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

    char player, choice, computer;
    std::cout << "# ROCK PAPER SCISSORS #" << '\n';

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{

    char player;

    do
    {
        std::cout << "*************************" << '\n';
        std::cout << "Choose your Options: " << '\n';
        std::cout << "*************************" << '\n';

        std::cout << "Choose: 'r' for rock " << '\n';
        std::cout << "Choose: 'p' for paper " << '\n';
        std::cout << "Choose: 's' for scissor " << '\n';
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
}
char getComputerChoice()
{

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << '\n';
        break;
    case 'p':
        std::cout << "Paper" << '\n';
        break;
    case 's':
        std::cout << "Scissor" << '\n';
        break;

    default:
        break;
    }
}
void chooseWinner(char player, char computer)
{

    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a Tie!" << '\n';
        }
        else if (computer == 'p')
        {
            std::cout << "Computer won!" << '\n';
        }
        else
        {
            std::cout << "You won!" << '\n';
        }
        break;
    case 'p':
        if (computer == 'p')
        {
            std::cout << "It's a Tie!" << '\n';
        }
        else if (computer == 's')
        {
            std::cout << "Computer won!" << '\n';
        }
        else
        {
            std::cout << "You won!" << '\n';
        }
        break;
    case 's':
        if (computer == 's')
        {
            std::cout << "It's a Tie!" << '\n';
        }
        else if (computer == 'r')
        {
            std::cout << "Computer won!" << '\n';
        }
        else
        {
            std::cout << "You won!" << '\n';
        }
        break;

    default:
        std::cout << "Can't choose winner!" << '\n';
        break;
    }
}
