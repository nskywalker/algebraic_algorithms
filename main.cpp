#include "eratosphen.h"
#include "powing.h"
#include "fibonacci.h"
#include "prime_number.h"

void test_powing()
{
    std::println("powing:");
    const auto f = &iterative_pow;
    show_powing(2, 4, f);
    show_powing(5, 2, f);
    show_powing(3, 2, f);
    show_powing(4, 4, f);
    show_powing(5, 4, f);
    std::println("");
}

void test_two_powing()
{
    std::println("two powing:");
    const auto f = &two_pow;
    show_powing(2, 4, f);
    show_powing(5, 2, f);
    show_powing(3, 2, f);
    show_powing(4, 4, f);
    show_powing(5, 4, f);
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

void test_fibonacci_gold()
{
    std::println("fibonacci_gold:");
    auto f = &fibonacci_gold;
    show_fibonacci(2, &fibonacci_gold);
    show_fibonacci(5, &fibonacci_gold);
    show_fibonacci(40, &fibonacci_gold);
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

void test_eratosphen()
{
    std::println("eratosphen:");
    auto f = &eratosphen;
    show_eratosphen(10, f);
    show_eratosphen(100, f);
    show_eratosphen(1000, f);
    show_eratosphen(10000, f);
    std::println("");
}

void junior_level()
{
    std::println("junior_level:");
    test_powing();
    test_iterative_fibonacci();
    test_recursive_fibonacci();
    test_prime_number();
}

void middle_level()
{
    std::println("middle_level:");
    test_two_powing();
    test_fibonacci_gold();
    test_eratosphen();
}

int main()
{
    middle_level();
    return 0;
}