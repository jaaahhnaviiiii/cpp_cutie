#include "20.01_math.h"

int square(int x)
{
    return x * x;
}

int cube(int y)
{
    return y * y * y;
}

int max(int z, int w)
{
    if (z < w)
        return w;
    else
        return z;
}