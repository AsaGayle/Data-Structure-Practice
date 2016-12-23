#pragma once

#include <iostream>
#include <vector>

class Node {
    friend class LinkedList;

private:
    int data;
    Node *next;
public:
    Node();
    Node(int nData);
};
