#include "sumn.h"

#include <stdio.h>

int sumn(int n)
{
    if (n == 1) // base case
        return 1;
    else
        return (2 * n - 1) + sumn(n - 1); // Recursive call
}