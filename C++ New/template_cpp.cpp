//
// Created by rbran on 28-06-2026.
//

#include "template_cpp.h"
#include<iostream>
using namespace std;

// Let suppose we are adding 2 numbers. And we don't know what type of numbers are coming in.
// To add numbers of different data types like integer, double, float, long.
// We can create template which we can utilize in all places instead of making multiple add class for different data types.

template<class T> // Defined class with genri data type- T.
class template_class {
private:
    T a; // variable a with data type T
    T b; // variable b with data type T

public:
    template_class(T a, T b);

    T add();

    T subtract();
};

template<class T>
template_class<T>::template_class(T a, T b) {
    this->a = a;
    this->b = b;
}

template<class T>
T template_class<T>::add() {
    return a + b;
}

template<class T>
T template_class<T>::subtract() {
    return a - b;
}

int main() {
    template_class<int> obj1(20, 10);
    cout << "Addition of 2 numbers is: " << obj1.add() << endl;
    cout << "Subtraction of 2 numbers is: " << obj1.subtract() << endl;

    template_class<double> obj2(20.5, 10.5);
    cout << "Addition of 2 numbers is: " << obj2.add() << endl;
    cout << "Subtraction of 2 numbers is: " << obj2.subtract() << endl;

    template_class<float> obj3(20.5f, 10.5f);
    cout << "Addition of 2 numbers is: " << obj3.add() << endl;
    cout << "Subtraction of 2 numbers is: " << obj3.subtract() << endl;

    template_class<long> obj4(200000L, 100000L);
    cout << "Addition of 2 numbers is: " << obj4.add() << endl;
    cout << "Subtraction of 2 numbers is: " << obj4.subtract() << endl;

    template_class<char> obj5('A', 'B');
    cout << "Addition of 2 characters is: " << obj5.add() << endl;
    cout << "Subtraction of 2 characters is: " << obj5.subtract() << endl;

    template_class<string> obj6("Hello", "World");
    cout << "Addition of 2 strings is: " << obj6.add() << endl;
    // cout << "Subtraction of 2 strings is: " << obj6.subtract() << endl; // This will give error as we can not subtract strings
}
