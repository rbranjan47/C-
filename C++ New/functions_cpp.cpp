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

// Division function
int division(int a, int b) {
    return a / b;
}

void swap_two_numbers_call_by_value(int a, int b) {
    cout << "Initial numbers, a= " << a << " and b= " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping,  numbers, a= " << a << " and b= " << b << endl;
}

void check_odd_even_number_call_by_reference(int *a) {
    // Add * before the parameter use
    if (*a % 2 == 0) {
        cout << *a << " is even number" << endl;
    } else {
        cout << *a << " is odd number" << endl;
    }
}

int main() {
    int a = 10, b = 20;
    cout << add(a, b) << endl;
    cout << subtract(a, b) << endl;
    cout << multiply(a, b) << endl;
    cout << division(a, b) << endl;
    swap_two_numbers_call_by_value(a, b);

    check_odd_even_number_call_by_reference(&a);
}
