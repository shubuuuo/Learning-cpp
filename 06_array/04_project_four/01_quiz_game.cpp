#include <iostream>

int main() {

    std::string questions[] = {
    "Which pokemon can learn steel wing?",
    "Which pokemon can learn dig?",
    "Which pokemon can learn mach punch?",
    "Which pokemon can learn solar beam?"
    };

    std::string options[][4] = {
    {"A. Steelix", "B. Umbreon", "C. Pegiot", "D. Osshawatt"},
    {"A. Sandile", "B. Venasaur", "C. Frokie", "D. Fenikin"},
    {"A. Bulbasaur", "B. Samurott", "C. Primeape", "D. Mudkip"},
    {"A. Septile", "B. Glaceon", "C. Fearow", "D. Chespin"},
    };

    char answerKey[] = {'C', 'A', 'C', 'A'};

    double size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    double score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "*******************************" << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "*******************************" << '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "CORRECT!" << '\n';
            score++;
        } else
        {
            std::cout << "WRONG!" << '\n';
            std::cout << "Correct Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout << "*************************************" << '\n';
    std::cout << "              RESULTS                " << '\n';
    std::cout << "*************************************" << '\n';
    
    std::cout << "Correct Guesses: #" << score << '\n';
    std::cout << "No. of questions: " << size << '\n';
    std::cout << "SCORE: " << (score/size)*100 << "%";
    return 0;
}       
