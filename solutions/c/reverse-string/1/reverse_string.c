#include "reverse_string.h"
#include <stdlib.h>

char *reverse(const char *value) {
    if (!value)
        return NULL;

    int len = 0;
    while(value[len])
        len++;

    char *ptr = malloc(len + 1);

    if (!ptr)
        return NULL;

    for (int i = 0; i < len; i++)
        ptr[i] = value[len - i - 1];

    ptr[len] = '\0';

    return ptr;
}