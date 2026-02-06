#include "pangram.h"
#include <ctype.h>

bool is_pangram(const char *sentence) {
    if (!sentence) 
        return false;
    
    const char abc[] = "abcdefghijklmnopqrstuvwxyz";

    for (const char *i = abc; *i; i++) {
        bool found = false;

        for (const char *j = sentence; *j; j++) {
            char tmp = *j;
            if (tmp >= 'A' && tmp <= 'Z')
                tmp += 32;
            
            if (tmp == *i) {
                found = true;
                break;
            }
        }

        if (!found)
            return false;
    }

    return true;
}
