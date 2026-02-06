#pragma once

#include <utility>
#include <stdexcept>

namespace queen_attack {

    class chess_board
    {
        public:

            chess_board(std::pair<int, int> white, std::pair<int, int> black);
            std::pair<int, int> white() const {return w;}
            std::pair<int, int> black() const {return b;}
            bool can_attack() const;
    
        private:

            std::pair<int, int> w;
            std::pair<int, int> b;
            bool valid(const std::pair<int,int>& pos) const;
    
    };
// TODO: add your solution here

}  // namespace queen_attack
