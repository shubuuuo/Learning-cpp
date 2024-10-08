#include <iostream>

int add(int a);
int add(int a, int b);
int add(int a, int b, int c);
int add(int a, int b, int c, int d);
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {

    bakePizza("pepperoni");

    // Overloaded Fucntions = Different Versions of same functions
    // Or We can say same functions with different parameters.

    int a, b, c, d;

    std::cout << "Enter Your Numbers to Add: " << '\n';
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    int sum1 = add(a);
    int sum2 = add(a, b);
    int sum3 = add(a, b, c);
    int sum4 = add(a, b, c, d);

    std::cout << "The addition of the numbers are: " << sum1 << '\n';
    std::cout << "The addition of the numbers are: " << sum2 << '\n';
    std::cout << "The addition of the numbers are: " << sum3 << '\n';
    std::cout << "The addition of the numbers are: " << sum4 << '\n';

    return 0;
}

int add(int a) {
    return a;
}
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int add(int a, int b, int c, int d) {
    return a + b + c + d;
}
void bakePizza() {
    std::cout << "Here is your pizza." << '\n';
}
void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza." << '\n';
}
void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza." << '\n';
}
