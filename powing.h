//
// Created by googl on 13.07.2025.
//

#ifndef POWING_H
#define POWING_H

#include <cstdint>
#include <iostream>
#include <print>

using PowFunc = double (*)(double, uint32_t);

double iterative_pow(double num, uint32_t power);

double two_pow(double num, uint32_t power);

void show_powing(double num, uint32_t power, PowFunc func);


#endif //POWING_H
