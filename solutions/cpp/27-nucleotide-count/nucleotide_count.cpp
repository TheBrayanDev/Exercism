#include "nucleotide_count.h"
#include <stdexcept>


namespace nucleotide_count {

    std::map<char, int> count(std::string dna_sequence)
    {
        std::map<char, int> counts{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

        for (auto c : dna_sequence){
            if (!counts.contains(c)){
                throw std::invalid_argument("Invalid nucleotide");
            }
            ++counts[c];
        }
        return counts;
    }
} // namespace nucleotide_count
