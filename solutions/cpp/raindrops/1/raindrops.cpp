#include "raindrops.h"

namespace raindrops {

    std::string convert(int n)
    {
        std::string word = "";
        if (n % 3 == 0)
        {
            word += "Pling";
        }
        if (n % 5 == 0)
        {
            word += "Plang";
        }
        if (n % 7 == 0)
        {
            word += "Plong";
        }
        if (word == "")
        {
            word = std::to_string(n);
        }
        return word;
    }

}  // namespace raindrops
