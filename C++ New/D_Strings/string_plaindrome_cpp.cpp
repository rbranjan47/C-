//
// Created by rbran on 10-07-2026.
//

#include "string_plaindrome_cpp.h"
#include<iostream>
using namespace std;

// Reversing string by-
// strings - Madam, Liril, Azza, Anna
// Comparing the string using ascii values
void reverse_string(string str) {
    string new_str;
    // Making to lowercase
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        new_str = str;
    }
    // Reversing the string
    char t;
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
    }
    // Checking palindrome
    if (str != new_str) {
        cout << "Not a palindrome" << endl;
    } else {
        cout << "Palindrome" << endl;
    }
}

int main() {
    reverse_string("Madam");
    reverse_string("Liril");
    reverse_string("Azza");
    reverse_string("Anna");
    reverse_string("Hello");
}
