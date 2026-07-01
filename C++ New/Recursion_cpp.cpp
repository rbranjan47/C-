//
// Created by rbran on 30-06-2026.
//

#include "Recursion_cpp.h"
#include<iostream>

using namespace std;

int sum(int n) {
    // Static variable- S
    // Static int x is only initialized once, ever — it persists across all recursive calls (and would even persist across separate top-level calls to sum() later).
    // By the time the function starts returning values, all the x++ increments have already happened during the descent, so x is locked at its final value (3) for the rest of the unwinding.
    // That's why you get +3 added three separate times, not +1, +2, +3
    static int x = 0;
    if (n > 0) {
        x++;
        cout << x << " and " << n << endl;
        return n + sum(n - 1) + x;
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
    cout << sum(2) << endl;
    cout << multiply(5) << endl;
}
