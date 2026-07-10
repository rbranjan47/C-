//
// Created by rbran on 03-07-2026.
//
// Nested Recursion-Nested recursion means the argument to a function is itself a recursive call
#include "recursion_nested_cpp.h"
#include<iostream>

using namespace std;

int recursion_nested_function(int n) {
    if (n > 100) {
        return n - 1;
    } else {
        return recursion_nested_function((recursion_nested_function(n + 11)));
    }
}

int main() {
    int result = recursion_nested_function(30);
    cout << "Result: " << result << endl;
    return 0;
}
