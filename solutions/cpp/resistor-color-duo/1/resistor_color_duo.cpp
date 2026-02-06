#include "resistor_color_duo.h"

namespace resistor_color_duo 
{

    std::vector<std::string> colors() 
    {
         return {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    }
    int value(const std::vector<std::string>& colors_value)
    {
        const auto& col = colors(); 
        int values{};
        int n{};

        for (auto i : colors_value)
            {
                auto it = std::find(col.begin(), col.end(), colors_value[n]);
            
                if (it != col.end()) 
                {
                    if (n == 0)
                    {
                        values = (it - col.begin()) * 10;
                        n++;
                    }
                    else if (n == 1)
                    {
                        values += it - col.begin();
                        break;
                    }
                        
                }
            }
        return values;
    }
// TODO: add your solution here

}  // namespace resistor_color_duo
