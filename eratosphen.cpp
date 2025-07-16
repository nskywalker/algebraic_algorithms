//
// Created by googl on 16.07.2025.
//

#include "eratosphen.h"

#include <algorithm>
#include <ranges>

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

int eratosphen_linear(int n)
{
    std::vector lp(n + 1, 0);
    std::vector<int> pr;
    pr.reserve(n / 2);
    for (int i = 2; i <= n; ++i)  {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (auto p : pr) {
            if (p <= lp[i] && p * i <= n) {
                lp[i * p] = p;
            }
        }
    }
    return pr.size();

}

void show_eratosphen(int n, Func f)
{
    std::println(std::cout, "Eratosphen({}) = {}", n, f(n));
}