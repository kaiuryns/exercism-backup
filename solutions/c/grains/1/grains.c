#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index == 0){return 0;}
    
    uint64_t total = 1;
    
    for(int i = 1; i < index; i++)
    {
        total *= 2;
    }

    return total;
}

uint64_t total(void)
{
    return square(65) - 1;
}