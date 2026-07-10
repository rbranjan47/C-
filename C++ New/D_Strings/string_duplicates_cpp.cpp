//
// Created by rbran on 10-07-2026.
//

#include "string_duplicates_cpp.h"
#include<iostream>
using namespace std;

// checking duplicates using linear search
void check_duplicates_character(string str) {
    // making to lowercase
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // checking duplicates
    for (int i = 0; i < str.length(); i++) {
        int count = 1;
        bool checked = false;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                checked = true;
                break;
            }
        }

        if (checked) continue;
        // checking count occurrences
        for (int k = i + 1; k < str.length(); k++) {
            if (str[i] == str[k]) {
                count++;
            }
        }
        if (count > 1) {
            cout << str[i] << " repeats " << count << endl;
        }
    }
}

int main() {
    string str = "Hello World";
    check_duplicates_character(str);
}
