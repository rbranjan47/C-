//
// Created by rbran on 27-06-2026.
//

#include "../c_to_cpp_conversion.h"
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

#include<iostream>
using namespace std;

// struct rectangle_properties {
class rectangle_properties {
private:
    int length; // 4bytes
    int breadth; // 4 bytes
    char x;
    // };
    // struct square_properties {
    // int side;
    // };

public:
    void rectangle_length(int value) {
        length = value;
        cout << "Length of rectangle: " << length << endl;
    }

    void rectangle_breadth(int value) {
        breadth = value;
        cout << "Breadth of rectangle: " << breadth << endl;
    }

    // Structure passing as parameter in a function
    void square_function(int s) {
        cout << "Square side: " << s << endl;
        cout << "Area of square: " << s * s << endl;
    }
};

int main() {
    // struct rectangle_properties r1;
    // r1.length = 10;
    // r1.breadth = 5; 
    rectangle_properties rec;
    rec.rectangle_length(10);
    rec.rectangle_breadth(5);

    rec.rectangle_length(20); //10
    rec.rectangle_breadth(7); //5

    // Calling struct square, where we were passing struct as parameter
    // struct square_properties s1;
    // s1.side = 4;
    rec.square_function(4);
    return 0;
}
