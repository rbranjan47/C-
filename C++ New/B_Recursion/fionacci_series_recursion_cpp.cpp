//
// Created by rbran on 09-07-2026.
//

#include "fionacci_series_recursion_cpp.h"
#include<iostream>
#include <cstring>
using namespace std;

int f_array[20];
int fibonacci_series_recursion(int num) {
    if (num <= 1) {
        return num;
    }

    if (f_array[num] != -1) {
        return f_array[num];
    }

    f_array[num] = fibonacci_series_recursion(num - 1)
                 + fibonacci_series_recursion(num - 2);

    return f_array[num];
}

int main() {
    memset(f_array, -1, sizeof(f_array));

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = "
         << fibonacci_series_recursion(n) << endl;

    return 0;
}
