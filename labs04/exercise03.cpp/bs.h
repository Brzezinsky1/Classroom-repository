#ifndef BS_H
#define BS_H

double normcdf(double x);

double blackScholesPut(double spot,
                       double strike,
                       double rate,
                       double volatility,
                       double time);

double blackScholesCall(double spot,
                        double strike,
                        double rate,
                        double volatility,
                        double time);

#endif
