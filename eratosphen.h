//
// Created by googl on 16.07.2025.
//

#ifndef ERATOSPHEN_H
#define ERATOSPHEN_H

#include <vector>
#include <print>
#include <iostream>

using Func = int(*)(int);

int eratosphen(int n);

int eratosphen_linear(int n);

void show_eratosphen(int n, Func f);

#endif //ERATOSPHEN_H
