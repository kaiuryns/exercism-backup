#include "armstrong_numbers.h"

int f_size(int number);
int f_pow(int number, int exp);

bool is_armstrong_number(int candidate) {
    int sum = 0;                                            
    int tmp = candidate;
    int times = f_size(candidate);
    
    while (tmp > 0) {
        sum += f_pow(tmp % 10, times);
        tmp /= 10;
    }
    return sum == candidate;
}

int f_size(int number) {
    int i = 0;

    if (number == 0)
        return 1;

    while (number > 0) {
        i++;
        number /= 10;
    }
    return i;
}

int f_pow(int number, int exp) {
    int result = 1;

    while (exp--) {
        result *= number;
    }
    return result;
}