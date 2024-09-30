#include <iostream>

/*
    cout << (insertion operator)
    cin >> (extraction operator)
*/
int main() {

    std::string your_name;
    int your_age;

    std::cout << "What's Your name?: ";
    std::cin >> your_name;

    std::cout << "What's Your Age?: ";
    std::cin >> your_age;

    std::cout << "Your name is: " << your_name << '\n';
    std::cout << "Your age is: " << your_age << '\n';

    // Now the problem is that this input can only take one charachter and we cannot put spaces to put other charaters.
    // To tackle that problem, We will use getline() function.
    // But the another problem with it comes that if we use getline function then we cannot give another input previously before inline or else it will not read it.
    // It accepts the new line character in the buffer.
    // For example:

    std::cout << "What's Your Age?: ";
    std::cin >> your_age;

    std::cout << "What's Your Full name?: ";
    std::getline(std::cin, your_name);

    std::cout << "Your name is: " << your_name << '\n'; // Output = ERROR
    std::cout << "Your age is: " << your_age << '\n';
 
    // To solve this issue

    std::cout << "What's Your Age?: ";
    std::cin >> your_age;

    std::cout << "What's Your Full name?: ";
    std::getline(std::cin >> std::ws, your_name);

    std::cout << "Your name is: " << your_name << '\n'; // Output = ERROR
    std::cout << "Your age is: " << your_age << '\n';
    
    // The (std::ws) will eliminate any newline or whitespaces in the user input lol
    return 0;
}
