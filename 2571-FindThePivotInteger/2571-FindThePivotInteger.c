// Last updated: 10/4/2025, 5:44:55 PM
#include <math.h>

int pivotInteger(int n) {
    int total = n * (n + 1) / 2;
    int x = (int)sqrt(total);  // sqrt returns double, cast to int

    if (x * x == total)
        return x;
    else
        return -1;
}
