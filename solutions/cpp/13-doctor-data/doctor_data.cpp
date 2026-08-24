#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int generation)
{
    this->name = name;
    this->generation = generation;
}

heaven::Vessel::Vessel(std::string name, int generation, star_map::System current_system): Vessel(name, generation)
    {
        this->current_system = current_system;
    }

    heaven::Vessel heaven::Vessel::replicate(std::string new_name)
    {
        return Vessel(new_name, this->generation + 1, this->current_system);
    }

    void heaven::Vessel::make_buster()
    {
        this->busters += 1;
    }

    bool heaven::Vessel::shoot_buster()
    {
        if (this->busters > 0)
        {
            this->busters -= 1;
            return true;
        }
        return false;
    }

    std::string heaven::get_older_bob(heaven::Vessel vessel1, heaven::Vessel vessel2)
    {
        return (vessel1.generation < vessel2.generation) ? vessel1.get_name() : vessel2.get_name();
    }

    bool heaven::in_the_same_system(heaven::Vessel vessel1, heaven::Vessel vessel2)
    {
        return vessel1.current_system == vessel2.current_system;
    }
