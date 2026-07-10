//
// Created by rbran on 20-06-2026.
//

// Reference in C++
// A reference variable is an alias for an existing variable. It is created using the '&' operator.

#include "../reference_cpp.h"
#include <iostream>

using namespace  std;
int main() {
    int x = 10;
    int &ref = x;  // ref is a reference to x
    std::cout << "x: " << x << std::endl;
    std::cout << "ref: " << ref << std::endl;
    ref = 20;  // This will modify x
    std::cout << "x after modifying ref: " << x << std::endl; // 20, as we change the reference value
    return 0;
}