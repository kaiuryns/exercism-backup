#include "binary.h"

int convert(const char *input)
{
    int result = 0;
    
    for (int i = 0; input[i] != '\0'; i++) 
    {
        if (input[i] != '1' && input[i] != '0') {return INVALID;}
        
        result = (result << 1) | (input[i] - '0');
    }
    return result;
}