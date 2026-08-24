#include "pangram.h"
#include <set>
#include <cctype>

namespace pangram {

// TODO: add your solution here

bool is_pangram(const std::string &sentence)
{
    std::set<char> dict{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
        'w', 'x', 'y', 'z'};
    
    for (const auto &c : sentence) //! Using reference to avoid copying each character and later using erase to remove the character from the set. If the character is not in the set, nothing happens.
    {
        if (std::isalpha(c)) // Check if the character is an alphabet letter
        {
            dict.erase(std::tolower(c));
        }
    }
    return dict.empty();
}

} // namespace pangram
