#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    if (!lhs || !rhs || (strlen(lhs) != strlen(rhs))) 
        return -1;
        
    int differences = 0;
        
    for (int i = 0; lhs[i] != '\0'; i++) {
        if (lhs[i] != rhs[i]) differences++;
    }
    
    return differences;
}