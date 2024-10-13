
/*
    So, Now we are going to learn how to iterate over an array through the for loop.
*/ 

#include <iostream>

int main() {
    // intiliazing & commiting values
    std::string students[] = {"Mahesh", "Ramesh", "Suresh", "Madan"};

    // using for loop to print those values
    for (int i = 0; i < 4; i++)
    {
        std::cout << students[i] << '\n';
    }

    // still this is not the best way to print those values, therefore
    std::string balls[] = {"green", "blue", "white", "brown", "pink"};
    for (int i = 0; i < sizeof(balls)/sizeof(std::string); i++)
    {
        std::cout << balls[i] << '\n';
    }
    // the benifit of this is that we dont need to change the conditional operator when the size or element changes in the main array
    // as it takes referene from the main array directly

    return 0;
}