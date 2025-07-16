//
// Created by googl on 13.07.2025.
//

#include "powing.h"

double iterative_pow(const double num, const uint32_t power)
{
    if (power == 0) return 1;
    double result = num;
    for (auto i = 1u; i < power; ++i)
    {
        result *= num;
    }
    return result;
}

double two_pow(double num, uint32_t power)
{
    if (power == 0) return 1;
    const auto r = two_pow(num, power / 2);
    double res = r * r;
    if (power % 2 != 0) {
        res *= num;
    }
    return res;
}

void show_powing(double num, uint32_t power, PowFunc func)
{
    std::println(std::cout, "{}^{} = {}", num, power, func(num, power));
}

