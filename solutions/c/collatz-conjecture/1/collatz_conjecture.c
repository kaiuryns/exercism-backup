#include "collatz_conjecture.h"

int steps(int start)
{
    if (start < 1) {return ERROR_VALUE;}
    
    int times = 0;
    
    for (;start > 1; times++)
    {
        if ((start & 1) == 0)
        {
            start >>= 1;
        }
        else
        {
            start = (start * 3) + 1;
        }
    }
    return times;
}