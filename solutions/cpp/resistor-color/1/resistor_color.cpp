#include "resistor_color.h"

namespace resistor_color {

    std::vector<std::string> colors() 
    {
         return {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    }
    
    int color_code(const std::string& color)
    {
        const auto& col = colors();  // chama a função
        auto it = std::find(col.begin(), col.end(), color);
    
        if (it != col.end()) {
            return it - col.begin();
        }
    
        throw std::invalid_argument("invalid color");
    }
// TODO: add your solution here

}  // namespace resistor_color
