#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

    int steps(int number)
    {
        int interations{};
        
        if (number < 1){throw std::domain_error("invalid number");}

        while (number > 1)
            {
                if (number % 2 == 0){number = number / 2;}
                else{number = (number * 3) + 1;}
                interations++;
            }
        return interations;
    }
// TODO: add your solution here

}  // namespace collatz_conjecture
