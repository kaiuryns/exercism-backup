#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {

    std::map<char, int> count(std::string dna) 
    { 
        std::map<char, int> self_map{{'A', 0},{'C', 0},{'G', 0},{'T', 0}}; 
        
        for (char i : dna) 
        {
            if (i != 'A' and i != 'C' and i != 'G' and i != 'T') 
            { 
                throw std::invalid_argument("invalid char"); 
            } 
            self_map.at(i)++;
        } 
        
        return self_map; 
    }

}  // namespace nucleotide_count
