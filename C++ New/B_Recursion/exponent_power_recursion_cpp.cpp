//
// Created by rbran on 09-07-2026.
//

#include "exponent_power_recursion_cpp.h"
#include<iostream>

//exponentiation- a^n i.e. a * a * a * ... * a (n times)
using namespace std;

int exponent_power_recursion(int value, int number_times) {
    if (number_times > 0) {
        return value * exponent_power_recursion(value, number_times - 1);
    } else {
        return 1;
    }
}

int main() {
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "Result: " << exponent_power_recursion(base, exponent) << endl;
    return 0;
}
