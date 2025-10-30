#include <iostream>
#include <cmath>  

double couponBondPrice(double time, double couponRate, int paymentsPerYear,
                       double yield, double faceValue) {

    int totalPayments = static_cast<int>(time * paymentsPerYear);
    double periodRate = yield / paymentsPerYear;
    double couponPayment = (couponRate / paymentsPerYear) * faceValue;

    double price = 0.0;

    for (int t = 1; t <= totalPayments; t++) {
        price += couponPayment / std::pow(1 + periodRate, t);
    }

    price += faceValue / std::pow(1 + periodRate, totalPayments);

    return price;
}

int main() {
    double time, couponRate, yield, faceValue;
    int paymentsPerYear;

    std::cout << "Enter time to maturity (years): ";
    std::cin >> time;

    std::cout << "Enter annual coupon yield (percent): ";
    std::cin >> couponRate;

    std::cout << "Enter number of coupons per year: ";
    std::cin >> paymentsPerYear;

    std::cout << "Enter yield to maturity (percent): ";
    std::cin >> yield;

    std::cout << "Enter face value of the bond: ";
    std::cin >> faceValue;

    couponRate /= 100.0;
    yield /= 100.0;

    double price = couponBondPrice(time, couponRate, paymentsPerYear, yield, faceValue);

    std::cout << "\nPrice of the coupon bond: " << price << "\n";

    return 0;
}
