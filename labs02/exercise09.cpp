#include <iostream>
#include <cmath>
#include <stdexcept> 

int main() {
    double years, annualRatePercent, payment;
    int choice;

    try {
        std::cout << "Enter length of time horizon (years): ";
        std::cin >> years;

        std::cout << "Enter annual interest rate (percent): ";
        std::cin >> annualRatePercent;

        std::cout << "Enter yearly payment amount: ";
        std::cin >> payment;

        double r = annualRatePercent / 100.0;

        if (r <= 0) {
            throw std::invalid_argument("Interest rate must be greater than zero.");
        }

        std::cout << "\nChoose calculation type:\n";
        std::cout << "1 - Present value of an annuity\n";
        std::cout << "2 - Present value of a perpetuity\n";
        std::cout << "Enter your choice (1 or 2): ";
        std::cin >> choice;

        double presentValue = 0.0;

        switch (choice) {
            case 1: 
                presentValue = payment * (1 - std::pow(1 + r, -years)) / r;
                std::cout << "\nPresent value of the annuity: ";
                break;

            case 2: 
                presentValue = payment / r;
                std::cout << "\nPresent value of the perpetuity: ";
                break;

            default:
                throw std::invalid_argument("Invalid choice. Please enter 1 or 2.");
        }

        std::cout << std::fixed << presentValue << "\n";
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "\nError: " << e.what() << "\n";
    }

    return 0;
}
