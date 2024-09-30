#include <iostream>

int main() {

    // Increment Operator
    int student = 20;
    student = student + 2; // Incremented 2 in student
    student += 2; // Works same as above, incremented 2 more
    student = student + 1;
    student += 1;
    student++;
    std::cout << "There are " << student << " students in the class." << '\n';

    // Decrement Operator
    int balls = 20; 
    balls = balls - 2; // Decremented 2 in balls
    balls -= 2; // Works same as above, decremneted 2 more
    balls = balls - 1;
    balls -= 1;
    balls --; 
    std::cout << "There are " << balls << " balls in the class." << '\n';
    
    // (+=) This means we are adding something in the variable,
    //      then we are equating with it.
    // (=+) This means we are equating(changing) the variable,
    //      then we are just putting the sign to it.
    // For eg:-

    int pens = 10;
    pens += 3;
    std::cout << "There are " << pens << " pens in the class." << '\n';
    pens =+ 3;
    std::cout << "There are " << pens << " pens in the class." << '\n';

    // Therefore we know that (=+) is wrong syntax to do arithmetic as it will not give desired output.

    // Multiplication Operator
    int eraser = 2;
    eraser = eraser * 2;
    eraser *= 2;
    std::cout << "There are " << eraser << " eraser in the class." << '\n';
    
    // Division Operator
    double rounder = 1000;
    rounder = rounder / 11;
    rounder /= 11;
    std::cout << "There are " << rounder << " rounder in the class." << '\n';
    
    // Modulous or Remainder operator
    int benches = 5;
    benches = benches % 2;
    std::cout << "There are " << benches << " benches left as a remainder if we divide it by 2" << '\n';
    benches = benches % 3;
    std::cout << "There are " << benches << " benches left as a remainder if we divide it by 3" << '\n';
    
    // Arithmetic Operators have a order of presedence while solving.
    /*
    1. Parenthesis [()]
    2. Multiplication [*]
    3. Division [/]
    4. Subtraction [-]
    5. Addition [+]
    */
    double scales = ((20 - 5) + 4) * 5 / 2;
    std:: cout << "There are " << scales << " scales in the class." << '\n';
    return 0;
}
