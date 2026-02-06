#include "two_fer.h"

const std::string first = "One for ";
const std::string second = ", one for me.";

namespace two_fer
{
    std::string two_fer()
    {
        return first + "you" + second;
    }

    std::string two_fer(const std::string& name)
    {
        return first + name + second;
    }

} // namespace two_fer

