#include "hamming.h"
#include <stdexcept>
#include <ranges>

namespace hamming {

// TODO: add your solution here

int compute(std::string dna_chain_1, std::string dna_chain_2)
{
    if (dna_chain_1.size() !=  dna_chain_2.size()){
        throw std::domain_error("Both DNAs are not equal in size");
    }
    int count{0};
    for ( auto&& [idx, val] : std::views::enumerate(dna_chain_1)){ // C++23 feature
        if (val != dna_chain_2[idx]){
            ++count;
        }
    }
    return count;
}
} // namespace hamming
