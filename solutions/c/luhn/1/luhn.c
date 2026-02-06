#include "luhn.h"

bool luhn(const char *num)
{
    int sum = 0, count = 0, len = 0;
    
    while (num[len] != '\0') len++;

    for (int i = len - 1; i >= 0; i--) 
    {
        if (num[i] == ' ') continue;
        if (num[i] < '0' || num[i] > '9') return false;

        int value = num[i] - '0';

        if (count & 1) 
        {
            value <<= 1;
            if (value > 9) value -= 9;
        }

        sum += value;
        count++;
    }

    if (count < 2) return false;

    return (sum % 10 == 0);
}