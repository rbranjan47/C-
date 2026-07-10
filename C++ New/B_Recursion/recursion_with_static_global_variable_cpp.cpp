//
// Created by rbran on 30-06-2026.
//

#include "recursion_with_static_global_variable_cpp.h"
#include<iostream>
// Recursion is the technique of making a function call itself.
// Types:
// 1. Tail Recursion-In tail recursion, the function processes first and the recursive call is the last operation.
// 2. Head Recursion-In head recursion, the recursive call happens before any processing in the function. The function calls itself first and processes later.
// 3. Tree Recursion-Tree recursion happens when a function calls itself more than once within its body, forming a tree-like structure.
// 4. Indirect Recursion-Recursive function calling each other based on condition and stops when conditions fails.
//                      -In indirect recursion, a function does not call itself directly. Instead, it calls another function that eventually calls the first one, creating a chain of calls.
// 5. Nested Recursion-Nested recursion means the argument to a function is itself a recursive call

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
