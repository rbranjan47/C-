//
// Created by rbran on 03-07-2026.
//

#include "recursion_indirect_cpp.h"
#include<iostream>

using namespace std;

int function_A(int n);
int function_B(int n);

int function_A(int n) {
    if (n > 0) {
        cout << n + function_B(n - 1) << endl;
    } else {
        return 0;
    }
}

int function_B(int n) {
    if (n > 0) {
        cout << n + function_A(n - 1) << endl;
    } else {
        return 0;
    }
}

int main() {
    function_A(5);
    return 0;
}
