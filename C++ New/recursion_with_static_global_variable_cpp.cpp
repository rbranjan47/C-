//
// Created by rbran on 30-06-2026.
//

#include "recursion_with_static_global_variable_cpp.h"
#include<iostream>
// Recursion is the technique of making a function call itself.
// Types:
// 1. Tail Recursion-Recursive function calling itself and that call is the last statement of the function. But in the end it should not perform and action. It should just call function.
// 2. Head Recursion-Recursive function calling itself and that call is the first statement of the function. But in the end it should not perform and action. It should just call function.
// 3. Tree Recursion-Recursive function calling itself more than 1 time.
// 4. Indirect Recursion-Recursive function calling each other based on condition and stops when conditions fails
// 5. Nested Recursion

using namespace std;


// Global variable also behave like static variable. And single copy would be created for x
// int x = 0;

int sum(int n) {
    // Static variable- S
    // Static int x is only initialized once, ever — it persists across all recursive calls (and would even persist across separate top-level calls to sum() later).
    // By the time the function starts returning values, all the x++ increments have already happened during the descent, so x is locked at its final value (3) for the rest of the unwinding.
    // That's why you get +3 added three separate times, not +1, +2, +3
    static int x = 0;
    if (n > 0) {
        x++;
        cout << x << " and " << n << endl;
        return sum(n - 1) + x;
    } else {
        return 0;
    }
}

int multiply(int n) {
    if (n > 0) {
        return n * multiply(n - 1);
    } else {
        return 1;
    }
}

int main() {
    cout << sum(5) << endl;
    cout << multiply(5) << endl;
}
