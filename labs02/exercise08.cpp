#include <iostream>

int main() {
    double annualRatePercent, payment;

    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRatePercent;

    std::cout << "Enter yearly payment amount: ";
    std::cin >> payment;

    double r = annualRatePercent / 100.0;

    if (r <= 0) {
        std::cout << "Interest rate must be greater than 0.\n";
        return 1;
    }

    double presentValue = payment / r;

    std::cout << std::fixed;
    std::cout << "\nPresent value of the perpetuity: " << presentValue << "\n";

    return 0;
}
