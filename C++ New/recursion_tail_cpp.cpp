//
// Created by rbran on 02-07-2026.
//
// 1. Tail Recursion-Recursive function calling itself and that call is the last statement of the function. But in the end it should not perform and action. It should just call function.

#include "recursion_tail_cpp.h"
#include<iostream>

using namespace std;

// Time complexity- O(n)
// Space complexity- O(n)
void function_tail_recursion_cpp(int n) {
    if (n > 0) {
        cout << n << endl;
        // This is tail recursion and function just calling itself and not performing any actions
        function_tail_recursion_cpp(n - 1);
    } else {
    }
}

// Every tail recursion can be written in a loop.
// Time complexity- O(n)
// Space complexity- O(1) Conclusion- Loop is more efficient than tail recursion
void function_tail_recursion_vs_loop(int n) {
    if (n > 0) {
        while (n > 0) {
            cout << n << endl;
            n--;
        }
    }
}

int main() {
    function_tail_recursion_cpp(5); // Output: 5, 4, 3, 2, 1
    function_tail_recursion_vs_loop(5); // Output: 5, 4, 3, 2, 1
}
