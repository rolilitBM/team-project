#include "rotsebozhinsky.h"
#include <cmath>

double nthTermG(double b1, double q, int n)
{
    return b1 * pow(q, n - 1);
}

double sumG(double b1, double q, int n)
{
    if (q == 1)
        return b1 * n;
    return b1 * (pow(q, n) - 1) / (q - 1);
}