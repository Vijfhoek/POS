#include "math.h"

double asinh(double x)
{
    return __builtin_asinh(x);
}

float asinhf(float x)
{
    return __builtin_asinhf(x);
}

long double asinhl(long double x)
{
    return __builtin_asinhl(x);
}
