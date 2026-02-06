#pragma once
#include <string>

namespace star_map
{
    enum class System
    {
        BetaHydri,
        Sol,   
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven
{
    class Vessel
    {
        public:

            Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol);
            Vessel replicate(std::string new_name);
            void make_buster();
            bool shoot_buster();

            std::string name;
            int generation;
            star_map::System current_system;
            int busters;
    };
       
    std::string get_older_bob(Vessel first, Vessel second);
    bool in_the_same_system(Vessel first, Vessel second);
}
