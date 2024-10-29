#include <vector>
#include "Divisors.h"
#include <iostream>
#include <chrono>
#include <cassert>
#include <vector>
#include <cmath>
// Optimized divisors function to reduce time complexity
std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i <= std::sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i);
            if (i != number / i)
            {
                // Insert larger divisor at the correct position without sorting
                result.insert(result.begin() + result.size(), number / i);
            }
        }
    }
    return result;
}