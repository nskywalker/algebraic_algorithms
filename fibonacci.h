//
// Created by googl on 13.07.2025.
//

#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <iostream>
#include <print>

using FibFunc = unsigned long(*)(unsigned long);

unsigned long iterative_fibonacci(unsigned long n);

unsigned long recursive_fibonacci(unsigned long n);

void show_fibonacci(unsigned long n, FibFunc func);

#endif //FIBONACCI_H
