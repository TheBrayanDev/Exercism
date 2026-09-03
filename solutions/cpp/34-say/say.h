#pragma once
#include <string>
namespace say {

    std::string numbers_in_english(char t);
    std::string tens_in_english(const std::string& t);
    std::string hundred_in_english(const std::string& number, int digits);
    std::string in_english(long long int x);

}  // namespace say
