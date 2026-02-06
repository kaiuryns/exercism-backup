#include "pangram.h"

static char f_tolower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

bool is_pangram(const char *sentence) {
    if (!sentence) 
        return false;
    
    bool seen[26] = {0};

    for (const char *s = sentence; *s; s++) {
        char letter = f_tolower(*s);
        
        if (letter >= 'a' && letter <= 'z')
            seen[letter - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i])
            return false;
    }

    return true;
}