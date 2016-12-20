#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Node {
    friend class BST;

private:
    int data;
    Node* left;
    Node* right;
public:
    Node();
    Node(int nData);
    int get_data();
};
