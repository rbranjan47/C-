//
// Created by rbran on 09-07-2026.
//

#include "two_d_arrays_cpp.h"
#include<iostream>

using namespace std;

int main() {
    // ----------------------- declaration of 2d array -----------------------
    int two_d_array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Iterate
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << two_d_array[i][j] << " ";
        }
        cout << endl;
    }

    // ----------------------- single pointer -----------------------
    int *A[3];
    A[0] = new int[3];
    A[1] = new int[3];
    A[2] = new int[3];

    // Assigning value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = (i + 2) * (j + 3);
        }
    }

    // Iterating
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
