#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(std::vector<std::string> layers, int avg_prep_time){
    return size(layers) * avg_prep_time;
};

amount quantities(std::vector<std::string> layers){
    struct amount temp{};
    for (auto c: layers){
        if (c == "noodles"){
            temp.noodles += 50;
        } else if (c == "sauce"){
            temp.sauce += 0.2;
        }
    }
    return temp;
}

void addSecretIngredient(std::vector<std::string>& my_ingredient_list, const std::vector<std::string>& ingredient_list){
    my_ingredient_list.pop_back();
    my_ingredient_list.emplace_back(ingredient_list.back());
};

void addSecretIngredient(std::vector<std::string>& my_ingredient_list, std::string auntie_ingredient){
    my_ingredient_list.pop_back();
    my_ingredient_list.emplace_back(auntie_ingredient);
};

std::vector<double> scaleRecipe(const std::vector<double> quantities, int num_portions){
    std::vector<double> scaled_quantities = quantities;
    for(auto& q: scaled_quantities){
        q *= num_portions/2.0;
    }
    return scaled_quantities;
};

}  // namespace lasagna_master