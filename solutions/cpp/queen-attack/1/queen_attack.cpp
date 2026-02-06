#include "queen_attack.h"

namespace queen_attack {

    chess_board::chess_board(std::pair<int, int> white, std::pair<int, int> black)
    {
        if (!valid(white) || !valid(black))
        {
            throw std::domain_error("error");
        }
        
        if (white == black)
        {
            throw std::domain_error("error");
        }
        b = black;
        w = white;
    }

    bool chess_board::can_attack() const
    {
        int w_plus{w.first + w.second};
        int w_minus{w.first - w.second};
        int b_plus{b.first + b.second};
        int b_minus{b.first - b.second};
        
        if (w.first == b.first || w.second == b.second
            || w_plus == b_plus || w_minus == b_minus){return true;}
        
        return false;
    }
    
    bool chess_board::valid(const std::pair<int,int>& pos) const
    {
        return pos.first >= 0 && pos.second >= 0 &&
            pos.first < 8 && pos.second < 8;
    }

    
// TODO: add your solution here

}  // namespace queen_attack
