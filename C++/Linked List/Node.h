#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Node {
    friend class LinkedList;

private:
    int data;
    Node *next;
public:
    Node();
    Node(int nData);
};
