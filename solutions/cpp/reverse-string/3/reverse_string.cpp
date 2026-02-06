#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string name)
    {
        reverse(name.begin(), name.end());
        return name;
    }

}  // namespace reverse_string
