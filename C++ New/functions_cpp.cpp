//
// Created by rbran on 21-06-2026.
//

#include "functions_cpp.h"
#include<iostream>

// Monolithic Programming- In 1 main functions all code written and all task done in same main method/function.
// Modular/Procedural Programming- In multiple functions, multiple tasks written.

using namespace std;
// Addition function
int add(int a, int b) {
    return a + b;
}

// Substraction function
int subtract(int a, int b) {
    return a - b;
}

// Multiplication function
int multiply(int a, int b) {
    return a * b;
}

// Dividion function
int division(int a, int b) {
    return a / b;
}

int main() {
    cout << add(10, 20) << endl;
    cout << subtract(10, 20) << endl;
    cout << multiply(10, 20) << endl;
    cout << division(10, 20) << endl;
}
