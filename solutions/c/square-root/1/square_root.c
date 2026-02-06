#include "square_root.h"

int square_root(int number) {
    int i = 2;
    
    while (1) {
        if ( number / i * number / i == number)
            return i;
        if ( number / i * number / i > number)
            i *= 2;
        if ( number / i * number / i < number)
            i--;
    }
    return i;
}