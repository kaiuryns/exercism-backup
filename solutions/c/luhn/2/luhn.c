#include "luhn.h"

#include <string.h>

bool luhn(const char *num)
{
    int sum = 0, len = strlen(num), count = 0, factor = 1;

    for (const char *p = num + len - 1; p >= num; p--)
  {
        unsigned char digit = *p - '0';
        if (*p == ' ') continue;
        if (digit > 9) return false; 

        digit = digit * factor;
        digit -= (digit > 9) * 9;

        sum += digit;
        factor = 3 - factor;
        count++;
    }

    return (count++ > 1) && (sum % 10 == 0);
}