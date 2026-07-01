//
// Created by rbran on 02-07-2026.
//

// Tree recursion-Recursive method calling itself more than 1 time

#include "recursion_tree_cpp.h"
#include<iostream>

using namespace std;

// Time complexity- O(2^n)
// Space complexity- O(n)
void function_tree_recursion_cpp(int n) {
    if (n > 0) {
        // This is tree recursion and function calls itself more than once
        cout << n << endl;
        function_tree_recursion_cpp(n - 1);
        function_tree_recursion_cpp(n - 1);
    } else {
    }
}

// Every tree recursion can be written in a loop.
// Time complexity- O(n)
// Space complexity- O(1) Conclusion- Loop is more efficient than tree recursion
// void function_tree_recursion_vs_loop(int n) {
//     if (n > 0) {
//         while (n > 0) {
//             cout << n << endl;
//             n--;
//             n--;
//         }
//     }
// }

int main() {
    cout << "Tree Recursion" << endl;
    function_tree_recursion_cpp(5); // Output: 5, 4, 3, 2, 1, 4, 3, 2, 1
    cout << "Loop" << endl;
    function_tree_recursion_vs_loop(5); // Output: 5, 3, 1
}
