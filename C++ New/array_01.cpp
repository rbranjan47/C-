//
// Created by rbran on 10-06-2026.
//

#include "array_01.h"
#include<iostream>
using namespace std;

// Passing array as parameter
void array_as_parameter(int *arr, int a) {
    int sum = 0;
    int multiplication_value = 1;
    // we can use for loop in both array as pointer and array as value
    for (int i = 0; i < a; i++) {
        sum = sum + arr[i];
    }
    cout << "sum is " << sum << endl;

    // We can use for each loop only for array as value not for array as pointer
    // for (int x: arr) {
    //     multiplication_value = multiplication_value * x;
    // }
    for (int i = 1; i < a; i++) {
        multiplication_value = multiplication_value * i;
    }
    cout << "multiplication value is " << multiplication_value << endl;
}

// Function returning pointer array
int *function_returning_array(int size) {
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++) {
        p[i] = i;
    }
    return p;
}

int main() {
    // Array Declaration
    int A[5];
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;

    cout << sizeof(A) << endl; //20 - As size of each array is 4 byte
    cout << A[1] << endl; //2
    cout << A[2] << endl; //3
    cout << A[3] << endl; // This will give garbage value, as no initialization
    cout << A[4] << endl; //  // This will give garbage value, as no initialization

    for (int x: A) {
        cout << x << endl;
    }

    // We can also define Array Size by taking length input.
    // But we can not take array values as input from user, as we can not use cin for array.
    cout << endl;
    cout << "Enter size of array" << endl;
    int array_input_size;
    cin >> array_input_size;
    int B[array_input_size];

    for (int y: B) {
        cout << y << endl; // As values not defined, so it will print garbage values
    }

    // Array as parameter
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array_as_parameter(array, 10);

    //
    int *ptr, size= 2;
    ptr  = function_returning_array(size);
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << endl;
    }
}
