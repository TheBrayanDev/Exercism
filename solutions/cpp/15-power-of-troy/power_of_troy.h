#ifndef POWER_OF_TROY_H
#define POWER_OF_TROY_H

#pragma once

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

class human {
    public:
    std::unique_ptr<artifact> possession{};
    std::shared_ptr<power> own_power{};
    std::shared_ptr<power> influenced_by{};
    private:
};

void give_new_artifact(human& human, std::string new_power);

void exchange_artifacts(std::unique_ptr<artifact>& artifact1, std::unique_ptr<artifact>& artifact2);

void manifest_power(human& human, std::string new_power);

/// @brief Interaction on powers
/// @param human1 caster
/// @param human2 the target.
void use_power(human& human1, human& human2);

int power_intensity(const human& human);
}  // namespace troy

#endif