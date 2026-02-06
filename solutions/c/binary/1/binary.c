#include "binary.h"

int convert(const char *input)
{
    int result = 0;
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '1')
            result = (result << 1) | 1;
        else if (input[i] == '0')
            result = (result << 1);
        else
            return -1;
    }
    return result;
}