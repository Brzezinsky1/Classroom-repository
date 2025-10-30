#include <iostream>
#include "bs.h"

int main() {
    double spot, strike, ratePct, volPct, time;

    std::cout << "Spot price: ";
    std::cin >> spot;
    std::cout << "Strike price: ";
    std::cin >> strike;
    std::cout << "Risk-free rate (percent): ";
    std::cin >> ratePct;
    std::cout << "Volatility (percent): ";
    std::cin >> volPct;
    std::cout << "Time to maturity (years): ";
    std::cin >> time;

    double rate = ratePct / 100.0;
    double vol  = volPct / 100.0;

    double callPrice = blackScholesCall(spot, strike, rate, vol, time);
    double putPrice  = blackScholesPut(spot, strike, rate, vol, time);

    std::cout << "\nBlack–Scholes CALL price: " << callPrice << "\n";
    std::cout << "Black–Scholes PUT price:  " << putPrice  << "\n";

    return 0;
}
