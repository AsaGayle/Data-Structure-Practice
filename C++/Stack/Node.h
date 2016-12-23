#pragma once

#include <iostream>
using namespace std;

class Node {
    friend class Stack;

private:
    int data;
    Node* next;
public:
    Node();
    Node(int nData);
    int get_data();
};
