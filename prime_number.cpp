//
// Created by googl on 13.07.2025.
//

#include "prime_number.h"
#include <print>

bool is_prime(const int n)
{
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            ++count;
    }
    return count == 2;
}

int count_primes(const int n)
{
    int count = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (is_prime(i))
            ++count;
    }
    return count;
}

void show_prime_number(int n)
{
    std::println("count until {} = {}", n, count_primes(n));
}



