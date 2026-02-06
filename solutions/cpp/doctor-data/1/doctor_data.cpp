#include "doctor_data.h"

namespace heaven
{
    Vessel::Vessel(std::string name, int generation, star_map::System current_system): name(name), generation(generation), current_system(current_system) {}

    Vessel Vessel::replicate(std::string new_name)
    {
        Vessel clone{new_name, generation + 1, current_system};
        return clone;
    }
    void Vessel::make_buster()
    {
        ++busters;
    }
    bool Vessel::shoot_buster()
    {
        if (busters > 0)
        {
            --busters;
            return true;
        }
        return false;
    }

    std::string get_older_bob(Vessel first, Vessel second)
    {
        return first.generation < second.generation ? first.name : second.name;
    }
    bool in_the_same_system(Vessel first, Vessel second)
    {
        return first.current_system == second.current_system;
    }
       
}