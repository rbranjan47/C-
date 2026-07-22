//
// Created by rbran on 14-07-2026.
//

// Linked List-

#include "linkedList_cpp.h"
#include<iostream>

using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);

    first->next = second;

    cout << first->data << endl;
    cout << first->next->data;

    return 0;
}