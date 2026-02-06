#include "isogram.h"

bool is_isogram(const char phrase[])
{
    if (!phrase) return false;
    
    for (int i = 0; phrase[i] != '\0'; i++)
    {
        if (phrase[i] == ' ' || phrase[i] == '-') continue;
        
        for (int j = i + 1; phrase[j] != '\0'; j++)
        {
            if (phrase[i] == phrase[j] ||
                phrase[i] == phrase[j] - LOWER ||
                phrase[i] - LOWER == phrase[j]) return false;
        }
    }
    return true;
}