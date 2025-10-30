#include <iostream>
#include <cmath>

int main() {
    double annualRatePercent;
    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRatePercent;

    double r_annual = annualRatePercent / 100.0;
    double r_month = r_annual / 12.0;

    double t_months = std::log(3.0) / std::log(1.0 + r_month);

    std::cout << std::fixed;
    std::cout << "The deposit will triple after approximately "
              << t_months << " months.\n";

    return 0;
}
