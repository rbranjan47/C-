//
// Created by rbran on 10-06-2026.
//

#include "array_01.h"
#include<iostream>
using namespace std;

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

    for (int x:A) {
        cout << x << endl;
    }

    // We can also define Array Size by taking length input.
    // But we can not take array values as input from user, as we can not use cin for array.
    cout<<endl;
    cout<<"Enter size of array"<<endl;
    int array_input_size;
    cin>>  array_input_size;
    int B[array_input_size];

    for (int y : B) {
        cout << y << endl;  // As values not defined, so it will print garbage values
    }
}
