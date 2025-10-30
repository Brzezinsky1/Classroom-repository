#include <iostream>
#include <cmath>  

double presentValueOfAnnuity(double payment, double annualRatePercent, double years) {
    double r_month = (annualRatePercent / 100.0) / 12.0;  
    int n_months = static_cast<int>(years * 12);          

    double pv = payment * (1 - std::pow(1 + r_month, -n_months)) / r_month;
    return pv;
}

int main() {
    double payment, annualRate, years;

    std::cout << "Enter monthly payment amount: ";
    std::cin >> payment;

    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRate;

    std::cout << "Enter time horizon (years): ";
    std::cin >> years;

    double result = presentValueOfAnnuity(payment, annualRate, years);

    std::cout << "\nPresent value of the annuity: " << result << "\n";

    return 0;
}
