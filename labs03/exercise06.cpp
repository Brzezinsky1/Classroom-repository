#include <iostream>
#include <cmath>  

double presentValueOfAnnuity(double payment, double annualRatePercent,
                             double years, int paymentsPerYear, bool isAnnuityDue) {
    double r = (annualRatePercent / 100.0) / paymentsPerYear; 
    int n = static_cast<int>(years * paymentsPerYear);        

    double pv = payment * (1 - std::pow(1 + r, -n)) / r;      

    if (isAnnuityDue) {
        pv *= (1 + r);
    }

    return pv;
}

int main() {
    double payment, annualRate, years;
    int paymentsPerYear;
    char timingChoice;
    bool isAnnuityDue = false;

    std::cout << "Enter payment per period: ";
    std::cin >> payment;

    std::cout << "Enter annual interest rate (percent): ";
    std::cin >> annualRate;

    std::cout << "Enter time horizon (years): ";
    std::cin >> years;

    std::cout << "Enter number of payments per year (1=yearly, 12=monthly, 52=weekly, 365=daily): ";
    std::cin >> paymentsPerYear;

    std::cout << "Are payments made at the beginning of each period? (Y/N): ";
    std::cin >> timingChoice;

    if (timingChoice == 'Y' || timingChoice == 'y') {
        isAnnuityDue = true;
    }

    double result = presentValueOfAnnuity(payment, annualRate, years, paymentsPerYear, isAnnuityDue);

    std::cout << "\nPresent value of the annuity: " << result << "\n";

    return 0;
}
