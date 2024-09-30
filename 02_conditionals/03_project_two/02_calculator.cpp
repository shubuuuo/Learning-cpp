#include <iostream>
#include <cmath>
#include <time.h>

void addition(double num1, double num2, double result);
void subtraction(double num1, double num2, double result);
void multiplication(double num1, double num2, double result);
void division(double num1, double num2, double result);
void square(double num1, double num2, double result);
void squareRoot(double num1, double num2, double result);
void remainder(int num1, int num2, double result);
void mean(double num1, double num2, double result);
void squareOfAnyNum(double num1, double num2, double result, int num3);
void squareRootOfAnyNum(double num1, double num2, double result, int num3);
void logarithm(double num1, double num2, double result, double num3);

int main() {

    char input;
    double num1, num2, num3, result;
    std::cout << "*****************************" << '\n';
    std::cout << "      CALCULATOR      " << '\n';
    std::cout << "*****************************" << '\n';


    std::cout << "Enter (+) => Addition" << '\n';
    std::cout << "Enter (-) => Subtraction" << '\n';
    std::cout << "Enter (*) => Multiplication" << '\n';
    std::cout << "Enter (/) => Division" << '\n';
    std::cout << "Enter (^) => Square" << '\n';
    std::cout << "Enter (s) => Square Root" << '\n';
    std::cout << "Enter (%) => Remainder" << '\n';
    std::cout << "Enter (&) => mean" << '\n';
    std::cout << "Enter (p) => power" << '\n';
    std::cout << "Enter (w) => root of power" << '\n';
    std::cout << "Enter (l) => Logaritiom" << '\n';
    std::cout << "*****************************" << '\n';
    std::cout << "Enter the Operation: " << '\n';
    std::cin >> input;
    std::cout << "Enter the first number: " << '\n';
    std::cin >> num1;
    std::cout << "Enter the second number: " << '\n';
    std::cin >> num2;

    switch (input)
    {
    case '+':
        addition(num1, num2, result);
        break;
    case '-':
        subtraction(num1, num2, result);
        break;
    case '*':
        multiplication(num1, num2, result);
        break;
    case '/':
        division(num1, num2, result);
        break;
    case '^':
        square(num1, num2, result);
        break;
    case 's':
        squareRoot(num1, num2, result);
        break;
    case '%':
        remainder(num1, num2, result);
        break;
    case '&':
        mean(num1, num2, result);
        break;
    case 'p':
        std::cout << "Enter the power: ";
        std::cin >> num3;
        squareOfAnyNum(num1, num2, result, num3);
        break;
    case 'w':
        std::cout << "Enter the power: ";
        std::cin >> num3;
        squareRootOfAnyNum(num1, num2, result, num3);
        break;
    case 'l':
        std::cout << "Enter the base: ";
        std::cin >> num3;
        logarithm(num1, num2, result, num3);
        break;
    default:
        std::cout << "Can't find inputs" << '\n';
        break;
    }
    std::cout << '\n' << "*****************************" << '\n';

    return 0;
}

void addition(double num1, double num2, double result) {
    result = num1 + num2;
    std::cout << num1 << " + " << num2 << " = " << result;
}
void subtraction(double num1, double num2, double result){
    result = num1 - num2;
    std::cout << num1 << " - " << num2 << " = " << result;
}
void multiplication(double num1, double num2, double result){
    result = num1 * num2;
    std::cout << num1 << " * " << num2 << " = " << result;
}
void division(double num1, double num2, double result){
    result = num1 / num2;
    std::cout << num1 << " / " << num2 << " = " << result;
}
void square(double num1, double num2, double result){
    result = pow(num1, 2);
    std::cout << num1 << "^(2) " << " = " << result << '\n';
    result = pow(num2, 2);
    std::cout << num2 << "^(2) " << " = " << result << '\n';
}
void squareRoot(double num1, double num2, double result){
    result = sqrt(num1);
    std::cout << "/^" << num1 << " = " << result << '\n';
    result = sqrt(num2);
    std::cout << "/^" << num2 << " = " << result << '\n';
}
void remainder(int num1, int num2, double result){
    result = num1 % num2;
    std::cout << "Remainder of " << num1 << " and " << num2 << " = " << result;
}
void mean(double num1, double num2, double result){
    result = (num1 + num2)/2;
    std::cout << "Mean of " << num1 << " and " << num2 << " = " << result;
}
void squareOfAnyNum(double num1, double num2, double result, int num3){
    result = pow(num1, num3);
    std::cout << num1 << "^(" << num3 << ") " << " = " << result << '\n';
    result = pow(num2, num3);
    std::cout << num2 << "^(" << num3 << ") " << " = " << result << '\n';
}
void squareRootOfAnyNum(double num1, double num2, double result, int num3){
    result = pow(num1, (1.0/num3));
    std::cout << num1 << "^(1/" << num3 << ") " << " = " << result << '\n';
    result = pow(num2, (1.0/num3));
    std::cout << num2 << "^(1/" << num3 << ") " << " = " << result << '\n';
}
void logarithm(double num1, double num2, double result, double num3){
    result = log(num1) / log(num3);
    std::cout << num1 << "`(" << num3 << ") " << " = " << result << '\n';
    result = log(num2) / log(num3);
    std::cout << num2 << "`(" << num3 << ") " << " = " << result << '\n';
}
