//
// Created by rbran on 11-06-2026.
//
// Pointers- A pointer however, is a variable that stores the memory address as its value.
//           A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator.
//           Pointer usage- 1. Accessing heap memory
//                          2. Accessing other resources
//                          3. Parameters passing

// Data variable -     int a = 10;
// Address Variable -  int *p;
//                     p = &a; // & is the address of operator, which gives the address of variable a and stores it in pointer variable p.

// To print value- *p from pointer, &a - to get value from address

#include "pointers_cpp.h"

#include <algorithm>
#include<iostream>

using namespace std;

int main() {
    // Integer or a variable
    int a = 10;
    int *p;
    p = &a;

    cout << p; // This will print the address of a
    cout << endl;
    cout << *p << endl; // This is a pointer of a
    cout << a << endl; // This is 'a', print its value

    // Array
    int array_a[5] = {1, 2, 3, 4, 5};
    int *q;
    q = &array_a[0];

    cout << q << endl;
    cout << *q << endl;// This will always print its first value

    for (int i=0; i<5; i++) {
        cout << *(q+i) << endl; // This will print all values of array
    }
}
