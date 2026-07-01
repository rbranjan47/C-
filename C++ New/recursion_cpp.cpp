//
// Created by rbran on 01-07-2026.
//

#include "recursion_cpp.h"
#include<iostream>

using namespace std;

int function_test(int num) {
    if (num > 0) {
        if (num % 2 == 0) {
            cout << num << " number is even" << endl;
            return function_test(num-1);
        } else {
            cout << num << " number is odd" << endl;
            return function_test(num-1);
        }
    }else {
        cout << "Number is less than or equal to 0" << endl;
        return 0;
    }
}

int main() { int n;
    cout << "Enter a number: ";
    cin >> n;
    function_test(n);
}
