#include "bs.h"
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

    double poly = a1 * k
                + a2 * std::pow(k, 2)
                + a3 * std::pow(k, 3)
                + a4 * std::pow(k, 4)
                + a5 * std::pow(k, 5);

    double w = 1.0 - (1.0 / std::sqrt(2.0 * pi)) * std::exp(-0.5 * L * L) * poly;

    if (x < 0.0) {
        w = 1.0 - w;
    }
    return w;
}

double blackScholesPut(double spot,
                       double strike,
                       double rate,
                       double volatility,
                       double time) {
    double d1 = (std::log(spot / strike)
                + (rate + 0.5 * volatility * volatility) * time)
                / (volatility * std::sqrt(time));
    double d2 = d1 - volatility * std::sqrt(time);

    return strike * std::exp(-rate * time) * normcdf(-d2)
         - spot * normcdf(-d1);
}

double blackScholesCall(double spot,
                        double strike,
                        double rate,
                        double volatility,
                        double time) {
    double d1 = (std::log(spot / strike)
                + (rate + 0.5 * volatility * volatility) * time)
                / (volatility * std::sqrt(time));
    double d2 = d1 - volatility * std::sqrt(time);

    return spot * normcdf(d1)
         - strike * std::exp(-rate * time) * normcdf(d2);
}
