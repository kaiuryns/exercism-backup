#include "roman_numerals.h"
#include <stdlib.h>
#include <string.h>

char *to_roman_numeral(unsigned int number) {
    if (number == 0) {
        char *empty = malloc(1);
        if (empty) empty[0] = '\0';
        return empty;
    }

    struct {
        unsigned int value;
        const char *letters;
    } map[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
        {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
        {1, "I"}
    };


    char *ptr = malloc(32);
    if (!ptr) 
        return NULL;

    size_t pos = 0;

    for (size_t i = 0; i < sizeof(map)/sizeof(map[0]); i++) {
        while (number >= map[i].value) {
            size_t len = strlen(map[i].letters);
            memcpy(ptr + pos, map[i].letters, len);
            pos += len;
            number -= map[i].value;
        }
    }

    ptr[pos] = '\0';
    return ptr;
}
