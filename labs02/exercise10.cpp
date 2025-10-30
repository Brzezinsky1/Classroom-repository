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
    double pv = 0.0;       
    int year = 1;          

    while (year <= years) {
        pv += payment / std::pow(1 + r, year);
        year++;
    }

    std::cout << std::fixed;
    std::cout << "\nPresent value of the annuity: " << pv << "\n";

    return 0;
}
