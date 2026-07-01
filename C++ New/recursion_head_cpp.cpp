//
// Created by rbran on 02-07-2026.
//

#include "recursion_head_cpp.h"
//
// Created by rbran on 02-07-2026.
//
// 1. Headr Recursion-Recursive function calling itself and that call is the first statement of the function. But in the end it should not perform and action. It should just call function.

#include<iostream>

using namespace std;

// Time complexity- O(n)
// Space complexity- O(n)
void function_head_recursion_cpp(int n) {
    if (n > 0) {
        // This is head recursion and function just calling itself and not performing any actions
        function_head_recursion_cpp(n - 1);
        cout << n << endl;
    } else {
    }
}

// Every head recursion can be written in a loop.
// Time complexity- O(n)
// Space complexity- O(1) Conclusion- Loop is more efficient than head recursion
void function_head_recursion_vs_loop(int n) {
    if (n > 0) {
        int i = 1;
        while (i <= n) {
            cout << i << endl;
            i++;
        }
    }
}

int main() {
    cout << "Head Recursion" << endl;
    function_head_recursion_cpp(5); // Output: 5, 4, 3, 2, 1
    cout << "Loop" << endl;
    function_head_recursion_vs_loop(5); // Output: 5, 4, 3, 2, 1
}
