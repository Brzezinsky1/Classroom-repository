#include <iostream>
#include <cmath>

int main() {
    double years, annualRatePercent, payment;

    std::cout << "Enter length of time horizon (years): ";
    std::cin >> years;
    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRatePercent;
    std::cout << "Enter yearly payment amount: ";
    std::cin >> payment;

    double r = annualRatePercent / 100.0;

    double presentValue = payment * (1 - std::pow(1 + r, -years)) / r;

    std::cout << std::fixed;
    std::cout << "\nPresent value of the annuity: " << presentValue << "\n";

    return 0;
}
