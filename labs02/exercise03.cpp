#include <iostream>

int main() {
    double annualRatePercent, principal;

    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRatePercent;
    std::cout << "Enter initial deposit amount: ";
    std::cin >> principal;

    double r_month = (annualRatePercent / 100.0) / 12.0;
    double balance = principal;
    int months = 0;

    while (balance < 3 * principal) {
        balance *= (1.0 + r_month);
        months++;
    }

    std::cout << std::fixed;
    std::cout << "It will take " << months << " months for the deposit to triple.\n";
    std::cout << "Final balance: " << balance << "\n";

    return 0;
}
