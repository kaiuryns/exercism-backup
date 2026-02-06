#include "largest_series_product.h"

int len(char *digits);

int64_t largest_series_product(char *digits, size_t span) {
    if (!digits)
        return -1;

    if (span == 0)
        return 1;

    int size = len(digits);
    if (size < 0)
        return -1;

    if ((size_t)size < span)
        return -1;

    int64_t max = 0;

    for (size_t i = 0; i <= (size_t)size - span; i++) {
        int64_t product = 1;

        for (size_t j = 0; j < span; j++) {
            product *= digits[i + j] - '0';
        }

        if (product > max)
            max = product;
    }
    return max;
}

int len(char *digits) {
    int i = 0;

    while (*digits) {
        if (*digits < '0' || *digits > '9')
            return -1;
        i++;
        digits++;
    }
    return i;
}
