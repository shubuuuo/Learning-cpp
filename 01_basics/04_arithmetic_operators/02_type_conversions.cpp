#include <iostream>

/*
    type conversion = conversion a value of one data type to another
    Implicit = automatic
    Explicit = Precede vaude with new data type (int)
*/
int main() {

    double PI = (int) 3.14;
    // The value of PI is stored in an integer(hence decimal values are erased) then it is gived to double.
    std::cout << PI << '\n';
    std::cout << PI / 5 << '\n';

    char ten = 100;
    std::cout << ten << '\n';
    // Output = (d) => ASCII value of 100 - d
    // Therefore it converted the number 100 to a charachter d implicitly.

    // Let's do Explicitly
    std::cout << (char) 67 << '\n'; // output = (C)

    // Where is it useful?
    // For Example we are checking the question papers of students and giving them their percentage.
    int correct_ans = 15;
    int total_questions = 40;
    double score_one = correct_ans/total_questions * 100;

    std::cout << score_one << "%" << '\n'; // Output = (0%)
    // That's because we are doing integer division and it will convert the decimal values into integers.
    // Therefore we need to use type conversions.

    double score_two = correct_ans/(double)total_questions * 100;
    std::cout << score_two << "%" << '\n'; // Output = (37.5%)
    return 0;
}