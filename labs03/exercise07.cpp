#include <iostream>
#include <cmath>  

double normcdf(double x) {
    const double a1 = 0.319381530;
    const double a2 = -0.356563782;
    const double a3 = 1.781477937;
    const double a4 = -1.821255978;
    const double a5 = 1.330274429;
    const double pi = 3.14159265358979323846;

    double L = std::fabs(x);
    double k = 1.0 / (1.0 + 0.2316419 * L);

    double w = 1.0 - (1.0 / std::sqrt(2.0 * pi)) * std::exp(-L * L / 2.0) *
        (a1 * k + a2 * std::pow(k, 2) + a3 * std::pow(k, 3) +
         a4 * std::pow(k, 4) + a5 * std::pow(k, 5));

    if (x < 0.0) {
        w = 1.0 - w;
    }

    return w;
}

int main() {
    double x;
    std::cout << "Enter x value: ";
    std::cin >> x;

    std::cout << "N(" << x << ") = " << normcdf(x) << "\n";
    return 0;
}
//'N' is a bad function name because it can easily conflict with variables, macros, or constants named 'N'.

