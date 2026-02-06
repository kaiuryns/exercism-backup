#include "binary.h"

namespace binary {

    int convert(std::string b)
    {
        int result{};
        for (char n : b)
        {
                if (n != '0' && n != '1') {return 0;}
                
                result = (result << 1) + (n - '0');
        }
        return result;
    }
// TODO: add your solution here

}  // namespace binary
