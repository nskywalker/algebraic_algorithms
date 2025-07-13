//
// Created by googl on 13.07.2025.
//

#include "fibonacci.h"

unsigned long iterative_fibonacci(const unsigned long n)
{
    unsigned long a = 1, b = 1;
    for (unsigned long i = 2; i < n; ++i)
    {
        const auto c = a + b;
        a = b;
        b = c;
    }
    return b;
}

unsigned long recursive_fibonacci(const unsigned long n)
{
    return n == 1 || n == 2 ? 1 : recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

void show_fibonacci(const unsigned long n, FibFunc func)
{
    if (func != &recursive_fibonacci && func != &iterative_fibonacci)
    {
        return;
    }
    std::println(std::cout, "F({}) = {}",  n, func(n));
}
