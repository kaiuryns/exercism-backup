#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string name)
    {
        std::string novo = name;
        reverse(novo.begin(), novo.end());
        return novo;
    }

}  // namespace reverse_string
