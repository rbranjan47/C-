//
// Created by rbran on 09-07-2026.
//
//Arrays

#include "arrays_cpp.h"
#include<iostream>
using namespace std;


int main() {
    int array_a[5];
    int array_b[5] = {1, 2, 3, 4, 5};
    int array_c[5] = {2, 3, 5};
    int array_d[5] = {0};
    int array_e[] = {1, 2, 3, 4, 5, 6};

    //using pointer
    int *p;
    p = new int[5];

    // Static vs Dynamic array
    // Static array > Stored in stack, and we can not change its size
    // Dynamic array > Stored in heap, and we can change by creating another array in heap and assigning/copy all values to new array
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    int *q = new int[10];

    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
        cout << q[i] << endl;
    }

    //memory release to prevent from memory leak
    delete []p;
    delete []q;
    return 0;
}
