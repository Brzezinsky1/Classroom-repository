#include <iostream>
#include <cmath>  

double zeroCouponBondPrice(double time, double yield, double faceValue) {
    return faceValue / std::pow(1 + yield, time);
}

int main() {
    double time, yield, faceValue;

    std::cout << "Enter time to maturity (years): ";
    std::cin >> time;

    std::cout << "Enter yield to maturity (as percent): ";
    std::cin >> yield;

    std::cout << "Enter face value of the bond: ";
    std::cin >> faceValue;

    yield = yield / 100.0;

    double price = zeroCouponBondPrice(time, yield, faceValue);

    std::cout << "\nPrice of the zero-coupon bond: " << price << "\n";

    return 0;
}
