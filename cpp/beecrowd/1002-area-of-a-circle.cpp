#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    const double PI = 3.14159;
    double r;

    std::cin >> r;

    double a = PI * pow(r, 2);

    std::cout << "A=" << std::fixed << std::setprecision(4) << a << std::endl;

    return 0;
}
