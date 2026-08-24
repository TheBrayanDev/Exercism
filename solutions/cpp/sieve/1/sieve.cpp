#include "sieve.h"

namespace sieve {

    std::vector<int> primes(int n)
    {
        std::vector<int> list{};

        // Create list
        for (int i{2}; i <= n; i++){
            list.push_back(i);
        }

        // For each number on the list, delete all the multiples
        for (auto x : list){
            for (int i{x*2}; i <= n; i +=x){
                std::erase(list, i);
            }
        }

        return list;
    }

} // namespace sieve
