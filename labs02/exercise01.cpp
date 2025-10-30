#include <iostream>
#include <cmath>

int main() {
    double years, annualRatePercent, principal;
    std::cout << "Enter length of time horizon in years: ";
    std::cin >> years;
    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRatePercent;
    std::cout << "Enter initial deposit amount: ";
    std::cin >> principal;

    double r = annualRatePercent / 100.0;
    double futureValue = principal * std::pow(1.0 + r, years);

    std::cout << std::fixed << "\n";
    std::cout << "Future value: " << futureValue << "\n";
    return 0;
}