//
// Created by rbran on 09-07-2026.
//

#include "strings_cpp.h"
#include<iostream>

using namespace std;

// ASCII (American standard Code)- Total 127 - to represent need 7 bits = 2 ^7 = 128 (but to allocate need 1 byte)
// A- 65      a- 97
// B- 66      b- 98
// C- 67      c- 99
// D- 68      d- 100
// E- 69      e- 101
// F- 70      f- 102
// G- 71      g- 103
// H- 72      h- 104
// I- 73      i- 105
// J- 74      j- 106
// K- 75      k- 107
// L- 76      l- 108
// M- 77      m- 109
// N- 78      n- 110
// O- 79      o- 111
// P- 80      p- 112
// Q- 81      q- 113
// R- 82      r- 114
// S- 83      s- 115
// T- 84      t- 116
// U- 85      u- 117
// V- 86      v- 118
// W- 87      w- 119
// X- 88      x- 120
// Y- 89      y- 121
// Z- 90      z- 122
// Numericals: 0- 48, 1- 49, 2- 50, 3- 51, 4- 52, 5- 53, 6- 54, 7- 55, 8- 56, 9- 57
// Enter - 10
// Space- 13
// Esc- 27


int main() {
    char ch = 'B';
    cout << ch << endl; // B
    cout << (int) ch << endl; // 66- ASCII value

    char char_array[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // \0 (backward slash zero - This turn character array to string
    cout << char_array << endl;

    //Changing case
    string name = "Hello Bellandur";
    for (int i = 0; i < name.length(); i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32;
        } else if (name[i] >= 'A' && name[i] <= 'Z')  {
            name[i] = name[i] + 32;
        }
    }
    cout << name << endl;

    // counting vowels and consonants
    int vowels = 0, consonants = 0;
    for (int i = 0; i < name.length(); i++) {
         if (name[i] != ' ') {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A'
                || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}
