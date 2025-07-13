//
// Created by googl on 13.07.2025.
//

#include "powing.h"

double iterative_pow(const double num, const uint32_t power)
{
    double result = num;
    for (auto i = 1u; i < power; ++i)
    {
        result *= num;
    }
    return result;
}

void show_powing(double num, uint32_t power)
{
    std::println(std::cout, "{}^{} = {}", num, power, iterative_pow(num, power));
}

