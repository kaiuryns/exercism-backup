#include "grains.h"

namespace grains {

    long long unsigned int square(int squareNumber)
    {
        return pow(2, squareNumber - 1);
    }

    long long unsigned int total()
    {
        return ULLONG_MAX;
    }

}  // namespace grains
