//
// Created by rbran on 11-06-2026.
//
// Structure:- Defining any information of any objects/things using parameter is called structure.

// Example: Student, Employee, Car, etc. are all examples of structure.
// We can define the structure of these objects by using parameters like name, age, salary, etc.
// Structure is a user-defined data type that allows us to combine data items of different kinds.
// It is used to represent a record. Structure is defined using the keyword 'struct' in C++.
// It is a collection of variables of different types under a single name.
// The variables in a structure are called members.
// We can access the members of a structure using the dot operator (.) or the arrow operator (->) if we are using pointers.
// Structure can also contain functions as members, which are called member functions.
// Structure is used to create complex data types that can represent real-world entities more effectively than simple data types like int, float, etc.


#include "structure_cpp.h"
#include<iostream>

using namespace std;

struct rectangle_properties {
    int length; // 4bytes
    int breadth; // 4 bytes
    char x;
};

struct square_properties {
    int side;
};

// Structure passing as parameter in a function
void square_function(struct square_properties s) {
    cout << "Square side: " << s.side << endl;
    cout << "Area of square: " << s.side * s.side << endl;
}


int main() {
    struct rectangle_properties r1;
    r1.length = 10;
    r1.breadth = 5;

    cout << "Length of rectangle: " << r1.length << endl; //10
    cout << "Breadth of rectangle: " << r1.breadth << endl; //5

    cout << sizeof(r1) << endl; // 12 as 4 (for length), 4 (for breadth), 4 (for x)

    // Or we can initialize like this
    struct rectangle_properties r2 = {20, 7};

    cout << "Length of rectangle: " << r2.length << endl; //20
    cout << "Breadth of rectangle: " << r2.breadth << endl; //7

    cout << sizeof(r2) << endl; // 12 as 4 (for length), 4 (for breadth), 4 (for x)

    // Calling struct square, where we are passing struct as parameter
    struct square_properties s1;
    s1.side = 4;
    square_function(s1);
    return 0;
}
