#include <iostream>
#include <iomanip> // Header to use set precision function

double withdraw_money(double balance);
double deposit_money();
void show_balance(double balance);

int main()
{

    // We are going to do use some fucntions which will give our program some features regarding our balance.

    // For just decoration.
    std::cout << "******************************" << '\n';
    std::cout << "        Banking System        " << '\n';
    std::cout << "******************************" << '\n';
    std::cout << "Enter the Action you wanna take from below" << '\n';

    // Options for user.
    std::cout << "1 - Withdraw Money" << '\n';
    std::cout << "2 - Deposit Money" << '\n';
    std::cout << "3 - Show Balance" << '\n';
    std::cout << "4 - EXIT" << '\n';

    // declarations
    int input;
    double balance = 0;

    // clears the input buffer, basically if we enter any wrong valuse thne program doesn't go crazy.
    std::cin.clear();
    fflush(stdin);

    // do-while loop, to let the user exit if he wants to.
    do
    {
        // user's choice
        std::cout << "Enter your Action: " << '\n';
        std::cin >> input;
        // checking each case simultaneously
        switch (input)
        {
        case 1:
            balance -= withdraw_money(balance);
            show_balance(balance);
            break;
        case 2:
            balance += deposit_money();
            show_balance(balance);
            break;
        case 3:
            show_balance(balance);
            break;
        case 4:
            std::cout << "Thank you for Visiting :) " << '\n';
            break;

        default:
            std::cout << "Invaid Input." << '\n';
            break;
        }
    } while (input != 4);

    return 0;
}

double withdraw_money(double balance)
{

    // intial amount is zero
    double amount = 0;

    std::cout << "Enter the amount you want to withdraw: " << '\n';
    std::cin >> amount;

    // checks that amt is not greater than available balance or the amount isn't in negetive.
    if (amount > balance)
    {
        std::cout << "Insufficient Funds." << '\n';
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's not a valid amount." << '\n';
        return 0;
    }
    else
    {
        return amount;
    }
}
double deposit_money()
{

    // intial amount is zero
    double amount = 0;

    std::cout << "Enter amount to be deposited: " << '\n';
    std::cin >> amount;

    // checks that amount isn't in negetive.
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "That's not a valid amount." << '\n';
        return 0;
    }
}
void show_balance(double balance)
{
    std::cout << "The Total Balance in your Account is " << std::setprecision(2) << std::fixed << balance << '\n';
}
