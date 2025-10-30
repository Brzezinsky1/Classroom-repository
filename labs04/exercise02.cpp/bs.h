#ifndef BS_H
#define BS_H

double blackScholesPut(double spot,
                       double strike,
                       double rate,
                       double volatility,
                       double time);


double normcdf(double x);

#endif
