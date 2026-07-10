//
// Created by rbran on 10-07-2026.
//

#include "string_anagram_cpp.h"
#include<iostream>
using namespace std;

// Anagram
void check_anagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        cout << "Not anagram!" << endl;
    }

    //convert both string to lower case
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != ' ' && str1[i] >= 'a' && str1[i] <= 'z' && str2[i] != ' ' && str2[i] >= 'a' && str2[i] <= 'z') {
            str1[i] = str1[i] - 32;
            str2[i] = str2[i] - 32;
        }
    }

    for (int i = 0; i < str1.length(); i++) {
        bool checked = false;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                checked = true;
                str2[j] = '#';
                break;
            }
        }
    }
}

int main() {
    check_anagram("Medical", "Decimal");
    return 0;

}
