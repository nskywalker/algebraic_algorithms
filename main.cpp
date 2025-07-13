#include "powing.h"
#include "fibonacci.h"
#include "prime_number.h"

void test_powing()
{
    std::println("powing:");
    show_powing(2, 4);
    show_powing(5, 2);
    show_powing(3, 2);
    show_powing(4, 4);
    show_powing(5, 4);
    std::println("");
}

void test_iterative_fibonacci()
{
    std::println("iterative_fibonacci:");
    show_fibonacci(2, &iterative_fibonacci);
    show_fibonacci(5, &iterative_fibonacci);
    show_fibonacci(40, &iterative_fibonacci);
    std::println("");
}

void test_recursive_fibonacci()
{
    std::println("recursive_fibonacci:");
    show_fibonacci(2, &recursive_fibonacci);
    show_fibonacci(5, &recursive_fibonacci);
    show_fibonacci(40, &recursive_fibonacci);
    std::println("");
}

void test_prime_number()
{
    std::println("prime_number:");
    show_prime_number(10);
    show_prime_number(100);
    show_prime_number(1000);
    show_prime_number(10000);
    std::println("");
}

int main()
{
    test_powing();
    test_iterative_fibonacci();
    test_recursive_fibonacci();
    test_prime_number();
    return 0;
}