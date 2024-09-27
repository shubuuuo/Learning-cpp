#include <iostream>

int main() {
    using namespace std;

    string name = "Ramesh";
    cout << "Hello guys, I am " << name;
    // By this method we can avoid using std, but std has 100 different etities that leads to multiple errors
    // To tackle that problem... We will Instead Write.
    // using std::cout;
    // using std::string;

    return 0;
}