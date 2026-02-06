#include "pangram.h"

long unsigned int n = 0;
std::string letters = "abcdefghijklmnopqrstuvwxyz";
std::string empty = "";

namespace pangram {

    void lete(std::string sentence)
    {
        for (long unsigned int i = 0; i < sentence.size(); i++)
        {
            if (tolower(sentence[i]) == letters[n])
            {
                empty += letters[n];
                return;
            }
        }
        return;
    }


    bool is_pangram(std::string sentence)
    {
        empty = "";
        n = 0;
        while (n < letters.size())
        {
            lete(sentence);
            n++;
        }
        return letters == empty;
    }


}  // namespace pangram
