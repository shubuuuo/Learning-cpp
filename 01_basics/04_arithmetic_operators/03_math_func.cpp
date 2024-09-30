#include <iostream>
#include <cmath>

int main() {

    // Some useful math related functions.
    double w = 3.87;
    double x = 5;
    double y = 10;
    double z, a, b, c, d, e, f, g;

    z = std::max(w, x);
    std::cout << z << '\n';

    b = std::min(w, x);
    std::cout << b << '\n';

    c = pow(4, 2);
    std::cout << c << '\n';

    d = sqrt(9);
    std::cout << d << '\n';

    a = abs(-10);
    std::cout << a << '\n';

    e = round(w);
    std::cout << e << '\n';

    f = ceil(w);
    std::cout << f << '\n';

    g = ceil(w);
    std::cout << g << '\n';
    return 0;
}