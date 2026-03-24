#include "grains.h"

namespace grains {

// TODO: add your solution here

unsigned long long square(int n)
{
    return std::pow(2, n - 1);
}

unsigned long long total()
{
    unsigned long long int sum = 0;
    for (int i = 1; i <= 64; ++i) {
        sum += square(i);
    }
    return sum;
}

} // namespace grains
