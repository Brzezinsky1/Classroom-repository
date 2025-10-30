#include <iostream>
#include <cmath>

double normcdf(double x) {
    const double a1 = 0.319381530;
    const double a2 = -0.356563782;
    const double a3 = 1.781477937;
    const double a4 = -1.821255978;
    const double a5 = 1.330274429;
    const double pi = 3.14159265358979323846;

    double L = std::fabs(x);
    double k = 1.0 / (1.0 + 0.2316419 * L);

    double w = 1.0 - (1.0 / std::sqrt(2.0 * pi)) * std::exp(-L * L / 2.0) *
        (a1 * k + a2 * std::pow(k, 2) + a3 * std::pow(k, 3) +
         a4 * std::pow(k, 4) + a5 * std::pow(k, 5));

    if (x < 0.0)
        w = 1.0 - w;

    return w;
}

double blackScholesCallPrice(double spot, double strike,
                             double rate, double volatility, double time) {
    double d1 = (std::log(spot / strike) + (rate + 0.5 * volatility * volatility) * time)
                / (volatility * std::sqrt(time));
    double d2 = d1 - volatility * std::sqrt(time);

    double callPrice = spot * normcdf(d1) - strike * std::exp(-rate * time) * normcdf(d2);
    return callPrice;
}

int main() {
    double spot, strike, rate, volatility, time;

    std::cout << "Enter spot price: ";
    std::cin >> spot;

    std::cout << "Enter strike price: ";
    std::cin >> strike;

    std::cout << "Enter risk-free interest rate (percent): ";
    std::cin >> rate;

    std::cout << "Enter volatility (percent): ";
    std::cin >> volatility;

    std::cout << "Enter time to maturity (in years): ";
    std::cin >> time;

    rate /= 100.0;
    volatility /= 100.0;

    double callPrice = blackScholesCallPrice(spot, strike, rate, volatility, time);

    std::cout << "\nEuropean call option price (Black-Scholes): " << callPrice << "\n";

    return 0;
}
