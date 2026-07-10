//
// Created by rbran on 08-07-2026.
//

#include "factorial_recursion_cpp.h"
#include<iostream>

//factorial- n! i.e. n * (n-1) * (n-2) * (n-3) * ... * 1
using namespace std;

int factorial_recursion(int n) {
    if (n > 0) {
        return n * factorial_recursion(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial_recursion(n) << endl;
    return 0;
}
