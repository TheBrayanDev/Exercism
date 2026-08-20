#pragma once
#include <string>

namespace hamming {

//! The Hamming distance is only defined for sequences of equal length, so an attempt to calculate it between sequences of different lengths should not work.

int compute(std::string dna_chain_1, std::string dna_chain_2);

}  // namespace hamming
