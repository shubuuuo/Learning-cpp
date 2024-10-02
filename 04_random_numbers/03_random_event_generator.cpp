#include <iostream>
#include <ctime>

int main() {

    srand(time(0));
    int lottery = rand() % 6 + 1;
    std::cout << lottery << '\n';
    
    switch (lottery)
    {
    case 1:
        std::cout << "Congratulations! You win a Coupan!" << '\n';
        break;
    case 2:
        std::cout << "Congratulations! You win a Airplane Ticket!" << '\n';
        break;
    case 3:
        std::cout << "Congratulations! You win a Pokemon Plushie!" << '\n';
        break;
    case 4:
        std::cout << "Congratulations! You win a Hat!" << '\n';
        break;
    case 5:
        std::cout << "Congratulations! You win a Concert Ticket!" << '\n';
        break;
    case 6:
        std::cout << "Congratulations! You win a Medival Sword!" << '\n';
        break;
    
    default:
        break;
    }

    return 0;
}