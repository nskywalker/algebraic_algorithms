//
// Created by googl on 16.07.2025.
//

#include "eratosphen.h"

int eratosphen(const int n)
{
    std::vector prime(n + 1, false);
    int cnt = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (!prime[i])
        {
            ++cnt;
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = true;
            }
        }
    }
    return cnt;
}

void show_eratosphen(int n, Func f)
{
    std::println(std::cout, "Eratosphen({}) = {}", n, f(n));
}