// ft_fmod.c
#include "minirt.h"

double ft_fmod(double x, double y)
{
    long long n;

    if (y == 0.0)
        return x; // or handle as an error
    n = (long long)(x / y);
    return x - n * y;
}