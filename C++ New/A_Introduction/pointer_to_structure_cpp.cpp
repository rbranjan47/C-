//
// Created by rbran on 20-06-2026.
//

#include "../pointer_to_structure_cpp.h"
#include <iostream>

// A pointer to a structure in C++ is a variable that holds the memory address of a struct, just like a pointer to any other type.

using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main() {
    // Assigning values to the structure
    rectangle r = {10, 20};
    // To access members, use the dot(.) operator
    cout << r.length << endl; //10
    cout << r.breadth << endl; //20

    // Now we can also assign value using pointer
    //NOTE: 2 ways to access members of a structure using pointer
    // ptr -> x - the arrow operator (preferred, cleaner)
    // (*ptr).x - dereference first, then use dot operator

    rectangle *ptr_rectangle = &r;
    // To access values in pointer, use arrow (->) operator
    cout << ptr_rectangle->length << endl; //10
    cout << ptr_rectangle->breadth << endl; //20

    // We can also assign new value using pointer
    ptr_rectangle->length = 30;
    (*ptr_rectangle).breadth = 40;
    cout << ptr_rectangle->length << endl; // 30
    cout << ptr_rectangle->breadth << endl; // 40

    cout << "area is ";
    cout << ptr_rectangle->length * ptr_rectangle->breadth << endl;
}
