#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles{};
    double sauce{};
};

int preparationTime(std::vector<std::string> layers, int avg_prep_time = 2);
amount quantities(std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string>& my_ingredient_list, const std::vector<std::string>& ingredient_list);
void addSecretIngredient(std::vector<std::string>& my_ingredient_list, std::string auntie_ingredient);
std::vector<double> scaleRecipe(const std::vector<double> quantities, int num_portions = 1);
}  // namespace lasagna_master